
long FUN_00c10ad0(uint *param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  uint *puVar16;
  ulong *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  
  if (param_2 < 0xf1) {
    if (param_2 < 0x17) {
      uVar8 = *param_1;
      uVar19 = 4;
      uVar9 = 4;
      uVar29 = 0x20;
      uVar7 = uVar8 >> 4;
    }
    else {
      uVar8 = *param_1;
      uVar29 = param_2 + 0xf & 0xfffffffffffffff8;
      uVar9 = param_2 + 0xf >> 3;
      uVar19 = (uint)uVar9;
      uVar7 = uVar8 >> (ulong)(uVar19 & 0x1f);
    }
    if ((uVar7 & 3) != 0) {
      lVar11 = ((ulong)~uVar7 & 1) + uVar9;
      lVar13 = *(long *)(param_1 + lVar11 * 4 + 0x12);
      puVar16 = *(uint **)(lVar13 + 0x10);
      if (param_1 + lVar11 * 4 + 0xe == puVar16) {
        *param_1 = uVar8 & (1 << (ulong)((uint)lVar11 & 0x1f) ^ 0xffffffffU);
      }
      else {
        *(uint **)(param_1 + lVar11 * 4 + 0x12) = puVar16;
        *(uint **)(puVar16 + 6) = param_1 + lVar11 * 4 + 0xe;
      }
      lVar21 = lVar13 + lVar11 * 8;
      *(ulong *)(lVar13 + 8) = lVar11 * 8 | 3;
      *(ulong *)(lVar21 + 8) = *(ulong *)(lVar21 + 8) | 1;
      return lVar13 + 0x10;
    }
    uVar24 = *(ulong *)(param_1 + 2);
    if (uVar29 <= uVar24) {
LAB_00c10db0:
      uVar9 = uVar24 - uVar29;
      lVar11 = *(long *)(param_1 + 6);
      if (0x1f < uVar9) {
        lVar13 = lVar11 + uVar29;
        *(ulong *)(param_1 + 2) = uVar9;
        *(long *)(param_1 + 6) = lVar13;
        *(ulong *)(lVar13 + 8) = uVar9 | 1;
        *(ulong *)(lVar13 + uVar9) = uVar9;
        *(ulong *)(lVar11 + 8) = uVar29 | 3;
        return lVar11 + 0x10;
      }
      uVar29 = uVar24 | 3;
LAB_00c10df0:
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(ulong *)(lVar11 + 8) = uVar29;
      *(ulong *)(lVar11 + uVar24 + 8) = *(ulong *)(lVar11 + uVar24 + 8) | 1;
      return lVar11 + 0x10;
    }
    if (uVar7 != 0) {
      iVar4 = 1 << (ulong)(uVar19 & 0x1f);
      uVar7 = (iVar4 * -2 | iVar4 * 2) & uVar7 << (ulong)(uVar19 & 0x1f);
      uVar7 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
      uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
      lVar13 = (long)(int)uVar7;
      lVar11 = *(long *)(param_1 + lVar13 * 4 + 0x12);
      puVar16 = *(uint **)(lVar11 + 0x10);
      if (param_1 + lVar13 * 4 + 0xe == puVar16) {
        *param_1 = uVar8 & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
      }
      else {
        *(uint **)(param_1 + lVar13 * 4 + 0x12) = puVar16;
        *(uint **)(puVar16 + 6) = param_1 + lVar13 * 4 + 0xe;
      }
      uVar18 = lVar13 * 8;
      uVar9 = uVar18 - uVar29;
      if (uVar9 < 0x20) {
        *(ulong *)(lVar11 + 8) = uVar18 | 3;
        *(ulong *)(lVar11 + uVar18 + 8) = *(ulong *)(lVar11 + uVar18 + 8) | 1;
        return lVar11 + 0x10;
      }
      lVar13 = lVar11 + uVar29;
      *(ulong *)(lVar11 + 8) = uVar29 | 3;
      *(ulong *)(lVar13 + 8) = uVar9 | 1;
      *(ulong *)(lVar13 + uVar9) = uVar9;
      if (uVar24 != 0) {
        uVar24 = uVar24 >> 3;
        lVar21 = *(long *)(param_1 + 6);
        uVar8 = 1 << (ulong)((uint)uVar24 & 0x1f);
        if ((uVar8 & *param_1) == 0) {
          *param_1 = uVar8 | *param_1;
          puVar16 = param_1 + uVar24 * 4 + 0xe;
        }
        else {
          puVar16 = *(uint **)(param_1 + uVar24 * 4 + 0x12);
        }
        *(long *)(param_1 + uVar24 * 4 + 0x12) = lVar21;
        *(long *)(puVar16 + 6) = lVar21;
        *(uint **)(lVar21 + 0x10) = puVar16;
        *(uint **)(lVar21 + 0x18) = param_1 + uVar24 * 4 + 0xe;
      }
      *(ulong *)(param_1 + 2) = uVar9;
      *(long *)(param_1 + 6) = lVar13;
      return lVar11 + 0x10;
    }
    uVar7 = param_1[1];
    if (uVar7 != 0) {
      uVar19 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
      uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      lVar13 = *(long *)(param_1 + (long)(int)LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10) * 2 + 0x92);
      lVar11 = lVar13;
      uVar9 = (*(ulong *)(lVar13 + 8) & 0xfffffffffffffffc) - uVar29;
      while ((lVar21 = *(long *)(lVar13 + 0x20), *(long *)(lVar13 + 0x20) != 0 ||
             (lVar21 = *(long *)(lVar13 + 0x28), *(long *)(lVar13 + 0x28) != 0))) {
        lVar13 = lVar21;
        uVar18 = (*(ulong *)(lVar13 + 8) & 0xfffffffffffffffc) - uVar29;
        if (uVar18 < uVar9) {
          lVar11 = lVar13;
          uVar9 = uVar18;
        }
      }
      lVar13 = *(long *)(lVar11 + 0x18);
      lVar21 = *(long *)(lVar11 + 0x30);
      if (lVar13 == lVar11) {
        lVar14 = *(long *)(lVar11 + 0x28);
        puVar5 = (undefined8 *)(lVar11 + 0x28);
        if (*(long *)(lVar11 + 0x28) == 0) {
          lVar13 = *(long *)(lVar11 + 0x20);
          lVar14 = lVar13;
          puVar5 = (undefined8 *)(lVar11 + 0x20);
          if (lVar13 == 0) goto LAB_00c112c0;
        }
        do {
          do {
            puVar27 = puVar5;
            lVar13 = lVar14;
            lVar14 = *(long *)(lVar13 + 0x28);
            puVar5 = (undefined8 *)(lVar13 + 0x28);
          } while (*(long *)(lVar13 + 0x28) != 0);
          lVar14 = *(long *)(lVar13 + 0x20);
          puVar5 = (undefined8 *)(lVar13 + 0x20);
        } while (*(long *)(lVar13 + 0x20) != 0);
        *puVar27 = 0;
      }
      else {
        lVar14 = *(long *)(lVar11 + 0x10);
        *(long *)(lVar14 + 0x18) = lVar13;
        *(long *)(lVar13 + 0x10) = lVar14;
      }
LAB_00c112c0:
      if (lVar21 != 0) {
        lVar14 = *(long *)(lVar11 + 0x38);
        if (*(long *)(param_1 + lVar14 * 2 + 0x92) == lVar11) {
          *(long *)(param_1 + lVar14 * 2 + 0x92) = lVar13;
          if (lVar13 != 0) goto LAB_00c112ec;
          param_1[1] = uVar7 & (1 << (ulong)((uint)lVar14 & 0x1f) ^ 0xffffffffU);
        }
        else {
          if (*(long *)(lVar21 + 0x20) == lVar11) {
            *(long *)(lVar21 + 0x20) = lVar13;
          }
          else {
            *(long *)(lVar21 + 0x28) = lVar13;
          }
          if (lVar13 != 0) {
LAB_00c112ec:
            lVar14 = *(long *)(lVar11 + 0x20);
            *(long *)(lVar13 + 0x30) = lVar21;
            if (lVar14 != 0) {
              *(long *)(lVar13 + 0x20) = lVar14;
              *(long *)(lVar14 + 0x30) = lVar13;
            }
            lVar21 = *(long *)(lVar11 + 0x28);
            if (lVar21 != 0) {
              *(long *)(lVar13 + 0x28) = lVar21;
              *(long *)(lVar21 + 0x30) = lVar13;
            }
          }
        }
      }
      if (uVar9 < 0x20) {
        lVar13 = lVar11 + uVar9 + uVar29;
        *(ulong *)(lVar11 + 8) = uVar9 + uVar29 | 3;
        *(ulong *)(lVar13 + 8) = *(ulong *)(lVar13 + 8) | 1;
      }
      else {
        lVar13 = lVar11 + uVar29;
        *(ulong *)(lVar11 + 8) = uVar29 | 3;
        *(ulong *)(lVar13 + 8) = uVar9 | 1;
        *(ulong *)(lVar13 + uVar9) = uVar9;
        if (uVar24 != 0) {
          uVar24 = uVar24 >> 3;
          uVar7 = 1 << (ulong)((uint)uVar24 & 0x1f);
          lVar21 = *(long *)(param_1 + 6);
          if ((uVar7 & uVar8) == 0) {
            *param_1 = uVar7 | uVar8;
            puVar16 = param_1 + uVar24 * 4 + 0xe;
          }
          else {
            puVar16 = *(uint **)(param_1 + uVar24 * 4 + 0x12);
          }
          *(long *)(param_1 + uVar24 * 4 + 0x12) = lVar21;
          *(long *)(puVar16 + 6) = lVar21;
          *(uint **)(lVar21 + 0x10) = puVar16;
          *(uint **)(lVar21 + 0x18) = param_1 + uVar24 * 4 + 0xe;
        }
        *(ulong *)(param_1 + 2) = uVar9;
        *(long *)(param_1 + 6) = lVar13;
      }
      if (lVar11 + 0x10 != 0) {
        return lVar11 + 0x10;
      }
LAB_00c10c54:
      uVar24 = *(ulong *)(param_1 + 2);
      goto LAB_00c10c58;
    }
LAB_00c10c60:
    if (uVar29 < *(ulong *)(param_1 + 4)) {
      lVar11 = *(long *)(param_1 + 8);
      uVar9 = *(ulong *)(param_1 + 4) - uVar29;
      *(ulong *)(param_1 + 4) = uVar9;
      *(ulong *)(param_1 + 8) = lVar11 + uVar29;
      *(ulong *)(lVar11 + uVar29 + 8) = uVar9 | 1;
      *(ulong *)(lVar11 + 8) = uVar29 | 3;
      return lVar11 + 0x10;
    }
    puVar16 = (uint *)0x1ffff;
    if ((0x1ffff < uVar29) && (uVar9 = uVar29 + 0x1036 & 0xfffffffffffff000, uVar29 < uVar9)) {
      puVar12 = (undefined4 *)__errno();
      uVar3 = *puVar12;
      puVar16 = mmap((void *)0x0,uVar9,3,0x22,-1,0);
      *puVar12 = uVar3;
      if (puVar16 != (uint *)0xffffffffffffffff) {
        if (((ulong)(puVar16 + 4) & 7) == 0) {
          uVar18 = 1;
          uVar24 = 0;
        }
        else {
          uVar24 = -(long)(puVar16 + 4) & 7;
          uVar18 = uVar24 | 1;
        }
        uVar22 = (uVar9 - uVar24) - 0x20;
        *(ulong *)((long)puVar16 + uVar24) = uVar18;
        *(ulong *)((long)puVar16 + uVar24 + 8) = uVar22 | 2;
        lVar11 = (long)puVar16 + uVar24 + 0x10;
        *(undefined8 *)((long)puVar16 + uVar22 + uVar24 + 8) = 0xb;
        *(undefined8 *)((long)puVar16 + (uVar9 - uVar24) + uVar24 + -0x10) = 0;
        if (lVar11 != 0) {
          return lVar11;
        }
        puVar16 = (uint *)0x0;
      }
    }
  }
  else {
    if (param_2 < 0xffffffffffffff80) {
      uVar8 = param_1[1];
      uVar29 = param_2 + 0xf & 0xfffffffffffffff8;
      if (uVar8 == 0) goto LAB_00c10c54;
      uVar9 = -uVar29;
      uVar7 = (uint)(param_2 + 0xf >> 8);
      if (uVar7 != 0) {
        if (0xffff < uVar7) {
          lVar11 = *(long *)(param_1 + 0xd0);
          uVar24 = 0x1f;
          if (lVar11 == 0) goto LAB_00c10c54;
LAB_00c11098:
          uVar18 = 0;
          goto LAB_00c10e34;
        }
        uVar7 = (uint)LZCOUNT(uVar7) ^ 0x1f;
        uVar24 = (uVar29 >> ((ulong)(uVar7 + 7) & 0x3f) & 1) + (ulong)uVar7 * 2;
        lVar11 = *(long *)(param_1 + uVar24 * 2 + 0x92);
        if (lVar11 != 0) {
          if (uVar24 != 0x1f) {
            uVar18 = 0x39 - (uVar24 >> 1);
            goto LAB_00c10e34;
          }
          goto LAB_00c11098;
        }
LAB_00c11110:
        uVar7 = -2 << (ulong)((uint)uVar24 & 0x1f) & uVar8;
LAB_00c1111c:
        if (uVar7 != 0) {
          uVar7 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          lVar11 = 0;
          lVar13 = *(long *)(param_1 + LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10) * 2 + 0x92);
          if (*(long *)(param_1 + LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10) * 2 + 0x92) != 0)
          goto LAB_00c11144;
        }
        goto LAB_00c10c54;
      }
      lVar11 = *(long *)(param_1 + 0x92);
      uVar7 = uVar8 & 0xfffffffe;
      if (lVar11 == 0) goto LAB_00c1111c;
      uVar18 = 0x39;
      uVar24 = 0;
