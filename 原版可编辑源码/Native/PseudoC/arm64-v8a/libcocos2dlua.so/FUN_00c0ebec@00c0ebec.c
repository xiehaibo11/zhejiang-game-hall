
undefined4 FUN_00c0ebec(long *param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  ushort uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_2;
  if (uVar6 >> 0x1c == 1) {
    uVar2 = (ushort)param_2[2];
    uVar7 = 0;
    uVar8 = (ulong)param_2[1];
    lVar5 = *param_1;
    if (uVar2 != 0) {
      do {
        uVar6 = *(uint *)(lVar5 + (ulong)uVar2 * 0x18);
        uVar2 = *(ushort *)(lVar5 + (ulong)uVar2 * 0x18 + 8);
        uVar1 = (ulong)(uVar6 & 0xffff);
        if (uVar6 >> 0x1c != 9) {
          uVar1 = uVar7;
        }
        uVar7 = uVar1;
      } while (uVar2 != 0);
      uVar7 = uVar1 * 0x18;
    }
    for (uVar6 = *(uint *)(lVar5 + uVar7); uVar6 >> 0x1c == 8;
        uVar6 = *(uint *)(lVar5 + (ulong)(ushort)uVar6 * 0x18)) {
    }
  }
  else {
    lVar5 = *param_1;
    uVar8 = 0;
  }
  do {
    lVar3 = (ulong)(ushort)uVar6 * 0x18;
    uVar6 = *(uint *)(lVar5 + lVar3);
  } while (uVar6 >> 0x1c == 8);
  uVar8 = uVar8 + (ulong)param_3 * (ulong)*(uint *)(lVar5 + lVar3 + 4);
  uVar4 = (undefined4)uVar8;
  if (0x7fffffff < uVar8) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

