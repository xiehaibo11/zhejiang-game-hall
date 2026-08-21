
undefined8 FUN_01088ff4(long param_1)

{
  byte bVar1;
  uint extraout_var;
  uint extraout_var_00;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  if (*(undefined8 **)(param_1 + 0x328) < (undefined8 *)(param_1 + 0x38U)) {
    return 0xa1;
  }
  pbVar6 = *(byte **)(param_1 + 0x20);
  pbVar4 = *(byte **)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x338);
  bVar1 = *pbVar6;
  if (bVar1 == 0x1e) {
                    /* try { // try from 01089034 to 01189083 has its CatchHandler @ 01089248 */
    FUN_01089320(pbVar6,pbVar4,0,0);
    pbVar4 = *(byte **)(param_1 + 0x28);
    uVar3 = extraout_var;
  }
  else if (bVar1 == 0x1d) {
    if (pbVar4 < pbVar6 + 5) goto LAB_010890f8;
                    /* try { // try from 01089090 to 01189097 has its CatchHandler @ 010891e0 */
    uVar3 = (uint)pbVar6[1] << 0x18 | (uint)pbVar6[2] << 0x10 | (uint)pbVar6[3] << 8 |
            (uint)pbVar6[4];
  }
  else if (bVar1 == 0x1c) {
    if (pbVar4 < pbVar6 + 3) goto LAB_010890f8;
    uVar3 = (uint)CONCAT11(pbVar6[1],pbVar6[2]);
  }
  else if (bVar1 < 0xf7) {
    uVar3 = bVar1 - 0x8b;
  }
  else if (bVar1 < 0xfb) {
    if (pbVar4 < pbVar6 + 2) {
LAB_010890f8:
      uVar3 = 0;
    }
    else {
                    /* try { // try from 010890d8 to 011890db has its CatchHandler @ 010891d4 */
      uVar3 = ((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar6[1]) + 0x6c;
                    /* try { // try from 010890e8 to 011890f3 has its CatchHandler @ 010891e8 */
    }
  }
  else {
                    /* try { // try from 010890f4 to 011891c7 has its CatchHandler @ 01088cdc */
    if (pbVar4 < pbVar6 + 2) goto LAB_010890f8;
    uVar3 = ((0xfb - (uint)bVar1) * 0x100 + -0x6c) - (uint)pbVar6[1];
  }
  *(uint *)(lVar7 + 0xe4) = uVar3;
  bVar1 = *pbVar4;
  pbVar6 = *(byte **)(param_1 + 0x30);
  if (bVar1 == 0x1e) {
    FUN_01089320(pbVar4,pbVar6,0,0);
    pbVar6 = *(byte **)(param_1 + 0x30);
    uVar3 = extraout_var_00;
  }
  else if (bVar1 == 0x1d) {
    if (pbVar6 < pbVar4 + 5) goto LAB_010891d8;
    uVar3 = (uint)pbVar4[1] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[3] << 8 |
            (uint)pbVar4[4];
  }
  else if (bVar1 == 0x1c) {
    if (pbVar6 < pbVar4 + 3) goto LAB_010891d8;
    uVar3 = (uint)CONCAT11(pbVar4[1],pbVar4[2]);
  }
  else if (bVar1 < 0xf7) {
    uVar3 = bVar1 - 0x8b;
  }
  else if (bVar1 < 0xfb) {
    if (pbVar6 < pbVar4 + 2) {
LAB_010891d8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01088ec8 with catch @ 010891d8
                        */
      uVar3 = 0;
    }
    else {
      uVar3 = ((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar4[1]) + 0x6c;
                    /* try { // try from 010891c8 to 011891cb has its CatchHandler @ 010891d0 */
                    /* try { // try from 010891cc to 011892af has its CatchHandler @ 01088cdc */
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010891c8 with catch @ 010891d0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010890d8 with catch @ 010891d4
                        */
    if (pbVar6 < pbVar4 + 2) goto LAB_010891d8;
    uVar3 = ((0xfb - (uint)bVar1) * 0x100 + -0x6c) - (uint)pbVar4[1];
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01088e40 with catch @ 010891dc
                        */
  *(uint *)(lVar7 + 0xe8) = uVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01089090 with catch @ 010891e0
                        */
  bVar1 = *pbVar6;
  pbVar4 = *(byte **)(param_1 + 0x38U);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010890e8 with catch @ 010891e8
                        */
  if (bVar1 == 0x1e) {
    lVar2 = FUN_01089320(pbVar6,pbVar4,0,0);
    uVar5 = lVar2 >> 0x10;
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar6 + 5 <= pbVar4) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01089034 with catch @ 01089248
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01088d70 with catch @ 0108924c
                        */
        uVar5 = (ulong)pbVar6[1] << 0x18 | (ulong)pbVar6[2] << 0x10 | (ulong)pbVar6[3] << 8 |
                (ulong)pbVar6[4];
        goto LAB_010892b4;
      }
    }
    else if (bVar1 == 0x1c) {
      if (pbVar6 + 3 <= pbVar4) {
        uVar5 = (ulong)CONCAT11(pbVar6[1],pbVar6[2]);
        goto LAB_010892b4;
      }
    }
    else {
      if (bVar1 < 0xf7) {
        uVar5 = (ulong)bVar1 - 0x8b;
        goto LAB_010892b4;
      }
      if (bVar1 < 0xfb) {
        if (pbVar6 + 2 <= pbVar4) {
          uVar5 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar6[1]) + 0x6c);
          goto LAB_010892b4;
        }
      }
      else if (pbVar6 + 2 <= pbVar4) {
        uVar3 = 0xfb - bVar1;
        uVar5 = ((-(ulong)(uVar3 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar3 << 8) - 0x6c) -
                (ulong)pbVar6[1];
        goto LAB_010892b4;
      }
    }
    uVar5 = 0;
  }
LAB_010892b4:
  *(ulong *)(lVar7 + 0xf0) = uVar5;
  return 0;
}

