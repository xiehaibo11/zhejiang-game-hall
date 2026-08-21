
long FUN_00e88ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar4 = uVar5;
  do {
    uVar4 = uVar4 - 0x400 & ((long)(uVar4 - 0x400) >> 0x3f ^ 0xffffffffffffffffU);
    FUN_00e883d8(param_1,uVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = -1;
    if (lVar3 < (long)uVar5) {
      while( true ) {
        lVar1 = FUN_00e88420(param_1,param_2,uVar5 - lVar3);
        if (lVar1 == -0x80) {
          return -0x80;
        }
        if (lVar1 < 0) break;
        lVar3 = *(long *)(param_1 + 0x10);
        lVar2 = lVar1;
        if ((long)uVar5 <= lVar3) goto LAB_00e88b50;
      }
    }
    lVar1 = lVar2;
  } while (lVar1 == -1);
LAB_00e88b50:
  FUN_00e883d8(param_1,lVar1);
  lVar3 = FUN_00e88420(param_1,param_2,0x400);
  lVar2 = -0x81;
  if (-1 < lVar3) {
    lVar2 = lVar1;
  }
  return lVar2;
}

