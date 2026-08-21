
undefined8 FUN_0108806c(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long local_38;
  
  if (*(undefined8 **)(param_1 + 0x328) < (undefined8 *)(param_1 + 0x50U)) {
    return 0xa1;
  }
  lVar10 = *(long *)(param_1 + 0x338);
  *(undefined1 *)(lVar10 + 0x60) = 1;
  pbVar9 = *(byte **)(param_1 + 0x20);
  pbVar7 = *(byte **)(param_1 + 0x28);
  bVar1 = *pbVar9;
  if (bVar1 == 0x1e) {
    uVar3 = FUN_01089320(pbVar9,pbVar7,0,&local_38);
    lVar11 = local_38;
LAB_010880cc:
    local_38 = -lVar11;
    *(undefined8 *)(lVar10 + 0x40) = uVar3;
    if (9 < lVar11 + 9U) {
      *(undefined8 *)(lVar10 + 0x40) = 0x10000;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x58) = 0x10000;
      *(long *)(lVar10 + 0x70) = 0;
      *(undefined8 *)(lVar10 + 0x78) = 0;
      uVar3 = 1;
      goto LAB_010885b0;
    }
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar7 < pbVar9 + 5) goto LAB_01088138;
      uVar8 = (ulong)pbVar9[1] << 0x18 | (ulong)pbVar9[2] << 0x10 | (ulong)pbVar9[3] << 8 |
              (ulong)pbVar9[4];
      if (uVar8 < 0x8000) goto LAB_010881f0;
LAB_01088178:
      if ((long)uVar8 < 100000) {
                    /* try { // try from 01088188 to 01188193 has its CatchHandler @ 010882bc */
        iVar6 = 5;
      }
      else if ((long)uVar8 < 1000000) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010887e0 with catch @ 010887bc
                        */
        iVar6 = 6;
      }
      else if ((long)uVar8 < 10000000) {
        iVar6 = 7;
      }
      else if ((long)uVar8 < 100000000) {
        iVar6 = 8;
      }
      else {
        iVar6 = 9;
        if (999999999 < (long)uVar8) {
          iVar6 = 10;
        }
      }
      lVar11 = (long)iVar6 + -5;
      lVar5 = (&DAT_0145f028)[lVar11];
      lVar4 = 0;
      if (lVar5 != 0) {
        lVar4 = (long)uVar8 / lVar5;
      }
      if (0x7fff < lVar4) {
        lVar11 = (long)iVar6 + -4;
        lVar5 = (&DAT_0145f028)[lVar11];
      }
      local_38 = lVar11;
      uVar3 = FT_DivFix(uVar8,lVar5);
      goto LAB_010880cc;
    }
                    /* try { // try from 01088104 to 01188187 has its CatchHandler @ 01088104
                       catch() { ... } // from try @ 01088104 with catch @ 01088104
                       catch() { ... } // from try @ 01088194 with catch @ 01088104
                       catch() { ... } // from try @ 010881c4 with catch @ 01088104 */
    if (bVar1 == 0x1c) {
      if (pbVar7 < pbVar9 + 3) goto LAB_01088138;
      uVar8 = (ulong)CONCAT11(pbVar9[1],pbVar9[2]);
    }
    else if (bVar1 < 0xf7) {
      uVar8 = (ulong)bVar1 - 0x8b;
    }
    else {
                    /* try { // try from 01088194 to 011881b7 has its CatchHandler @ 01088104 */
      if (bVar1 < 0xfb) {
        if (pbVar9 + 2 <= pbVar7) {
                    /* try { // try from 010881b8 to 011881c3 has its CatchHandler @ 010882b8 */
          uVar8 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar9[1]) + 0x6c);
joined_r0x010881ec:
          if (0x7fff < (long)uVar8) goto LAB_01088178;
          goto LAB_010881f0;
        }
      }
      else if (pbVar9 + 2 <= pbVar7) {
        uVar2 = 0xfb - bVar1;
        uVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
                (ulong)pbVar9[1];
        goto joined_r0x010881ec;
      }
LAB_01088138:
      uVar8 = 0;
    }
