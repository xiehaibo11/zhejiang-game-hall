
void fillMainDataBuf(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  
  puVar2 = (uint *)(param_1 + 0x6b88);
  uVar6 = *puVar2 >> 3;
  uVar7 = (ulong)uVar6;
  iVar9 = (int)param_2 >> 1;
  if ((int)(uVar6 + param_2) < 0x2000) {
    puVar3 = (uint *)(param_1 + 0x4b78);
    uVar6 = *puVar3;
    lVar10 = *(long *)(param_1 + 0x6b80);
    puVar11 = (undefined1 *)(lVar10 + uVar7);
    if ((int)(uVar6 + param_2) < 0x2000) {
      memcpy((void *)(*(long *)(param_1 + 0x4b68) + (long)(int)uVar6),puVar11,(long)(int)param_2);
      uVar6 = *puVar3 + param_2;
    }
    else {
      uVar8 = *puVar11;
      if (iVar9 != 0) {
        uVar5 = puVar11[1];
        *puVar3 = uVar6 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((long)(int)uVar6 & 0x1fffU)) = uVar8;
        uVar6 = *puVar3;
        *puVar3 = uVar6 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar6 & 0x1fff)) = uVar5;
        uVar8 = puVar11[2];
        if (iVar9 != 1) {
          iVar9 = 1 - iVar9;
          puVar11 = (undefined1 *)(lVar10 + uVar7 + 4);
          do {
            uVar6 = *puVar3;
            uVar5 = puVar11[-1];
            iVar9 = iVar9 + 1;
            *puVar3 = uVar6 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar6 & 0x1fff)) = uVar8;
            uVar6 = *puVar3;
            *puVar3 = uVar6 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar6 & 0x1fff)) = uVar5;
            uVar8 = *puVar11;
            puVar11 = puVar11 + 2;
          } while (iVar9 != 0);
        }
      }
      if ((param_2 & 1) != 0) {
        uVar6 = *puVar3;
        *puVar3 = uVar6 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar6 & 0x1fff)) = uVar8;
      }
      uVar6 = *puVar3 & 0x1fff;
    }
    *puVar3 = uVar6;
  }
  else {
    if (iVar9 != 0) {
      puVar3 = (uint *)(param_1 + 0x4b78);
      uVar1 = uVar6 + 1;
      do {
        uVar4 = *puVar3;
        uVar8 = *(undefined1 *)(*(long *)(param_1 + 0x6b80) + ((ulong)(uVar1 - 1) & 0x1fff));
        *puVar3 = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar8;
        uVar4 = *puVar3;
        uVar8 = *(undefined1 *)(*(long *)(param_1 + 0x6b80) + ((ulong)uVar1 & 0x1fff));
        iVar9 = iVar9 + -1;
        uVar1 = uVar1 + 2;
        *puVar3 = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar8;
      } while (iVar9 != 0);
      uVar7 = (ulong)(uVar6 + (param_2 & 0xfffffffe));
    }
    if ((param_2 & 1) != 0) {
      uVar6 = *(uint *)(param_1 + 0x4b78);
      uVar8 = *(undefined1 *)(*(long *)(param_1 + 0x6b80) + (uVar7 & 0x1fff));
      *(uint *)(param_1 + 0x4b78) = uVar6 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar6 & 0x1fff)) = uVar8;
    }
  }
  *puVar2 = *puVar2 + param_2 * 8;
  return;
}

