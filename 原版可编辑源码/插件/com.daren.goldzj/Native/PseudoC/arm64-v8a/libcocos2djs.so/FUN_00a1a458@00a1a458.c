
undefined4 FUN_00a1a458(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  int local_44;
  
  lVar5 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar5 + 0x70) != 0) {
    FUN_00a3557c(lVar5,3,2);
  }
  lVar1 = FUN_00a1a210(*param_1,param_2,param_3);
  if (lVar1 == 0) {
    uVar4 = 0xffffffff;
    lVar3 = *(long *)(lVar5 + 0x70);
  }
  else {
    FUN_00a22d58(lVar5,"Hostname %s was found in DNS cache\n",param_2);
    uVar4 = 0;
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    lVar3 = *(long *)(lVar5 + 0x70);
  }
  if (lVar3 != 0) {
    FUN_00a355d4(lVar5,3);
  }
  if (lVar1 == 0) {
    uVar2 = FUN_00a15714(param_1);
    if ((uVar2 & 1) == 0) {
      return 0xffffffff;
    }
    lVar3 = FUN_00a15798(param_1,param_2,param_3,&local_44);
    if (lVar3 == 0) {
      if (local_44 != 0) {
        return 0xffffffff;
      }
      lVar1 = 0;
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00a3557c(lVar5,3,2);
      }
      lVar1 = FUN_00a1a31c(lVar5,lVar3,param_2,param_3);
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_00a355d4(lVar5,3);
      }
      if (lVar1 == 0) {
        FUN_00a162dc(lVar3);
      }
      else {
        uVar4 = 0;
      }
    }
  }
  *param_4 = lVar1;
  return uVar4;
}

