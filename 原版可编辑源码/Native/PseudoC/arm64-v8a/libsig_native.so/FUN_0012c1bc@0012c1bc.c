
undefined8 FUN_0012c1bc(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  do {
    iVar1 = FUN_0012b4b0(param_2,auStack_680);
    lVar2 = FUN_0012ae74(param_2);
    uVar4 = 4;
    if (lVar2 + (*(long *)(param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar4 = 0;
    }
    if (iVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,uVar4 | 2,*param_1,param_1,param_2);
      if ((int)uVar3 == 7) {
        return uVar3;
      }
      if ((int)uVar3 != 8) {
        return 2;
      }
    }
    if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_0012c170(param_2,auStack_680);
  } while( true );
}

