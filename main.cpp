#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "antlr4-runtime.h"
#include "parser/mygrammar2Lexer.h"
#include "parser/mygrammar2Parser.h"
#include "build/hhh.h"

// Рекурсивная функция для красивого многострочного вывода дерева разбора с отступами
void printTree(antlr4::tree::ParseTree* tree, antlr4::Parser* parser, int indent = 0) {
    std::string indentStr(indent * 2, ' ');  // 2 пробела на уровень отступа

    // Проверяем, лист ли это (токен)
    if (tree->children.empty()) {
        // Просто выводим текст узла
        std::cout << indentStr << tree->getText() << "\n";
        return;
    }

    // Выводим название правила или токена
    std::string nodeText = antlr4::tree::Trees::getNodeText(tree, parser);

    std::cout << indentStr << "(" << nodeText << "\n";

    for (size_t i = 0; i < tree->children.size(); ++i) {
        printTree(tree->children[i], parser, indent + 1);
    }

    std::cout << indentStr << ")\n";
}

int main() {
    std::ifstream stream("C:\\Users\\tooly\\Desktop\\Antlr_Pascal\\input.txt");
    if (!stream) {
        std::cout << "There is no input file! :(\n" << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << stream.rdbuf();
    std::string inputText = buffer.str();

    std::cout << "Input text: '" << inputText << "'\n" << std::endl;

    antlr4::ANTLRInputStream input(inputText);
    mygrammar2Lexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    mygrammar2Parser parser(&tokens);

    auto tree = parser.prog();
    if (!tree) {
        std::cerr << "parser.prog() return nullptr\n" << std::endl;
        return 1;
    }

    std::cout << "Tree of input:" << std::endl;
    printTree(tree, &parser);

    auto visitor = hhh{};
    std::any result = visitor.visit(tree); // tree — корень parse tree

    std::cout << "\nResult of input:"<< std::endl;
    if (result.type() == typeid(double)) {
        std::cout << std::any_cast<double>(result) << std::endl;
    }
    else if (result.type() == typeid(std::vector<double>)) {
        auto vec = std::any_cast<std::vector<double>>(result);
        for (double val : vec)
            std::cout << val << std::endl;
    }

    return 0;
}