LAB_010881f0:
    lVar11 = 0;
    *(ulong *)(lVar10 + 0x40) = uVar8 << 0x10;
    local_38 = 0;
  }
  pbVar9 = *(byte **)(param_1 + 0x28);
  pbVar7 = *(byte **)(param_1 + 0x30);
  bVar1 = *pbVar9;
  if (bVar1 == 0x1e) {
    lVar4 = FUN_01089320(pbVar9,pbVar7,local_38,0);
    pbVar7 = *(byte **)(param_1 + 0x30);
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar7 < pbVar9 + 5) goto LAB_0108826c;
                    /* try { // try from 010885e4 to 011885ff has its CatchHandler @ 010885e4
                       catch() { ... } // from try @ 010885e4 with catch @ 010885e4
                       catch() { ... } // from try @ 01088614 with catch @ 010885e4 */
      uVar8 = (ulong)pbVar9[1] << 0x18 | (ulong)pbVar9[2] << 0x10 | (ulong)pbVar9[3] << 8 |
              (ulong)pbVar9[4];
                    /* try { // try from 01088600 to 01188613 has its CatchHandler @ 01088624 */
    }
    else if (bVar1 == 0x1c) {
      if (pbVar7 < pbVar9 + 3) goto LAB_0108826c;
      uVar8 = (ulong)CONCAT11(pbVar9[1],pbVar9[2]);
    }
    else if (bVar1 < 0xf7) {
      uVar8 = (ulong)bVar1 - 0x8b;
    }
    else if (bVar1 < 0xfb) {
                    /* try { // try from 01088614 to 01188643 has its CatchHandler @ 010885e4 */
      if (pbVar7 < pbVar9 + 2) {
LAB_0108826c:
        uVar8 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 01088600 with catch @ 01088624 */
        uVar8 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar9[1]) + 0x6c);
      }
    }
    else {
      if (pbVar7 < pbVar9 + 2) goto LAB_0108826c;
      uVar2 = 0xfb - bVar1;
                    /* try { // try from 010887d8 to 011887df has its CatchHandler @ 01088a14 */
                    /* try { // try from 010887e0 to 01188937 has its CatchHandler @ 010887bc */
      uVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
              (ulong)pbVar9[1];
    }
    if (lVar11 != 0) {
      uVar8 = (&DAT_0145f028)[local_38] * uVar8;
    }
    if ((long)uVar8 < 0x8000) {
      lVar4 = -0x7fffffff;
      if (-0x8000 < (long)uVar8) {
        lVar4 = uVar8 << 0x10;
      }
    }
    else {
      lVar4 = 0x7fffffff;
    }
  }
  *(long *)(lVar10 + 0x50) = lVar4;
  bVar1 = *pbVar7;
  pbVar9 = *(byte **)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 010881b8 with catch @ 010882b8 */
  if (bVar1 == 0x1e) {
                    /* catch() { ... } // from try @ 01088188 with catch @ 010882bc */
    lVar4 = FUN_01089320(pbVar7,pbVar9,local_38,0);
    pbVar9 = *(byte **)(param_1 + 0x38);
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar9 < pbVar7 + 5) goto LAB_0108832c;
                    /* catch() { ... } // from try @ 010886a4 with catch @ 01088644 */
      uVar8 = (ulong)pbVar7[1] << 0x18 | (ulong)pbVar7[2] << 0x10 | (ulong)pbVar7[3] << 8 |
              (ulong)pbVar7[4];
    }
    else if (bVar1 == 0x1c) {
      if (pbVar9 < pbVar7 + 3) goto LAB_0108832c;
      uVar8 = (ulong)CONCAT11(pbVar7[1],pbVar7[2]);
    }
    else if (bVar1 < 0xf7) {
      uVar8 = (ulong)bVar1 - 0x8b;
    }
    else if (bVar1 < 0xfb) {
      if (pbVar9 < pbVar7 + 2) {
LAB_0108832c:
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar7[1]) + 0x6c);
      }
    }
    else {
      if (pbVar9 < pbVar7 + 2) goto LAB_0108832c;
      uVar2 = 0xfb - bVar1;
      uVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
              (ulong)pbVar7[1];
    }
    if (local_38 != 0) {
      uVar8 = (&DAT_0145f028)[local_38] * uVar8;
    }
    if ((long)uVar8 < 0x8000) {
      lVar4 = -0x7fffffff;
      if (-0x8000 < (long)uVar8) {
        lVar4 = uVar8 << 0x10;
      }
    }
    else {
      lVar4 = 0x7fffffff;
    }
  }
  *(long *)(lVar10 + 0x48) = lVar4;
  bVar1 = *pbVar9;
  pbVar7 = *(byte **)(param_1 + 0x40);
  if (bVar1 == 0x1e) {
    lVar4 = FUN_01089320(pbVar9,pbVar7,local_38,0);
    pbVar7 = *(byte **)(param_1 + 0x40);
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar7 < pbVar9 + 5) goto LAB_010883ec;
                    /* try { // try from 01088698 to 011886a3 has its CatchHandler @ 010886f0 */
                    /* try { // try from 010886a4 to 011887bb has its CatchHandler @ 01088644 */
      uVar8 = (ulong)pbVar9[1] << 0x18 | (ulong)pbVar9[2] << 0x10 | (ulong)pbVar9[3] << 8 |
              (ulong)pbVar9[4];
    }
    else if (bVar1 == 0x1c) {
      if (pbVar7 < pbVar9 + 3) goto LAB_010883ec;
      uVar8 = (ulong)CONCAT11(pbVar9[1],pbVar9[2]);
    }
    else if (bVar1 < 0xf7) {
      uVar8 = (ulong)bVar1 - 0x8b;
    }
    else if (bVar1 < 0xfb) {
      if (pbVar7 < pbVar9 + 2) {
LAB_010883ec:
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar9[1]) + 0x6c);
      }
    }
    else {
      if (pbVar7 < pbVar9 + 2) goto LAB_010883ec;
      uVar2 = 0xfb - bVar1;
      uVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
              (ulong)pbVar9[1];
    }
    if (local_38 != 0) {
      uVar8 = (&DAT_0145f028)[local_38] * uVar8;
    }
    if ((long)uVar8 < 0x8000) {
      lVar4 = -0x7fffffff;
      if (-0x8000 < (long)uVar8) {
        lVar4 = uVar8 << 0x10;
      }
    }
    else {
      lVar4 = 0x7fffffff;
    }
  }
  *(long *)(lVar10 + 0x58) = lVar4;
  bVar1 = *pbVar7;
  pbVar9 = *(byte **)(param_1 + 0x48);
  if (bVar1 == 0x1e) {
    lVar4 = FUN_01089320(pbVar7,pbVar9,local_38,0);
    pbVar9 = *(byte **)(param_1 + 0x48);
  }
  else {
    if (bVar1 == 0x1d) {
      if (pbVar9 < pbVar7 + 5) goto LAB_010884ac;
      uVar8 = (ulong)pbVar7[1] << 0x18 | (ulong)pbVar7[2] << 0x10 | (ulong)pbVar7[3] << 8 |
              (ulong)pbVar7[4];
    }
    else if (bVar1 == 0x1c) {
      if (pbVar9 < pbVar7 + 3) goto LAB_010884ac;
      uVar8 = (ulong)CONCAT11(pbVar7[1],pbVar7[2]);
    }
    else {
                    /* try { // try from 01088548 to 01188597 has its CatchHandler @ 010884f0 */
      if (bVar1 < 0xf7) {
        uVar8 = (ulong)bVar1 - 0x8b;
      }
      else if (bVar1 < 0xfb) {
        if (pbVar9 < pbVar7 + 2) {
LAB_010884ac:
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar7[1]) + 0x6c);
        }
      }
      else {
        if (pbVar9 < pbVar7 + 2) goto LAB_010884ac;
        uVar2 = 0xfb - bVar1;
        uVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
                (ulong)pbVar7[1];
      }
    }
    if (local_38 != 0) {
      uVar8 = (&DAT_0145f028)[local_38] * uVar8;
    }
    if ((long)uVar8 < 0x8000) {
      lVar4 = -0x7fffffff;
      if (-0x8000 < (long)uVar8) {
        lVar4 = uVar8 << 0x10;
      }
    }
    else {
      lVar4 = 0x7fffffff;
    }
  }
  *(long *)(lVar10 + 0x70) = lVar4;
  bVar1 = *pbVar9;
                    /* catch() { ... } // from try @ 01088548 with catch @ 010884f0 */
  pbVar7 = *(byte **)(param_1 + 0x50U);
  if (bVar1 == 0x1e) {
    lVar4 = FUN_01089320(pbVar9,pbVar7,local_38,0);
  }
  else {
    if (bVar1 == 0x1d) {
                    /* catch() { ... } // from try @ 01088528 with catch @ 01088560 */
      if (pbVar7 < pbVar9 + 5) goto LAB_01088564;
      uVar8 = (ulong)pbVar9[1] << 0x18 | (ulong)pbVar9[2] << 0x10 | (ulong)pbVar9[3] << 8 |
              (ulong)pbVar9[4];
    }
    else if (bVar1 == 0x1c) {
                    /* try { // try from 01088528 to 0118852f has its CatchHandler @ 01088560 */
      if (pbVar7 < pbVar9 + 3) goto LAB_01088564;
                    /* try { // try from 01088534 to 01188547 has its CatchHandler @ 01088568 */
      uVar8 = (ulong)CONCAT11(pbVar9[1],pbVar9[2]);
    }
    else if (bVar1 < 0xf7) {
      uVar8 = (ulong)bVar1 - 0x8b;
    }
    else if (bVar1 < 0xfb) {
      if (pbVar7 < pbVar9 + 2) {
LAB_01088564:
        uVar8 = 0;
                    /* catch() { ... } // from try @ 01088534 with catch @ 01088568 */
      }
      else {
        uVar8 = (ulong)(int)(((uint)bVar1 * 0x100 - 0xf700 | (uint)pbVar9[1]) + 0x6c);
      }
    }
    else {
      if (pbVar7 < pbVar9 + 2) goto LAB_01088564;
      uVar2 = 0xfb - bVar1;
      uVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar2 << 8) - 0x6c) -
              (ulong)pbVar9[1];
    }
    if (local_38 != 0) {
      uVar8 = (&DAT_0145f028)[local_38] * uVar8;
    }
    if ((long)uVar8 < 0x8000) {
      lVar4 = -0x7fffffff;
      if (-0x8000 < (long)uVar8) {
        lVar4 = uVar8 << 0x10;
      }
    }
    else {
      lVar4 = 0x7fffffff;
    }
  }
  uVar3 = (&DAT_0145f028)[local_38];
  *(long *)(lVar10 + 0x78) = lVar4;
LAB_010885b0:
  *(undefined8 *)(lVar10 + 0x68) = uVar3;
  return 0;
}

