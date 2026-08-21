
short FUN_00e4e7ac(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  
  puVar9 = *(ushort **)(param_1 + 0x18);
  uVar8 = *param_2;
  uVar4 = puVar9[1];
  uVar1 = (uint)uVar4 + (uint)puVar9[3] * 0x100;
  if (uVar1 <= uVar8) {
    *param_2 = uVar8;
    return 0;
  }
  uVar5 = *puVar9;
  uVar2 = (uint)uVar5 + (uint)puVar9[2] * 0x100;
  while( true ) {
    uVar10 = uVar2;
    if (uVar2 <= uVar8 + 1) {
      uVar10 = uVar8 + 1;
    }
    uVar3 = uVar10 & 0xff;
    uVar7 = (uint)uVar5;
    uVar10 = uVar10 >> 8;
    uVar8 = uVar7;
    if ((uVar7 <= uVar3) && (uVar8 = uVar3, uVar4 < uVar3)) {
      uVar10 = uVar10 + 1;
      uVar8 = uVar7;
    }
    sVar6 = *(short *)(*(long *)(puVar9 + 8) +
                      (long)(int)((uVar8 - uVar7) +
                                 ((uVar10 & 0xffff) - (uint)puVar9[2]) * ((uVar4 + 1) - (uint)uVar5)
                                 ) * 2);
    uVar8 = uVar8 + (uVar10 & 0xffff) * 0x100;
    if (sVar6 != -1) break;
    if (uVar1 <= uVar8) {
      *param_2 = uVar8;
      return -1;
    }
  }
  *param_2 = uVar8;
  return sVar6;
}

