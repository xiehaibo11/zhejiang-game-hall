
undefined8 FUN_00a67b94(long *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_40 [16];
  
  lVar4 = *param_1;
  *param_2 = '\0';
  FUN_00a38740(lVar4,"Preparing for accepting server on data port\n");
  FUN_00a30f04(lVar4,9);
  lVar3 = *(long *)(lVar4 + 0x368);
  if (lVar3 < 1) {
    lVar3 = 60000;
  }
  local_40 = FUN_00a2e828();
  lVar1 = FUN_00a25238(lVar4,local_40,0);
  if ((lVar1 == 0) || (lVar3 <= lVar1)) {
    lVar1 = FUN_00a2e888(local_40._0_8_,local_40._8_8_,*(undefined8 *)(lVar4 + 0x9f8),
                         *(undefined8 *)(lVar4 + 0xa00));
    lVar1 = lVar3 - lVar1;
    if (lVar1 == 0) goto LAB_00a67c54;
  }
  if (-1 < lVar1) {
    uVar2 = FUN_00a67d64(param_1,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*param_2 != '\0') {
      uVar2 = FUN_00a67f14(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_00a67c9c(param_1);
      return uVar2;
    }
    lVar3 = *(long *)(lVar4 + 0x368);
    if (lVar3 < 1) {
      lVar3 = 60000;
    }
    FUN_00a27148(lVar4,lVar3);
    return 0;
  }
LAB_00a67c54:
  FUN_00a38a08(lVar4,"Accept timeout occurred while waiting server connect");
  return 0xc;
}