LAB_00c10e34:
      lVar14 = uVar29 << (uVar18 & 0x3f);
      lVar13 = 0;
      lVar21 = 0;
      while( true ) {
        uVar18 = (*(ulong *)(lVar11 + 8) & 0xfffffffffffffffc) - uVar29;
        if ((uVar18 < uVar9) && (lVar21 = lVar11, uVar9 = uVar18, uVar18 == 0)) {
          uVar9 = 0;
          lVar13 = lVar11;
          goto LAB_00c11144;
        }
        lVar20 = *(long *)(lVar11 + 0x28);
        lVar11 = *(long *)(lVar11 + (4 - (lVar14 >> 0x3f)) * 8);
        if ((lVar20 != lVar11) && (lVar20 != 0)) {
          lVar13 = lVar20;
        }
        if (lVar11 == 0) break;
        lVar14 = lVar14 << 1;
      }
      lVar11 = lVar21;
      if ((lVar21 == 0) && (lVar13 == 0)) goto LAB_00c11110;
      while (lVar13 != 0) {
LAB_00c11144:
        do {
          lVar21 = lVar13;
          uVar24 = (*(ulong *)(lVar21 + 8) & 0xfffffffffffffffc) - uVar29;
          if (uVar24 < uVar9) {
            lVar11 = lVar21;
            uVar9 = uVar24;
          }
          lVar13 = *(long *)(lVar21 + 0x20);
        } while (*(long *)(lVar21 + 0x20) != 0);
        lVar13 = *(long *)(lVar21 + 0x28);
      }
      if (lVar11 == 0) goto LAB_00c10c54;
      uVar24 = *(ulong *)(param_1 + 2);
      if (uVar9 < uVar24 - uVar29) {
        lVar13 = *(long *)(lVar11 + 0x18);
        lVar21 = *(long *)(lVar11 + 0x30);
        if (lVar11 == lVar13) {
          lVar14 = *(long *)(lVar11 + 0x28);
          puVar5 = (undefined8 *)(lVar11 + 0x28);
          if (*(long *)(lVar11 + 0x28) == 0) {
            lVar13 = *(long *)(lVar11 + 0x20);
            lVar14 = lVar13;
            puVar5 = (undefined8 *)(lVar11 + 0x20);
            if (lVar13 == 0) goto LAB_00c111a4;
          }
          do {
            do {
              puVar27 = puVar5;
              lVar13 = lVar14;
              lVar14 = *(long *)(lVar13 + 0x28);
              puVar5 = (undefined8 *)(lVar13 + 0x28);
            } while (*(long *)(lVar13 + 0x28) != 0);
            lVar14 = *(long *)(lVar13 + 0x20);
            puVar5 = (undefined8 *)(lVar13 + 0x20);
          } while (*(long *)(lVar13 + 0x20) != 0);
          *puVar27 = 0;
        }
        else {
          lVar14 = *(long *)(lVar11 + 0x10);
          *(long *)(lVar14 + 0x18) = lVar13;
          *(long *)(lVar13 + 0x10) = lVar14;
        }
LAB_00c111a4:
        if (lVar21 != 0) {
          lVar14 = *(long *)(lVar11 + 0x38);
          if (lVar11 == *(long *)(param_1 + lVar14 * 2 + 0x92)) {
            *(long *)(param_1 + lVar14 * 2 + 0x92) = lVar13;
            if (lVar13 != 0) goto LAB_00c111d0;
            param_1[1] = uVar8 & (1 << (ulong)((uint)lVar14 & 0x1f) ^ 0xffffffffU);
          }
          else {
            if (lVar11 == *(long *)(lVar21 + 0x20)) {
              *(long *)(lVar21 + 0x20) = lVar13;
            }
            else {
              *(long *)(lVar21 + 0x28) = lVar13;
            }
            if (lVar13 != 0) {
LAB_00c111d0:
              lVar14 = *(long *)(lVar11 + 0x20);
              *(long *)(lVar13 + 0x30) = lVar21;
              if (lVar14 != 0) {
                *(long *)(lVar13 + 0x20) = lVar14;
                *(long *)(lVar14 + 0x30) = lVar13;
              }
              lVar21 = *(long *)(lVar11 + 0x28);
              if (lVar21 != 0) {
                *(long *)(lVar13 + 0x28) = lVar21;
                *(long *)(lVar21 + 0x30) = lVar13;
              }
            }
          }
        }
        if (uVar9 < 0x20) {
          lVar13 = lVar11 + uVar9 + uVar29;
          *(ulong *)(lVar11 + 8) = uVar9 + uVar29 | 3;
          *(ulong *)(lVar13 + 8) = *(ulong *)(lVar13 + 8) | 1;
        }
        else {
          lVar13 = lVar11 + uVar29;
          *(ulong *)(lVar11 + 8) = uVar29 | 3;
          uVar18 = uVar9 >> 3;
          *(ulong *)(lVar13 + 8) = uVar9 | 1;
          *(ulong *)(lVar13 + uVar9) = uVar9;
          if (uVar18 < 0x20) {
            uVar8 = 1 << (ulong)((uint)uVar18 & 0x1f);
            if ((uVar8 & *param_1) == 0) {
              *param_1 = uVar8 | *param_1;
              puVar16 = param_1 + uVar18 * 4 + 0xe;
            }
            else {
              puVar16 = *(uint **)(param_1 + uVar18 * 4 + 0x12);
            }
            *(long *)(param_1 + uVar18 * 4 + 0x12) = lVar13;
            *(long *)(puVar16 + 6) = lVar13;
            *(uint **)(lVar13 + 0x10) = puVar16;
            *(uint **)(lVar13 + 0x18) = param_1 + uVar18 * 4 + 0xe;
          }
          else {
            uVar8 = (uint)(uVar9 >> 8);
            if (uVar8 == 0) {
              uVar8 = 1;
              uVar18 = 0;
            }
            else if (uVar8 < 0x10000) {
              uVar8 = (uint)LZCOUNT(uVar8) ^ 0x1f;
              uVar18 = (uVar9 >> ((ulong)(uVar8 + 7) & 0x3f) & 1) + (ulong)uVar8 * 2;
              uVar8 = 1 << (ulong)((uint)uVar18 & 0x1f);
            }
            else {
              uVar8 = 0x80000000;
              uVar18 = 0x1f;
            }
            uVar7 = param_1[1];
            *(ulong *)(lVar13 + 0x38) = uVar18;
            *(undefined8 *)(lVar13 + 0x28) = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            if ((uVar8 & uVar7) == 0) {
              param_1[1] = uVar8 | uVar7;
              *(long *)(param_1 + (uVar18 + 0x48) * 2 + 2) = lVar13;
              *(long *)(lVar13 + 0x18) = lVar13;
              *(uint **)(lVar13 + 0x30) = param_1 + (uVar18 + 0x48) * 2 + 2;
              *(long *)(lVar13 + 0x10) = lVar13;
            }
            else {
              if (uVar18 == 0x1f) {
                uVar22 = 0;
              }
              else {
                uVar22 = 0x39 - (uVar18 >> 1);
              }
              lVar14 = uVar9 << (uVar22 & 0x3f);
              lVar21 = *(long *)(param_1 + uVar18 * 2 + 0x92);
              do {
                lVar20 = lVar21;
                if (uVar9 == (*(ulong *)(lVar20 + 8) & 0xfffffffffffffffc)) {
                  lVar21 = *(long *)(lVar20 + 0x10);
                  *(long *)(lVar21 + 0x18) = lVar13;
                  *(long *)(lVar20 + 0x10) = lVar13;
                  *(long *)(lVar13 + 0x10) = lVar21;
                  *(long *)(lVar13 + 0x18) = lVar20;
                  *(undefined8 *)(lVar13 + 0x30) = 0;
                  goto LAB_00c11218;
                }
                lVar1 = lVar14 >> 0x3f;
                lVar14 = lVar14 << 1;
                lVar1 = 4 - lVar1;
                lVar21 = *(long *)(lVar20 + lVar1 * 8);
              } while (lVar21 != 0);
              *(long *)(lVar20 + lVar1 * 8) = lVar13;
              *(long *)(lVar13 + 0x30) = lVar20;
              *(long *)(lVar13 + 0x18) = lVar13;
              *(long *)(lVar13 + 0x10) = lVar13;
            }
          }
        }
LAB_00c11218:
        if (lVar11 + 0x10 != 0) {
          return lVar11 + 0x10;
        }
      }
