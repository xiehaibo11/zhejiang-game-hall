
void FUN_00e14b1c(__jmp_buf_tag *param_1,undefined4 param_2)

{
  *(undefined4 *)((long)param_1[1].__saved_mask.__val + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}

