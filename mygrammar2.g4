grammar mygrammar2;

INT: [0-9]+;
FLOAT: [0-9]+ '.' [0-9]+;

SUB: '-';
ADD: '+';
DIV: '/';
MUL: '*';

SEP: ';';

LBR: '(';
RBR: ')';

WS: [ \t\r\n] -> skip;

expr
    : term (ADD | SUB) expr     # term_ADD_SUB_expr_node
    | term                      # term_node
    ;

term
    : factor (MUL | DIV) term   # factor_MUL_DIV_term_node
    | factor                    # factor_node
    ;

factor
    : SUB factor                # unary_minus_node          // унарный минус
    | LBR expr RBR              # LBR_expr_RBR_node
    | FLOAT                     # FLOAT_node
    | INT                       # INTEGER_node
    ;

row: expr SEP                   # expr_sep_node;

prog
    : row EOF?                  # one_line_prog_node
    | prog row EOF?             # mult_line_prog_node
    ;