LAB_00c10c58:
      if (uVar29 <= uVar24) goto LAB_00c10db0;
      goto LAB_00c10c60;
    }
    uVar29 = 0xffffffffffffffff;
    puVar16 = param_1;
    if (*(long *)(param_1 + 2) == -1) {
      lVar11 = *(long *)(param_1 + 6);
      uVar29 = 0xffffffffffffffff;
      uVar24 = 0xffffffffffffffff;
      goto LAB_00c10df0;
    }
  }
  uVar9 = uVar29 + 0x20040 & 0xfffffffffffe0000;
  if (uVar9 <= uVar29) {
    return 0;
  }
  puVar12 = (undefined4 *)__errno(puVar16);
  uVar3 = *puVar12;
  puVar10 = mmap((void *)0x0,uVar9,3,0x22,-1,0);
  *puVar12 = uVar3;
  if (puVar10 == (ulong *)0xffffffffffffffff) {
    return 0;
  }
  puVar15 = (ulong *)(param_1 + 0xd2);
  puVar17 = puVar15;
  do {
    if (puVar10 == (ulong *)((long)*puVar17 + puVar17[1])) {
      puVar26 = *(ulong **)(param_1 + 8);
      if ((puVar26 < (ulong *)*puVar17) || (puVar10 <= puVar26)) goto LAB_00c10bfc;
      lVar11 = *(long *)(param_1 + 4);
      puVar17[1] = puVar17[1] + uVar9;
      uVar24 = 0;
      if (((ulong)(puVar26 + 2) & 7) != 0) {
        uVar24 = -(long)(puVar26 + 2) & 7;
      }
      lVar13 = (long)puVar26 + uVar24;
      uVar24 = (uVar9 + lVar11) - uVar24;
      *(long *)(param_1 + 8) = lVar13;
      *(ulong *)(param_1 + 4) = uVar24;
      *(ulong *)(lVar13 + 8) = uVar24 | 1;
      *(undefined8 *)(lVar13 + uVar24 + 8) = 0x40;
      param_1[10] = 0x200000;
      param_1[0xb] = 0;
      goto LAB_00c10ef4;
    }
    puVar17 = (ulong *)puVar17[2];
  } while (puVar17 != (ulong *)0x0);
  puVar26 = *(ulong **)(param_1 + 8);
