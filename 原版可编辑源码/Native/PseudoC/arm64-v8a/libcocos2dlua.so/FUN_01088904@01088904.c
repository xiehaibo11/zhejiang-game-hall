
undefined8 FUN_01088904(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(ulong *)(param_1 + 0x328) < param_1 + 0x40U) {
    return 0xa1;
  }
  pbVar1 = *(byte **)(param_1 + 0x20);
  pbVar2 = *(byte **)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x338);
  bVar3 = *pbVar1;
                    /* try { // try from 01088938 to 0118893f has its CatchHandler @ 01088a10 */
  if (bVar3 == 0x1e) {
    lVar5 = FUN_01089320(pbVar1,pbVar2,0,0);
  }
  else if (bVar3 == 0x1d) {
    if (pbVar2 < pbVar1 + 5) goto LAB_01088a08;
    uVar7 = (ulong)pbVar1[1] << 0x18 | (ulong)pbVar1[2] << 0x10 | (ulong)pbVar1[3] << 8 |
            (ulong)pbVar1[4];
    if (uVar7 < 0x8000) goto LAB_01088a0c;
LAB_01088d44:
    lVar5 = 0x7fffffff;
  }
  else {
    if (bVar3 == 0x1c) {
      if (pbVar2 < pbVar1 + 3) goto LAB_01088a08;
      uVar7 = (ulong)CONCAT11(pbVar1[1],pbVar1[2]);
    }
    else if (bVar3 < 0xf7) {
      uVar7 = (ulong)bVar3 - 0x8b;
    }
    else {
      if (bVar3 < 0xfb) {
        if (pbVar1 + 2 <= pbVar2) {
          uVar7 = (ulong)(int)(((uint)bVar3 * 0x100 - 0xf700 | (uint)pbVar1[1]) + 0x6c);
joined_r0x01088d40:
          if (0x7fff < (long)uVar7) goto LAB_01088d44;
          goto LAB_01088a0c;
        }
      }
      else if (pbVar1 + 2 <= pbVar2) {
        uVar4 = 0xfb - bVar3;
        uVar7 = ((-(ulong)(uVar4 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar4 << 8) - 0x6c) -
                (ulong)pbVar1[1];
        goto joined_r0x01088d40;
      }
LAB_01088a08:
      uVar7 = 0;
    }
LAB_01088a0c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01088938 with catch @ 01088a10
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010887d8 with catch @ 01088a14
                        */
    lVar5 = -0x7fffffff;
    if (-0x8000 < (long)uVar7) {
      lVar5 = uVar7 << 0x10;
    }
  }
  uVar6 = FT_RoundFix(lVar5);
  *(undefined8 *)(lVar8 + 0x88) = uVar6;
  pbVar1 = *(byte **)(param_1 + 0x28);
  pbVar2 = *(byte **)(param_1 + 0x30);
  bVar3 = *pbVar1;
  if (bVar3 == 0x1e) {
    lVar5 = FUN_01089320(pbVar1,pbVar2,0,0);
  }
  else if (bVar3 == 0x1d) {
                    /* try { // try from 01088a78 to 01188a9b has its CatchHandler @ 01088a78
                       catch() { ... } // from try @ 01088a78 with catch @ 01088a78
                       catch() { ... } // from try @ 01088aec with catch @ 01088a78 */
    if (pbVar2 < pbVar1 + 5) goto LAB_01088b00;
                    /* try { // try from 01088a9c to 01188a9f has its CatchHandler @ 01088b2c */
                    /* try { // try from 01088aa0 to 01188aa7 has its CatchHandler @ 01088b1c */
    uVar7 = (ulong)pbVar1[1] << 0x18 | (ulong)pbVar1[2] << 0x10 | (ulong)pbVar1[3] << 8 |
            (ulong)pbVar1[4];
    if (uVar7 < 0x8000) goto LAB_01088b04;
LAB_01088d6c:
    lVar5 = 0x7fffffff;
                    /* try { // try from 01088d70 to 01188d77 has its CatchHandler @ 0108924c */
  }
  else {
    if (bVar3 == 0x1c) {
      if (pbVar2 < pbVar1 + 3) goto LAB_01088b00;
      uVar7 = (ulong)CONCAT11(pbVar1[1],pbVar1[2]);
    }
    else {
                    /* try { // try from 01088ab4 to 01188aeb has its CatchHandler @ 01088aec */
      if (bVar3 < 0xf7) {
        uVar7 = (ulong)bVar3 - 0x8b;
      }
      else {
        if (bVar3 < 0xfb) {
          if (pbVar1 + 2 <= pbVar2) {
            uVar7 = (ulong)(int)(((uint)bVar3 * 0x100 - 0xf700 | (uint)pbVar1[1]) + 0x6c);
                    /* catch() { ... } // from try @ 01088ab4 with catch @ 01088aec
                       try { // try from 01088aec to 01188b3f has its CatchHandler @ 01088a78 */
joined_r0x01088d68:
            if (0x7fff < (long)uVar7) goto LAB_01088d6c;
            goto LAB_01088b04;
          }
        }
        else if (pbVar1 + 2 <= pbVar2) {
          uVar4 = 0xfb - bVar3;
          uVar7 = ((-(ulong)(uVar4 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar4 << 8) - 0x6c) -
                  (ulong)pbVar1[1];
          goto joined_r0x01088d68;
        }
LAB_01088b00:
        uVar7 = 0;
      }
    }
LAB_01088b04:
    lVar5 = -0x7fffffff;
    if (-0x8000 < (long)uVar7) {
      lVar5 = uVar7 << 0x10;
    }
  }
  uVar6 = FT_RoundFix(lVar5);
                    /* catch() { ... } // from try @ 01088aa0 with catch @ 01088b1c */
  *(undefined8 *)(lVar8 + 0x90) = uVar6;
  pbVar1 = *(byte **)(param_1 + 0x30);
  pbVar2 = *(byte **)(param_1 + 0x38);
  bVar3 = *pbVar1;
                    /* catch() { ... } // from try @ 01088a9c with catch @ 01088b2c */
  if (bVar3 == 0x1e) {
    lVar5 = FUN_01089320(pbVar1,pbVar2,0,0);
  }
  else if (bVar3 == 0x1d) {
    if (pbVar2 < pbVar1 + 5) goto LAB_01088bf8;
    uVar7 = (ulong)pbVar1[1] << 0x18 | (ulong)pbVar1[2] << 0x10 | (ulong)pbVar1[3] << 8 |
            (ulong)pbVar1[4];
    if (uVar7 < 0x8000) goto LAB_01088bfc;
LAB_01088d94:
    lVar5 = 0x7fffffff;
  }
  else {
    if (bVar3 == 0x1c) {
      if (pbVar2 < pbVar1 + 3) goto LAB_01088bf8;
      uVar7 = (ulong)CONCAT11(pbVar1[1],pbVar1[2]);
    }
    else if (bVar3 < 0xf7) {
      uVar7 = (ulong)bVar3 - 0x8b;
    }
    else {
      if (bVar3 < 0xfb) {
        if (pbVar1 + 2 <= pbVar2) {
          uVar7 = (ulong)(int)(((uint)bVar3 * 0x100 - 0xf700 | (uint)pbVar1[1]) + 0x6c);
joined_r0x01088d90:
          if (0x7fff < (long)uVar7) goto LAB_01088d94;
          goto LAB_01088bfc;
        }
      }
      else if (pbVar1 + 2 <= pbVar2) {
                    /* try { // try from 01088d78 to 01188e3f has its CatchHandler @ 01088cdc */
        uVar4 = 0xfb - bVar3;
        uVar7 = ((-(ulong)(uVar4 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar4 << 8) - 0x6c) -
                (ulong)pbVar1[1];
        goto joined_r0x01088d90;
      }
LAB_01088bf8:
      uVar7 = 0;
    }
LAB_01088bfc:
    lVar5 = -0x7fffffff;
    if (-0x8000 < (long)uVar7) {
      lVar5 = uVar7 << 0x10;
    }
  }
  uVar6 = FT_RoundFix(lVar5);
  *(undefined8 *)(lVar8 + 0x98) = uVar6;
  pbVar1 = *(byte **)(param_1 + 0x38);
  pbVar2 = *(byte **)(param_1 + 0x40);
  bVar3 = *pbVar1;
  if (bVar3 == 0x1e) {
    lVar5 = FUN_01089320(pbVar1,pbVar2,0,0);
    goto LAB_01088d08;
  }
                    /* catch() { ... } // from try @ 01088c68 with catch @ 01088c38 */
  if (bVar3 == 0x1d) {
                    /* try { // try from 01088c68 to 01188cdb has its CatchHandler @ 01088c38 */
    if (pbVar2 < pbVar1 + 5) goto LAB_01088cf0;
    uVar7 = (ulong)pbVar1[1] << 0x18 | (ulong)pbVar1[2] << 0x10 | (ulong)pbVar1[3] << 8 |
            (ulong)pbVar1[4];
    if (uVar7 < 0x8000) goto LAB_01088cf4;
LAB_01088dbc:
    lVar5 = 0x7fffffff;
    goto LAB_01088d08;
  }
  if (bVar3 == 0x1c) {
                    /* try { // try from 01088c4c to 01188c4f has its CatchHandler @ 01088ca0 */
    if (pbVar2 < pbVar1 + 3) goto LAB_01088cf0;
                    /* try { // try from 01088c5c to 01188c67 has its CatchHandler @ 01088cac */
    uVar7 = (ulong)CONCAT11(pbVar1[1],pbVar1[2]);
  }
  else {
                    /* catch() { ... } // from try @ 01088c4c with catch @ 01088ca0 */
    if (bVar3 < 0xf7) {
      uVar7 = (ulong)bVar3 - 0x8b;
                    /* catch() { ... } // from try @ 01088c5c with catch @ 01088cac */
    }
    else {
      if (bVar3 < 0xfb) {
        if (pbVar1 + 2 <= pbVar2) {
          uVar7 = (ulong)(int)(((uint)bVar3 * 0x100 - 0xf700 | (uint)pbVar1[1]) + 0x6c);
                    /* try { // try from 01088cdc to 01188d6f has its CatchHandler @ 01088cdc
                       catch(type#1 @ 00000000) { ... } // from try @ 01088cdc with catch @ 01088cdc
                       catch(type#1 @ 00000000) { ... } // from try @ 01088d78 with catch @ 01088cdc
                       catch(type#1 @ 00000000) { ... } // from try @ 01088e48 with catch @ 01088cdc
                       catch(type#1 @ 00000000) { ... } // from try @ 01088ed0 with catch @ 01088cdc
                       catch(type#1 @ 00000000) { ... } // from try @ 010890f4 with catch @ 01088cdc
                       catch(type#1 @ 00000000) { ... } // from try @ 010891cc with catch @ 01088cdc
                        */
joined_r0x01088db8:
          if (0x7fff < (long)uVar7) goto LAB_01088dbc;
          goto LAB_01088cf4;
        }
      }
      else if (pbVar1 + 2 <= pbVar2) {
        uVar4 = 0xfb - bVar3;
        uVar7 = ((-(ulong)(uVar4 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar4 << 8) - 0x6c) -
                (ulong)pbVar1[1];
        goto joined_r0x01088db8;
      }
LAB_01088cf0:
      uVar7 = 0;
    }
  }
LAB_01088cf4:
  lVar5 = -0x7fffffff;
  if (-0x8000 < (long)uVar7) {
    lVar5 = uVar7 << 0x10;
  }
LAB_01088d08:
  uVar6 = FT_RoundFix(lVar5);
  *(undefined8 *)(lVar8 + 0xa0) = uVar6;
  return 0;
}

