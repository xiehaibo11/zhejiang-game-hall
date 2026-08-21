
undefined8 FUN_001613ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0016172c(param_2,param_1);
  iVar1 = FUN_0016193c(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if (iVar1 < 0) break;
    FUN_001617d4(param_2,0xfffffffe,&local_38);
    iVar1 = FUN_0016194c(param_2,auStack_80);
    if (iVar1 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar2 = 6;
      if (local_38 != param_3[3]) {
        uVar2 = 2;
      }
      iVar1 = (*local_68)(1,uVar2,*param_3,param_3,param_2);
      if (iVar1 != 8) {
        if (iVar1 != 7) {
          return 2;
        }
        FUN_0016198c(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar1 = FUN_0016193c(param_2);
  }
  return 2;
}