LAB_00c10bfc:
  uVar24 = (long)puVar10 + uVar9;
  puVar17 = puVar15;
  while (*puVar17 != uVar24) {
    puVar17 = (ulong *)puVar17[2];
    puVar23 = puVar15;
    if (puVar17 == (ulong *)0x0) goto LAB_00c10c18;
  }
  *puVar17 = (ulong)puVar10;
  puVar17[1] = puVar17[1] + uVar9;
  if (((ulong)(puVar10 + 2) & 7) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = -(long)(puVar10 + 2) & 7;
  }
  lVar11 = (long)puVar10 + uVar9;
  uVar9 = 0;
  if ((uVar24 + 0x10 & 7) != 0) {
    uVar9 = -(uVar24 + 0x10) & 7;
  }
  puVar10 = (ulong *)(uVar24 + uVar9);
  *(ulong *)(lVar11 + 8) = uVar29 | 3;
  lVar13 = lVar11 + uVar29;
  uVar29 = (long)puVar10 + (-uVar29 - lVar11);
  if (puVar10 == puVar26) {
    lVar21 = *(long *)(param_1 + 4);
    *(long *)(param_1 + 8) = lVar13;
    *(ulong *)(param_1 + 4) = uVar29 + lVar21;
    *(ulong *)(lVar13 + 8) = uVar29 + lVar21 | 1;
    return lVar11 + 0x10;
  }
  if (puVar10 == *(ulong **)(param_1 + 6)) {
    *(long *)(param_1 + 6) = lVar13;
    uVar29 = uVar29 + *(long *)(param_1 + 2);
    *(ulong *)(param_1 + 2) = uVar29;
    *(ulong *)(lVar13 + 8) = uVar29 | 1;
    *(ulong *)(lVar13 + uVar29) = uVar29;
    return lVar11 + 0x10;
  }
  uVar9 = puVar10[1];
  if (((uint)uVar9 >> 1 & 1) != 0) goto LAB_00c10fcc;
  if (uVar9 >> 3 < 0x20) {
    uVar18 = puVar10[2];
    uVar24 = puVar10[3];
    if (uVar18 == uVar24) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar9 >> 3) & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(ulong *)(uVar18 + 0x18) = uVar24;
      *(ulong *)(uVar24 + 0x10) = uVar18;
    }
    goto LAB_00c10fc0;
  }
  puVar15 = (ulong *)puVar10[3];
  uVar24 = puVar10[6];
  if (puVar10 == puVar15) {
    puVar17 = (ulong *)puVar10[5];
    puVar26 = puVar10 + 5;
    if ((ulong *)puVar10[5] != (ulong *)0x0) goto LAB_00c11a70;
    puVar15 = (ulong *)puVar10[4];
    puVar17 = puVar15;
    puVar26 = puVar10 + 4;
    if (puVar15 != (ulong *)0x0) {
LAB_00c11a70:
      do {
        do {
          puVar23 = puVar26;
          puVar15 = puVar17;
          puVar17 = (ulong *)puVar15[5];
          puVar26 = puVar15 + 5;
        } while ((ulong *)puVar15[5] != (ulong *)0x0);
        puVar17 = (ulong *)puVar15[4];
        puVar26 = puVar15 + 4;
      } while ((ulong *)puVar15[4] != (ulong *)0x0);
      *puVar23 = 0;
    }
  }
  else {
    uVar18 = puVar10[2];
    *(ulong **)(uVar18 + 0x18) = puVar15;
    puVar15[2] = uVar18;
  }
  if (uVar24 == 0) goto LAB_00c10fc0;
  uVar18 = puVar10[7];
  if (puVar10 == *(ulong **)(param_1 + uVar18 * 2 + 0x92)) {
    *(ulong **)(param_1 + uVar18 * 2 + 0x92) = puVar15;
    if (puVar15 == (ulong *)0x0) {
      param_1[1] = param_1[1] & (1 << (ulong)((uint)uVar18 & 0x1f) ^ 0xffffffffU);
      goto LAB_00c10fc0;
    }
  }
  else {
    if (puVar10 == *(ulong **)(uVar24 + 0x20)) {
      *(ulong **)(uVar24 + 0x20) = puVar15;
    }
    else {
      *(ulong **)(uVar24 + 0x28) = puVar15;
    }
    if (puVar15 == (ulong *)0x0) goto LAB_00c10fc0;
  }
  uVar18 = puVar10[4];
  puVar15[6] = uVar24;
  if (uVar18 != 0) {
    puVar15[4] = uVar18;
    *(ulong **)(uVar18 + 0x30) = puVar15;
  }
  uVar24 = puVar10[5];
  if (uVar24 != 0) {
    puVar15[5] = uVar24;
    *(ulong **)(uVar24 + 0x30) = puVar15;
  }
