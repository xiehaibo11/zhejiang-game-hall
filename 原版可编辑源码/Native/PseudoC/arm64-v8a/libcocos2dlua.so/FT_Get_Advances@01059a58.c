
undefined8 FT_Get_Advances(long param_1,uint param_2,uint param_3,uint param_4,ulong *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 == (ulong *)0x0) {
    return 6;
  }
  if (*(uint *)(param_1 + 0x20) < param_3 + param_2) {
    return 0x10;
  }
  if (CARRY4(param_3,param_2)) {
    return 0x10;
  }
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    return 0x10;
  }
  if (param_3 == 0) {
LAB_01059d28:
    uVar2 = 0;
  }
  else {
    pcVar3 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
    if ((pcVar3 != (code *)0x0) && (((param_4 & 3) != 0 || ((param_4 & 0xf0000) == 0x10000)))) {
      uVar2 = (*pcVar3)(param_1,param_2,param_3,param_4,param_5);
                    /* catch() { ... } // from try @ 01059a30 with catch @ 01059aec */
      if ((uint)uVar2 == 0) {
        if ((param_4 & 1) == 0) {
          lVar4 = *(long *)(param_1 + 0xa0);
          if (lVar4 == 0) {
            return 0x24;
          }
          plVar1 = (long *)(lVar4 + 0x20);
          if ((param_4 & 0x10) != 0) {
            plVar1 = (long *)(lVar4 + 0x28);
          }
          lVar5 = *plVar1;
          uVar9 = (ulong)param_3;
          lVar4 = -lVar5;
          if (lVar5 < 0) {
                    /* try { // try from 01059be8 to 01159bf7 has its CatchHandler @ 01059c08 */
            if (param_3 < 2) {
              lVar6 = 0;
LAB_01059d40:
              lVar5 = uVar9 - lVar6;
              puVar7 = param_5 + lVar6;
              do {
                uVar8 = *puVar7;
                lVar5 = lVar5 + -1;
                uVar9 = -uVar8;
                if (-1 < (long)uVar8) {
                  uVar9 = uVar8;
                }
                lVar6 = uVar9 * lVar4 + 0x20;
                lVar10 = uVar9 * lVar4 + 0x5f;
                if (-1 < lVar6) {
                  lVar10 = lVar6;
                }
                uVar9 = -(lVar10 >> 6);
                if ((long)uVar8 < 0) {
                  uVar9 = lVar10 >> 6;
                }
                *puVar7 = uVar9;
                puVar7 = puVar7 + 1;
              } while (lVar5 != 0);
              return 0;
            }
            lVar6 = uVar9 - (param_3 & 1);
            lVar5 = lVar6;
            puVar7 = param_5;
            if (lVar6 == 0) goto LAB_01059d40;
            do {
              lVar5 = lVar5 + -2;
                    /* catch() { ... } // from try @ 01059d1c with catch @ 01059ce4 */
              lVar10 = MP_INT_ABS(*puVar7);
              lVar11 = MP_INT_ABS(puVar7[1]);
              lVar10 = lVar10 * lVar4 + 0x20;
              lVar11 = lVar11 * lVar4 + 0x20;
              uVar8 = (long)(lVar10 + ((ulong)(lVar10 >> 0x3f) >> 0x3a)) >> 6;
              uVar12 = (long)(lVar11 + ((ulong)(lVar11 >> 0x3f) >> 0x3a)) >> 6;
                    /* try { // try from 01059d14 to 01159d1b has its CatchHandler @ 01059dd0 */
              uVar13 = -uVar8;
              uVar14 = -uVar12;
                    /* try { // try from 01059d1c to 01159deb has its CatchHandler @ 01059ce4 */
              puVar7[1] = uVar14 ^ (uVar14 ^ uVar12) & -(ulong)((long)puVar7[1] < 0);
              *puVar7 = uVar13 ^ (uVar13 ^ uVar8) & -(ulong)((long)*puVar7 < 0);
              puVar7 = puVar7 + 2;
            } while (lVar5 != 0);
            if ((param_3 & 1) != 0) goto LAB_01059d40;
          }
          else {
            if (param_3 < 2) {
              lVar6 = 0;
LAB_01059c6c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059c44 with catch @ 01059c6c
                        */
              lVar4 = uVar9 - lVar6;
              puVar7 = param_5 + lVar6;
              do {
                uVar8 = *puVar7;
                lVar4 = lVar4 + -1;
                uVar9 = -uVar8;
                if (-1 < (long)uVar8) {
                  uVar9 = uVar8;
                }
                lVar6 = uVar9 * lVar5 + 0x20;
                lVar10 = uVar9 * lVar5 + 0x5f;
                if (-1 < lVar6) {
                  lVar10 = lVar6;
                }
                uVar9 = -(lVar10 >> 6);
                if (-1 < (long)uVar8) {
                  uVar9 = lVar10 >> 6;
                }
                    /* try { // try from 01059ca8 to 01159cb7 has its CatchHandler @ 01059cd0 */
                *puVar7 = uVar9;
                puVar7 = puVar7 + 1;
              } while (lVar4 != 0);
              return 0;
            }
            lVar6 = uVar9 - (param_3 & 1);
            lVar4 = lVar6;
            puVar7 = param_5;
            if (lVar6 == 0) goto LAB_01059c6c;
            do {
              lVar4 = lVar4 + -2;
              lVar10 = MP_INT_ABS(*puVar7);
              lVar11 = MP_INT_ABS(puVar7[1]);
                    /* try { // try from 01059c44 to 01159c53 has its CatchHandler @ 01059c6c */
              lVar10 = lVar10 * lVar5 + 0x20;
              lVar11 = lVar11 * lVar5 + 0x20;
              uVar8 = (long)(lVar10 + ((ulong)(lVar10 >> 0x3f) >> 0x3a)) >> 6;
              uVar12 = (long)(lVar11 + ((ulong)(lVar11 >> 0x3f) >> 0x3a)) >> 6;
              puVar7[1] = uVar12 ^ (uVar12 ^ -uVar12) & -(ulong)((long)puVar7[1] < 0);
              *puVar7 = uVar8 ^ (uVar8 ^ -uVar8) & -(ulong)((long)*puVar7 < 0);
              puVar7 = puVar7 + 2;
            } while (lVar4 != 0);
            if ((param_3 & 1) != 0) goto LAB_01059c6c;
          }
        }
        goto LAB_01059d28;
      }
      if (((uint)uVar2 & 0xff) != 7) {
        return uVar2;
      }
    }
    if ((param_4 >> 0x1d & 1) == 0) {
      if ((param_4 >> 4 & 1) == 0) {
        uVar9 = 0;
        do {
          uVar2 = FT_Load_Glyph(param_1,param_2 + (int)uVar9,param_4 | 0x100);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          param_5[uVar9] = *(long *)(*(long *)(param_1 + 0x98) + 0x80) << 10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_3);
      }
      else {
        uVar9 = 0;
        do {
          uVar2 = FT_Load_Glyph(param_1,param_2 + (int)uVar9,param_4 | 0x100);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          param_5[uVar9] = *(long *)(*(long *)(param_1 + 0x98) + 0x88) << 10;
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_3);
      }
    }
    else {
      uVar2 = 7;
    }
  }
  return uVar2;
}

