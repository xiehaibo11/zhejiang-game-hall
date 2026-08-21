
void FUN_00f7f11c(long *param_1)

{
  long lVar1;
  undefined1 auStack_e8 [200];
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x18))(param_1,auStack_e8);
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(lVar1 + 0xa8),1);
}