LAB_00c10fc0:
  puVar10 = (ulong *)((long)puVar10 + (uVar9 & 0xfffffffffffffffc));
  uVar29 = uVar29 + (uVar9 & 0xfffffffffffffffc);
  uVar9 = puVar10[1];
LAB_00c10fcc:
  puVar10[1] = uVar9 & 0xfffffffffffffffe;
  uVar9 = uVar29 >> 3;
  *(ulong *)(lVar13 + 8) = uVar29 | 1;
  *(ulong *)(lVar13 + uVar29) = uVar29;
  if (uVar9 < 0x20) {
    uVar8 = 1 << (ulong)((uint)uVar9 & 0x1f);
    if ((uVar8 & *param_1) == 0) {
      *param_1 = uVar8 | *param_1;
      puVar16 = param_1 + uVar9 * 4 + 0xe;
    }
    else {
      puVar16 = *(uint **)(param_1 + uVar9 * 4 + 0x12);
    }
    *(long *)(param_1 + uVar9 * 4 + 0x12) = lVar13;
    *(long *)(puVar16 + 6) = lVar13;
    *(uint **)(lVar13 + 0x10) = puVar16;
    *(uint **)(lVar13 + 0x18) = param_1 + uVar9 * 4 + 0xe;
  }
  else {
    uVar8 = (uint)(uVar29 >> 8);
    if (uVar8 == 0) {
      uVar8 = 1;
      uVar9 = 0;
    }
    else if (uVar8 < 0x10000) {
      uVar8 = (uint)LZCOUNT(uVar8) ^ 0x1f;
      uVar9 = (uVar29 >> ((ulong)(uVar8 + 7) & 0x3f) & 1) + (ulong)uVar8 * 2;
      uVar8 = 1 << (ulong)((uint)uVar9 & 0x1f);
    }
    else {
      uVar8 = 0x80000000;
      uVar9 = 0x1f;
    }
    uVar7 = param_1[1];
    *(ulong *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x28) = 0;
    *(undefined8 *)(lVar13 + 0x20) = 0;
    if ((uVar8 & uVar7) == 0) {
      param_1[1] = uVar8 | uVar7;
      *(long *)(param_1 + (uVar9 + 0x48) * 2 + 2) = lVar13;
      *(long *)(lVar13 + 0x18) = lVar13;
      *(uint **)(lVar13 + 0x30) = param_1 + (uVar9 + 0x48) * 2 + 2;
      *(long *)(lVar13 + 0x10) = lVar13;
    }
    else {
      if (uVar9 == 0x1f) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0x39 - (uVar9 >> 1);
      }
      lVar14 = uVar29 << (uVar24 & 0x3f);
      lVar21 = *(long *)(param_1 + uVar9 * 2 + 0x92);
      do {
        lVar20 = lVar21;
        if (uVar29 == (*(ulong *)(lVar20 + 8) & 0xfffffffffffffffc)) {
          lVar21 = *(long *)(lVar20 + 0x10);
          *(long *)(lVar21 + 0x18) = lVar13;
          *(long *)(lVar20 + 0x10) = lVar13;
          *(long *)(lVar13 + 0x10) = lVar21;
          *(long *)(lVar13 + 0x18) = lVar20;
          *(undefined8 *)(lVar13 + 0x30) = 0;
          return lVar11 + 0x10;
        }
        lVar1 = lVar14 >> 0x3f;
        lVar14 = lVar14 << 1;
        lVar1 = 4 - lVar1;
        lVar21 = *(long *)(lVar20 + lVar1 * 8);
      } while (lVar21 != 0);
      *(long *)(lVar20 + lVar1 * 8) = lVar13;
      *(long *)(lVar13 + 0x30) = lVar20;
      *(long *)(lVar13 + 0x18) = lVar13;
      *(long *)(lVar13 + 0x10) = lVar13;
    }
  }
  return lVar11 + 0x10;
