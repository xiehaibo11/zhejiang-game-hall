
undefined8 FUN_00a66efc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar7 = *(long *)(lVar6 + 0x218);
  if ((*(long *)(lVar6 + 0x5f0) != 0) && (*(long *)(lVar6 + 0x5f0) < param_2)) {
    FUN_00a38a08(lVar6,"Maximum file size exceeded");
    return 0x3f;
  }
  *(long *)(lVar7 + 0x20) = param_2;
  plVar1 = (long *)(lVar6 + 0x8cd8);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    uVar2 = FUN_00a54d8c(param_1 + 0xc3,"RETR %s",param_1[0xd4]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar4 = 0x20;
  }
  else {
    if (param_2 == -1) {
      FUN_00a38740(lVar6,"ftp server doesn\'t support SIZE\n");
      lVar5 = *(long *)(lVar7 + 0x20);
    }
    else if (lVar3 < 0) {
      lVar5 = -lVar3;
      if (-param_2 != lVar3 && param_2 <= lVar5) goto LAB_00a67050;
      *(long *)(lVar7 + 0x20) = lVar5;
      *plVar1 = lVar3 + param_2;
    }
    else {
      if (param_2 < lVar3) {
LAB_00a67050:
        FUN_00a38a08(lVar6,"Offset (%ld) was beyond file size (%ld)",lVar3,param_2);
        return 0x24;
      }
      lVar5 = param_2 - lVar3;
      *(long *)(lVar7 + 0x20) = lVar5;
    }
    if (lVar5 == 0) {
      FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      FUN_00a38740(lVar6,"File already completely downloaded\n");
      *(undefined4 *)(lVar7 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xd9) = 0;
      return 0;
    }
    FUN_00a38740(lVar6,"Instructs server to resume from offset %ld\n",*plVar1);
    uVar2 = FUN_00a54d8c(param_1 + 0xc3,"REST %ld",*plVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar4 = 0x1b;
  }
  *(undefined4 *)(param_1 + 0xd9) = uVar4;
  return uVar2;
}

