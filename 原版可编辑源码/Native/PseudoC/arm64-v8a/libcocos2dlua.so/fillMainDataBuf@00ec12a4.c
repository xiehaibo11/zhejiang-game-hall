
void fillMainDataBuf(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  
  puVar1 = (uint *)(param_1 + 0x6b88);
  puVar2 = (uint *)(param_1 + 0x4b78);
  uVar5 = (ulong)(*puVar1 >> 3);
  iVar8 = (int)param_2 >> 1;
  if ((int)((*puVar1 >> 3) + param_2) < 0x2000) {
    uVar4 = *puVar2;
    lVar9 = *(long *)(param_1 + 0x6b80);
    puVar6 = (undefined1 *)(lVar9 + uVar5);
    if ((int)(uVar4 + param_2) < 0x2000) {
      memcpy((void *)(*(long *)(param_1 + 0x4b68) + (long)(int)uVar4),puVar6,(long)(int)param_2);
      uVar4 = *puVar2 + param_2;
    }
    else {
      uVar7 = *puVar6;
      if (iVar8 != 0) {
        uVar3 = puVar6[1];
        *puVar2 = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((long)(int)uVar4 & 0x1fffU)) = uVar7;
        uVar4 = *puVar2;
        iVar8 = iVar8 + -1;
        *puVar2 = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar3;
        uVar7 = puVar6[2];
        if (iVar8 != 0) {
          puVar6 = (undefined1 *)(uVar5 + lVar9 + 4);
          do {
            uVar4 = *puVar2;
            uVar3 = puVar6[-1];
            iVar8 = iVar8 + -1;
            *puVar2 = uVar4 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar7;
            uVar4 = *puVar2;
            *puVar2 = uVar4 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar3;
            uVar7 = *puVar6;
            puVar6 = puVar6 + 2;
          } while (iVar8 != 0);
        }
      }
      if ((param_2 & 1) != 0) {
        uVar4 = *puVar2;
        *puVar2 = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar7;
      }
      uVar4 = *puVar2 & 0x1fff;
    }
    *puVar2 = uVar4;
  }
  else {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar4 = *puVar2;
      uVar7 = *(undefined1 *)(*(long *)(param_1 + 0x6b80) + (uVar5 & 0x1fff));
      *puVar2 = uVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar7;
      uVar4 = *puVar2;
      uVar7 = *(undefined1 *)(*(long *)(param_1 + 0x6b80) + ((ulong)((int)uVar5 + 1) & 0x1fff));
      uVar5 = (ulong)((int)uVar5 + 2);
      *puVar2 = uVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar7;
    }
    if ((param_2 & 1) != 0) {
      uVar4 = *puVar2;
      uVar7 = *(undefined1 *)(*(long *)(param_1 + 0x6b80) + (uVar5 & 0x1fff));
      *puVar2 = uVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x4b68) + ((ulong)uVar4 & 0x1fff)) = uVar7;
    }
  }
  *puVar1 = *puVar1 + param_2 * 8;
  return;
}

