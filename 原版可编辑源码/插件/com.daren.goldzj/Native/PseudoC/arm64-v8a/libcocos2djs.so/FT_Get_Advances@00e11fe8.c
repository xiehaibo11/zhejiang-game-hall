
undefined8 FT_Get_Advances(long param_1,uint param_2,uint param_3,uint param_4,ulong *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 == (ulong *)0x0) {
    return 6;
  }
  uVar7 = (ulong)param_3;
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
LAB_00e122a0:
    uVar1 = 0;
  }
  else {
    pcVar2 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
    if ((pcVar2 != (code *)0x0) && (((param_4 & 3) != 0 || ((param_4 & 0xf0000) == 0x10000)))) {
      uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
      if ((uint)uVar1 == 0) {
        if ((param_4 & 1) == 0) {
          if (*(long *)(param_1 + 0xa0) == 0) {
            return 0x24;
          }
          lVar3 = 0x20;
          if ((param_4 & 0x10) != 0) {
            lVar3 = 0x28;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + lVar3);
          lVar3 = -lVar4;
          if (lVar4 < 0) {
            if (param_3 < 2) {
              uVar5 = 0;
LAB_00e122bc:
              lVar4 = uVar7 - uVar5;
              puVar6 = param_5 + uVar5;
              do {
                uVar8 = *puVar6;
                uVar7 = -uVar8;
                if (-1 < (long)uVar8) {
                  uVar7 = uVar8;
                }
                uVar5 = uVar7 * lVar3 + 0x20 >> 6;
                uVar7 = -uVar5;
                if (-1 >= (long)uVar8) {
                  uVar7 = uVar5;
                }
                lVar4 = lVar4 + -1;
                *puVar6 = uVar7;
                puVar6 = puVar6 + 1;
              } while (lVar4 != 0);
              return 0;
            }
            uVar5 = uVar7 & 0xfffffffe;
            uVar8 = uVar5;
            puVar6 = param_5;
            do {
              uVar8 = uVar8 - 2;
              lVar4 = MP_INT_ABS(*puVar6);
              lVar10 = MP_INT_ABS(puVar6[1]);
              uVar9 = lVar4 * lVar3 + 0x20U >> 6;
              uVar11 = lVar10 * lVar3 + 0x20U >> 6;
              puVar6[1] = uVar11 ^ (uVar11 ^ -uVar11) & -(ulong)(-1 < (long)puVar6[1]);
              *puVar6 = uVar9 ^ (uVar9 ^ -uVar9) & -(ulong)(-1 < (long)*puVar6);
              puVar6 = puVar6 + 2;
            } while (uVar8 != 0);
            if (uVar5 != uVar7) goto LAB_00e122bc;
          }
          else {
            if (param_3 < 2) {
              uVar5 = 0;
LAB_00e121fc:
              lVar3 = uVar7 - uVar5;
              puVar6 = param_5 + uVar5;
              do {
                uVar8 = *puVar6;
                uVar7 = -uVar8;
                if (-1 < (long)uVar8) {
                  uVar7 = uVar8;
                }
                uVar5 = uVar7 * lVar4 + 0x20 >> 6;
                uVar7 = -uVar5;
                if (-1 < (long)uVar8) {
                  uVar7 = uVar5;
                }
                lVar3 = lVar3 + -1;
                *puVar6 = uVar7;
                puVar6 = puVar6 + 1;
              } while (lVar3 != 0);
              return 0;
            }
            uVar5 = uVar7 & 0xfffffffe;
            uVar8 = uVar5;
            puVar6 = param_5;
            do {
              uVar8 = uVar8 - 2;
              lVar3 = MP_INT_ABS(*puVar6);
              lVar10 = MP_INT_ABS(puVar6[1]);
              uVar9 = lVar3 * lVar4 + 0x20U >> 6;
              uVar11 = lVar10 * lVar4 + 0x20U >> 6;
              puVar6[1] = uVar11 ^ (uVar11 ^ -uVar11) & -(ulong)((long)puVar6[1] < 0);
              *puVar6 = uVar9 ^ (uVar9 ^ -uVar9) & -(ulong)((long)*puVar6 < 0);
              puVar6 = puVar6 + 2;
            } while (uVar8 != 0);
            if (uVar5 != uVar7) goto LAB_00e121fc;
          }
        }
        goto LAB_00e122a0;
      }
      if (((uint)uVar1 & 0xff) != 7) {
        return uVar1;
      }
    }
    if ((param_4 >> 0x1d & 1) == 0) {
      lVar3 = 0x400;
      if ((param_4 & 1) != 0) {
        lVar3 = 1;
      }
      uVar8 = 0;
      if ((param_4 & 0x10) == 0) {
        do {
          uVar1 = FT_Load_Glyph(param_1,param_2 + (int)uVar8,param_4 | 0x100);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          param_5[uVar8] = *(long *)(*(long *)(param_1 + 0x98) + 0x80) * lVar3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      else {
        do {
          uVar1 = FT_Load_Glyph(param_1,param_2 + (int)uVar8,param_4 | 0x100);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          param_5[uVar8] = *(long *)(*(long *)(param_1 + 0x98) + 0x88) * lVar3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
    }
    else {
      uVar1 = 7;
    }
  }
  return uVar1;
}

