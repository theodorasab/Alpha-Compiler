
enum iopcode_t {
    ASSIGN_I,
    ADD_I,
    SUB_I,
    MUL_I,
    DIV_I   , MOD_I,
    UMINUS_I, AND_I, OR_I,
    NOT_I, IF_EQ_I, IF_NOTEQ_I,
    IF_LESSEQ_I, IF_GREATEREQ_I, IF_LESS_I,
    IF_GREATER_I, CALL_I, PARAM_I,
    RET_I, GETRETVAL_I, FUNCSTART_I,
    FUNCEND_I, TABLECREATE_I,
    TABLEGETELEM_I, TABLESETELEM_I
};