LAB_00c10c18:
  while ((puVar26 < (ulong *)*puVar23 ||
         (puVar17 = (ulong *)((long)*puVar23 + puVar23[1]), puVar17 <= puVar26))) {
    puVar23 = (ulong *)puVar23[2];
    if (puVar23 == (ulong *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1000,0xc10c44);
      (*pcVar6)();
    }
  }
  lVar11 = -0x47;
  if (((long)puVar17 - 0x37U & 7) != 0) {
    lVar11 = (-((long)puVar17 - 0x37U) & 7) - 0x47;
  }
  puVar2 = (ulong *)((long)puVar17 + lVar11);
  puVar23 = puVar26 + 4;
  puVar25 = puVar26;
  if (puVar23 <= puVar2) {
    puVar23 = puVar2 + 4;
    puVar25 = puVar2;
  }
  uVar24 = 0;
  if (((ulong)(puVar10 + 2) & 7) != 0) {
    uVar24 = -(long)(puVar10 + 2) & 7;
  }
  lVar11 = (long)puVar10 + uVar24;
  uVar24 = (uVar9 - 0x40) - uVar24;
  *(long *)(param_1 + 8) = lVar11;
  *(ulong *)(param_1 + 4) = uVar24;
  uVar18 = *puVar15;
  uVar22 = *(ulong *)(param_1 + 0xd4);
  *(ulong *)(lVar11 + 8) = uVar24 | 1;
  *(undefined8 *)(lVar11 + uVar24 + 8) = 0x40;
  uVar28 = (long)puVar17 + (-9 - (long)puVar23);
  param_1[10] = 0x200000;
  param_1[0xb] = 0;
  puVar25[2] = uVar18;
  puVar25[3] = uVar22;
  lVar11 = (uVar28 >> 3) + 1;
  uVar24 = *(ulong *)(param_1 + 0xd6);
  if (puVar17 < (ulong *)((long)puVar23 + 9U)) {
    lVar11 = 1;
  }
  puVar25[1] = 0x23;
  puVar25[4] = uVar24;
  *(ulong **)(param_1 + 0xd2) = puVar10;
  *(ulong *)(param_1 + 0xd4) = uVar9;
  uVar9 = (lVar11 - 2U >> 1) + 1;
  *(ulong **)(param_1 + 0xd6) = puVar25 + 2;
  if ((uVar28 < 0x18) || (puVar17 < (ulong *)((long)puVar23 + 9U))) {
LAB_00c11560:
    puVar23[1] = 0xb;
    if ((puVar23 + 2 < puVar17) && (puVar23[2] = 0xb, puVar23 + 3 < puVar17)) {
      puVar23[3] = 0xb;
    }
  }
  else {
    uVar24 = 0;
    puVar10 = puVar23 + 1;
    do {
      puVar10[1] = 0xb;
      *puVar10 = 0xb;
      uVar24 = uVar24 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar24 < uVar9);
    puVar23 = puVar23 + uVar9 * 2;
    if (uVar9 * 2 - lVar11 != 0) goto LAB_00c11560;
  }
  if (puVar25 != puVar26) {
    uVar24 = (long)puVar25 - (long)puVar26;
    uVar9 = uVar24 >> 3;
    puVar25[1] = puVar25[1] & 0xfffffffffffffffe;
    puVar26[1] = uVar24 | 1;
    *puVar25 = uVar24;
    if (0x1f < uVar9) {
      uVar8 = (uint)(uVar24 >> 8);
      if (uVar8 == 0) {
        uVar8 = 1;
        uVar9 = 0;
      }
      else if (uVar8 < 0x10000) {
        uVar8 = (uint)LZCOUNT(uVar8) ^ 0x1f;
        uVar9 = (uVar24 >> ((ulong)(uVar8 + 7) & 0x3f) & 1) + (ulong)uVar8 * 2;
        uVar8 = 1 << (ulong)((uint)uVar9 & 0x1f);
      }
      else {
        uVar8 = 0x80000000;
        uVar9 = 0x1f;
      }
      uVar7 = param_1[1];
      puVar26[7] = uVar9;
      puVar26[5] = 0;
      puVar26[4] = 0;
      if ((uVar8 & uVar7) == 0) {
        param_1[1] = uVar8 | uVar7;
        uVar24 = *(ulong *)(param_1 + 4);
        *(ulong **)(param_1 + (uVar9 + 0x48) * 2 + 2) = puVar26;
        puVar26[3] = (ulong)puVar26;
        puVar26[6] = (ulong)(param_1 + (uVar9 + 0x48) * 2 + 2);
        puVar26[2] = (ulong)puVar26;
      }
      else {
        if (uVar9 == 0x1f) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0x39 - (uVar9 >> 1);
        }
        lVar11 = uVar24 << (uVar18 & 0x3f);
        uVar9 = *(ulong *)(param_1 + uVar9 * 2 + 0x92);
        do {
          uVar18 = uVar9;
          if (uVar24 == (*(ulong *)(uVar18 + 8) & 0xfffffffffffffffc)) {
            uVar9 = *(ulong *)(uVar18 + 0x10);
            uVar24 = *(ulong *)(param_1 + 4);
            *(ulong **)(uVar9 + 0x18) = puVar26;
            *(ulong **)(uVar18 + 0x10) = puVar26;
            puVar26[2] = uVar9;
            puVar26[3] = uVar18;
            puVar26[6] = 0;
            goto LAB_00c10ef4;
          }
          lVar13 = lVar11 >> 0x3f;
          lVar11 = lVar11 << 1;
          lVar13 = 4 - lVar13;
          uVar9 = *(ulong *)(uVar18 + lVar13 * 8);
        } while (uVar9 != 0);
        *(ulong **)(uVar18 + lVar13 * 8) = puVar26;
        puVar26[6] = uVar18;
        puVar26[3] = (ulong)puVar26;
        puVar26[2] = (ulong)puVar26;
        uVar24 = *(ulong *)(param_1 + 4);
      }
      goto LAB_00c10ef4;
    }
    uVar8 = 1 << (ulong)((uint)uVar9 & 0x1f);
    if ((uVar8 & *param_1) == 0) {
      *param_1 = uVar8 | *param_1;
      puVar16 = param_1 + uVar9 * 4 + 0xe;
    }
    else {
      puVar16 = *(uint **)(param_1 + uVar9 * 4 + 0x12);
    }
    *(ulong **)(param_1 + uVar9 * 4 + 0x12) = puVar26;
    *(ulong **)(puVar16 + 6) = puVar26;
    puVar26[2] = (ulong)puVar16;
    puVar26[3] = (ulong)(param_1 + uVar9 * 4 + 0xe);
  }
  uVar24 = *(ulong *)(param_1 + 4);
LAB_00c10ef4:
  if (uVar24 <= uVar29) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 8);
  *(ulong *)(param_1 + 4) = uVar24 - uVar29;
  *(ulong *)(param_1 + 8) = lVar11 + uVar29;
  *(ulong *)(lVar11 + uVar29 + 8) = uVar24 - uVar29 | 1;
  *(ulong *)(lVar11 + 8) = uVar29 | 3;
  return lVar11 + 0x10;
}

