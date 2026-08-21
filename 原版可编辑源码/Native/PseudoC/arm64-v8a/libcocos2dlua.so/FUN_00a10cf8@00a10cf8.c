
undefined8 FUN_00a10cf8(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  bVar1 = *param_3;
  uVar2 = (uint)bVar1;
  if (0x9f < bVar1) {
    return 0xffffffff;
  }
  if (bVar1 != 0x5c) goto LAB_00a111ac;
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3[1] == 0x75) {
                    /* try { // try from 00a10d4c to 00b10d53 has its CatchHandler @ 00a10fb0 */
    if (param_4 == 2) {
                    /* try { // try from 00a10d54 to 00b10dfb has its CatchHandler @ 00a107c0 */
      return 0xfffffffe;
    }
    bVar1 = param_3[2];
    uVar2 = bVar1 - 0x30;
    if (9 < uVar2) {
      uVar2 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar2 = uVar2 - 0x37;
      }
      else {
                    /* try { // try from 00a10dfc to 00b10e03 has its CatchHandler @ 00a10fac */
                    /* try { // try from 00a10e04 to 00b10edf has its CatchHandler @ 00a107c0 */
        if (0x19 < uVar2 - 0x61) goto LAB_00a111a8;
        uVar2 = uVar2 - 0x57;
      }
    }
    if (param_4 == 3) {
      return 0xfffffffe;
    }
    bVar1 = param_3[3];
    uVar3 = bVar1 - 0x30;
    if (9 < uVar3) {
      uVar3 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar3 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) goto LAB_00a111a8;
        uVar3 = uVar3 - 0x57;
      }
    }
    if (param_4 == 4) {
      return 0xfffffffe;
    }
    bVar1 = param_3[4];
    uVar4 = bVar1 - 0x30;
    if (9 < uVar4) {
      uVar4 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = uVar4 - 0x37;
      }
      else {
        if (0x19 < uVar4 - 0x61) goto LAB_00a111a8;
        uVar4 = uVar4 - 0x57;
      }
    }
    if (param_4 == 5) {
      return 0xfffffffe;
    }
    bVar1 = param_3[5];
    uVar5 = bVar1 - 0x30;
    if (uVar5 < 10) {
LAB_00a10fcc:
                    /* catch() { ... } // from try @ 00a10c2c with catch @ 00a10fe0 */
      uVar2 = (uVar2 & 0xff) << 0xc | (uVar3 & 0xff) << 8 | (uVar4 & 0xff) << 4;
                    /* catch() { ... } // from try @ 00a10b44 with catch @ 00a10fe4 */
      uVar3 = uVar2 | uVar5 & 0xff;
                    /* catch() { ... } // from try @ 00a10bd8 with catch @ 00a10fec */
      if ((uVar3 < 0xa0) || ((uVar2 & 0xff800) == 0xd800)) {
        if (0x3c < uVar3 - 0x24) {
          return 0xffffffff;
        }
        if ((1L << ((ulong)(uVar3 - 0x24) & 0x3f) & 0x1000000010000001U) == 0) {
          return 0xffffffff;
        }
      }
      *param_2 = uVar3;
      return 6;
    }
    uVar5 = (uint)bVar1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar5 = uVar5 - 0x37;
      goto LAB_00a10fcc;
    }
    if (uVar5 - 0x61 < 0x1a) {
      uVar5 = uVar5 - 0x57;
      goto LAB_00a10fcc;
    }
  }
  else if (param_3[1] == 0x55) {
    if (param_4 == 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[2];
    uVar2 = bVar1 - 0x30;
    if (9 < uVar2) {
      uVar2 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar2 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) goto LAB_00a111a8;
        uVar2 = uVar2 - 0x57;
      }
    }
    if (param_4 == 3) {
      return 0xfffffffe;
    }
    bVar1 = param_3[3];
    uVar3 = bVar1 - 0x30;
    if (9 < uVar3) {
      uVar3 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar3 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) goto LAB_00a111a8;
        uVar3 = uVar3 - 0x57;
      }
    }
    if (param_4 == 4) {
      return 0xfffffffe;
    }
    bVar1 = param_3[4];
    uVar4 = bVar1 - 0x30;
    if (9 < uVar4) {
      uVar4 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = uVar4 - 0x37;
      }
      else {
                    /* try { // try from 00a10ee0 to 00b10f27 has its CatchHandler @ 00a10fb4 */
        if (0x19 < uVar4 - 0x61) goto LAB_00a111a8;
        uVar4 = uVar4 - 0x57;
      }
    }
    if (param_4 == 5) {
      return 0xfffffffe;
    }
    bVar1 = param_3[5];
    uVar5 = bVar1 - 0x30;
    if (9 < uVar5) {
      uVar5 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar5 = uVar5 - 0x37;
      }
      else {
        if (0x19 < uVar5 - 0x61) goto LAB_00a111a8;
        uVar5 = uVar5 - 0x57;
      }
    }
    if (param_4 == 6) {
                    /* try { // try from 00a10f8c to 00b10f93 has its CatchHandler @ 00a10fb0 */
      return 0xfffffffe;
    }
    bVar1 = param_3[6];
                    /* try { // try from 00a10f94 to 00b10fa3 has its CatchHandler @ 00a10fac */
    uVar6 = bVar1 - 0x30;
    if (9 < uVar6) {
                    /* try { // try from 00a10fa4 to 00b10fab has its CatchHandler @ 00a10fb4 */
      uVar6 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
                    /* catch() { ... } // from try @ 00a10dfc with catch @ 00a10fac
                       catch() { ... } // from try @ 00a10f94 with catch @ 00a10fac
                       try { // try from 00a10fac to 00b110d3 has its CatchHandler @ 00a107c0 */
        uVar6 = uVar6 - 0x37;
                    /* catch() { ... } // from try @ 00a10d4c with catch @ 00a10fb0
                       catch() { ... } // from try @ 00a10f8c with catch @ 00a10fb0 */
                    /* catch() { ... } // from try @ 00a10ee0 with catch @ 00a10fb4
                       catch() { ... } // from try @ 00a10fa4 with catch @ 00a10fb4 */
      }
      else {
        if (0x19 < uVar6 - 0x61) goto LAB_00a111a8;
        uVar6 = uVar6 - 0x57;
      }
    }
    if (param_4 == 7) {
                    /* catch() { ... } // from try @ 00a10a64 with catch @ 00a11054 */
      return 0xfffffffe;
    }
                    /* catch() { ... } // from try @ 00a10a58 with catch @ 00a11058 */
    bVar1 = param_3[7];
    uVar7 = bVar1 - 0x30;
    if (9 < uVar7) {
      uVar7 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar7 = uVar7 - 0x37;
      }
      else {
        if (0x19 < uVar7 - 0x61) goto LAB_00a111a8;
        uVar7 = uVar7 - 0x57;
      }
    }
    if (param_4 == 8) {
      return 0xfffffffe;
    }
    bVar1 = param_3[8];
    uVar8 = bVar1 - 0x30;
    if (9 < uVar8) {
      uVar8 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
                    /* catch() { ... } // from try @ 00a109e0 with catch @ 00a110c0 */
        uVar8 = uVar8 - 0x37;
      }
      else {
        if (0x19 < uVar8 - 0x61) goto LAB_00a111a8;
        uVar8 = uVar8 - 0x57;
      }
    }
    if (param_4 == 9) {
      return 0xfffffffe;
    }
    bVar1 = param_3[9];
    uVar9 = bVar1 - 0x30;
    if (uVar9 < 10) {
LAB_00a11124:
      uVar2 = uVar2 << 0x1c | uVar3 << 0x18 | (uVar4 & 0xff) << 0x14 | (uVar5 & 0xff) << 0x10 |
              (uVar6 & 0xff) << 0xc | (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 4;
      uVar3 = uVar2 | uVar9 & 0xff;
      if ((uVar3 < 0xa0) || ((uVar2 & 0xfffff800) == 0xd800)) {
        if (0x3c < uVar3 - 0x24) {
          return 0xffffffff;
        }
        if ((1L << ((ulong)(uVar3 - 0x24) & 0x3f) & 0x1000000010000001U) == 0) {
          return 0xffffffff;
        }
      }
      *param_2 = uVar3;
      return 10;
    }
    uVar9 = (uint)bVar1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar9 = uVar9 - 0x37;
      goto LAB_00a11124;
    }
    if (uVar9 - 0x61 < 0x1a) {
      uVar9 = uVar9 - 0x57;
      goto LAB_00a11124;
    }
  }
LAB_00a111a8:
  uVar2 = 0x5c;
LAB_00a111ac:
  *param_2 = uVar2;
  return 1;
}

