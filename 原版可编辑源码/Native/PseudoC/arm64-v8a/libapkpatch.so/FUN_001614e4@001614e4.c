
void FUN_001614e4(long param_1)

{
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00165188(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001613ac(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0016156c(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","_Unwind_Resume","_Unwind_Resume() can\'t return")
  ;
  fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
  abort();
}

