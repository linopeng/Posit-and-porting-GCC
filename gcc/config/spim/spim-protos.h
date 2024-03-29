extern int is_index_reg (int REGN);
extern int  is_base_reg (int REGN);
extern int is_arg_reg (int REGN);
extern int is_return_val_reg (int REGN);
extern int non_strict_index_reg (int REGN);
extern int non_strict_base_reg (int REGN);
extern int is_caller_saved_reg (int REGN);
extern int is_callee_saved_reg (int REGN);
extern int is_general_reg (int REGN);
extern void spim_asm_internal_label (FILE *stream, const char *prefix, unsigned int labelno);
extern void spim_asm_globalize_label (FILE *stream, const char *name);
extern rtx spim_struct_value_rtx (tree fndecl, int incoming);
extern enum reg_class regno_reg_class (int REGN);
extern int IITB_regno_ok_for_base_p  (int REGN);
extern int regno_ok_for_index_p  (int REGN);
extern int initial_frame_pointer_offset  (int DEPTH);
extern int registers_to_be_saved (void);
extern int initial_elimination_offset (int from, int to);
extern rtx function_value  (void);
extern int constant_address_p  (rtx X);
extern int legitimate_address1 (enum machine_mode MODE,rtx X);
extern int legitimate_address2 (enum machine_mode MODE,rtx X);
extern int  reg_ok_for_base_p1 (rtx x);
extern int reg_ok_for_base_p2 (rtx x);
extern int  reg_ok_for_index_p1 (rtx x);
extern int reg_ok_for_index_p2 (rtx x);
extern rtx  legitimize_address (rtx X,rtx OLDX, enum machine_mode MODE);
extern void asm_output_align (FILE *STREAM, int POWER);
extern void asm_output_skip (FILE  *STREAM,int NBYTES);
extern void print_operand (FILE *STREAM,rtx X,char CODE);
extern void print_operand_address (FILE *STREAM,rtx X);
extern void asm_generate_internal_label (char *STRING,char *PREFIX,int NUM);
extern void asm_output_local (FILE *STREAM,char *NAME,int SIZE,int ROUNDED);
extern void asm_output_common (FILE *STREAM,char *NAME,int SIZE,int ROUNDED);
extern int asm_output_symbol_ref (FILE *stream, rtx sym);
extern void function_profiler (FILE*asm_file,int labelno);
extern void initialize_trampoline (void);
extern void spim_epilogue (void);
extern void spim_prologue (void);
extern int constant_operand (rtx op, enum machine_mode mode);
extern char* emit_asm_call (rtx operands[],int type);
extern const char* spim_output_jump (rtx *operands);
extern const char* spim_output_move (rtx dest, rtx src);
extern bool spim_legitimize_move (machine_mode mode, rtx dest, rtx src);
extern void spim_init_cumulative_args (CUMULATIVE_ARGS *cum, tree fntype);
#ifdef RTX_CODE
extern char* conditional_insn (enum rtx_code code,rtx operands[], int isRev);
#endif
extern rtx compare_op0;
extern rtx compare_op1;