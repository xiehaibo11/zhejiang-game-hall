
undefined8 TIFFUnsetField(long param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  
  lVar5 = TIFFFieldWithTag();
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(lVar5 + 0x18);
  if (uVar1 == 0x41) {
    iVar2 = *(int *)(param_1 + 0x140);
    if (iVar2 < 1) {
      puVar6 = (undefined8 *)0x0;
      iVar9 = 0;
      if (iVar2 < 1) goto LAB_00db34e8;
    }
    else {
      lVar5 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x148);
      do {
        puVar6 = puVar4;
        if (*(int *)*puVar6 == param_2) break;
        lVar5 = lVar5 + 1;
        puVar4 = puVar6 + 3;
      } while (lVar5 < iVar2);
      iVar9 = (int)lVar5;
      if (iVar2 <= iVar9) goto LAB_00db34e8;
    }
    _TIFFfree((void *)puVar6[2]);
    uVar3 = *(int *)(param_1 + 0x140) - 1;
    uVar8 = (ulong)uVar3;
    if (iVar9 < (int)uVar3) {
      lVar5 = (long)iVar9;
      lVar7 = (lVar5 + (long)iVar9 * 2) * 8;
      do {
        lVar5 = lVar5 + 1;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar7);
        lVar7 = lVar7 + 0x18;
        puVar6[2] = puVar6[5];
        puVar6[1] = puVar6[4];
        *puVar6 = puVar6[3];
        uVar8 = (long)*(int *)(param_1 + 0x140) - 1;
      } while (lVar5 < (long)uVar8);
    }
    *(int *)(param_1 + 0x140) = (int)uVar8;
  }
  else {
    lVar5 = param_1 + (ulong)(uVar1 >> 5) * 8;
    *(ulong *)(lVar5 + 0x38) =
         *(ulong *)(lVar5 + 0x38) & (1L << ((ulong)uVar1 & 0x1f) ^ 0xffffffffffffffffU);
  }
LAB_00db34e8:
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  return 1;
}

