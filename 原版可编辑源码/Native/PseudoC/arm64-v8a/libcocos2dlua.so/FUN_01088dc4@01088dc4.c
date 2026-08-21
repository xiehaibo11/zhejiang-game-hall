
undefined8 FUN_01088dc4(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(undefined8 **)(param_1 + 0x328) < (undefined8 *)(param_1 + 0x30U)) {
    return 0xa1;
  }
  pbVar4 = *(byte **)(param_1 + 0x20);
  pbVar5 = *(byte **)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x338);
  bVar1 = *pbVar4;
  if (bVar1 == 0x1e) {
    lVar3 = FUN_01089320(pbVar4,pbVar5,0,0);
    pbVar5 = *(byte **)(param_1 + 0x28);
    uVar6 = lVar3 >> 0x10;
  }
  else if (bVar1 == 0x1d) {
    if (pbVar5 < pbVar4 + 5) goto LAB_01088ec8;
    uVar6 = (ulong)pbVar4[1] << 0x18 | (ulong)pbVar4[2] << 0x10 | (ulong)pbVar4[3] << 8 |
            (ulong)pbVar4[4];
  }
  else if (bVar1 == 0x1c) {
    if (pbVar5 < pbVar4 + 3) goto LAB_01088ec8;
                    /* try { // try from 01088e40 to 01188e47 has its CatchHandler @ 010891dc */
                    /* try { // try from 01088e48 to 01188ec7 has its CatchHandler @ 01088cdc */
    uVar6 = (ulong)CONCAT11(pbVar4[1],pbVar4[2]);
  }
  else if (bVar1 < 0xf7) {
    uVar6 = (ulong)bVar1 - 0x8b;
  }
  else if (bVar1 < 0xfb) {
    if (pbVar5 < pbVar4 + 2) {
LAB_01088ec8:
                    /* try { // try from 01088ec8 to 01188ecf has its CatchHandler @ 010891d8 */
      uVar6 = 0;
    }
    else {
      uVar6 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar4[1]) + 0x6c);
    }
  }
  else {
    if (pbVar5 < pbVar4 + 2) goto LAB_01088ec8;
    uVar2 = 0xfb - bVar1;
    uVar6 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
            (ulong)pbVar4[1];
  }
  *(ulong *)(lVar7 + 0xd0) = uVar6;
                    /* try { // try from 01088ed0 to 01189033 has its CatchHandler @ 01088cdc */
  bVar1 = *pbVar5;
  pbVar4 = *(byte **)(param_1 + 0x30U);
  if (bVar1 == 0x1e) {
    lVar3 = FUN_01089320(pbVar5,pbVar4,0,0);
    uVar6 = lVar3 >> 0x10;
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar5 + 5 <= pbVar4) {
        uVar6 = (ulong)pbVar5[1] << 0x18 | (ulong)pbVar5[2] << 0x10 | (ulong)pbVar5[3] << 8 |
                (ulong)pbVar5[4];
        goto LAB_01088fa4;
      }
    }
    else if (bVar1 == 0x1c) {
      if (pbVar5 + 3 <= pbVar4) {
        uVar6 = (ulong)CONCAT11(pbVar5[1],pbVar5[2]);
        goto LAB_01088fa4;
      }
    }
    else {
      if (bVar1 < 0xf7) {
        uVar6 = (ulong)bVar1 - 0x8b;
        goto LAB_01088fa4;
      }
      if (bVar1 < 0xfb) {
        if (pbVar5 + 2 <= pbVar4) {
          uVar6 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar5[1]) + 0x6c);
          goto LAB_01088fa4;
        }
      }
      else if (pbVar5 + 2 <= pbVar4) {
        uVar2 = 0xfb - bVar1;
        uVar6 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
                (ulong)pbVar5[1];
        goto LAB_01088fa4;
      }
    }
    uVar6 = 0;
  }
LAB_01088fa4:
  *(ulong *)(lVar7 + 200) = uVar6;
  return 0;
}

