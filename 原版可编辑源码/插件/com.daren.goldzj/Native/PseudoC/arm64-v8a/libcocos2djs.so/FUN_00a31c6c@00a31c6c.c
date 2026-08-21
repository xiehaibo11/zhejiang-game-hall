
undefined4 FUN_00a31c6c(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((param_2 == 0) || (lVar2 = *(long *)(param_1 + 0x428), lVar2 == 0)) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x420) == 2) {
      if (param_2 < lVar2) {
        return 1;
      }
      pcVar1 = "The requested document is not old enough\n";
    }
    else {
      if (lVar2 < param_2) {
        return 1;
      }
      pcVar1 = "The requested document is not new enough\n";
    }
    FUN_00a22d58(param_1,pcVar1);
    *(undefined1 *)(param_1 + 0x8d80) = 1;
    uVar3 = 0;
  }
  return uVar3;
}

