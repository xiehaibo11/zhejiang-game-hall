
long FUN_00c20d34(long param_1,undefined2 param_2,int param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_4 < 4) {
    iVar7 = 1 << (ulong)(param_4 & 0x1f);
    uVar9 = 0x18;
    uVar8 = uVar9;
  }
  else {
    iVar7 = 1 << (ulong)(param_4 & 0x1f);
    uVar9 = iVar7 + 0x10;
    uVar8 = uVar9 & 0xffff;
  }
  lVar2 = FUN_00c1a2b4(param_1,0,0,uVar9 + param_3);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar4 = lVar2 + 0x18 + (ulong)(iVar7 - 1) & ((ulong)(iVar7 - 1) ^ 0xffffffffffffffff);
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  lVar3 = uVar4 - 0x10;
  *(short *)(uVar4 - 0x18) = (short)lVar3 - (short)lVar2;
  *(short *)(uVar4 - 0x16) = (short)uVar8;
  *(int *)(uVar4 - 0x14) = param_3;
  *(undefined8 *)(uVar4 - 0x10) = uVar6;
  *(long *)(lVar5 + 0x38) = lVar3;
  bVar1 = *(byte *)(lVar5 + 0x30);
  *(undefined1 *)(uVar4 - 7) = 10;
  *(undefined2 *)(uVar4 - 6) = param_2;
  *(byte *)(uVar4 - 8) = bVar1 & 3 | 0x80;
  return lVar3;
}

