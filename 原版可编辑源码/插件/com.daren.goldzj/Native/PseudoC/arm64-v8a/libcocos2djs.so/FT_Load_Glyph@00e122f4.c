
/* WARNING: Type propagation algorithm not settling */

undefined8 FT_Load_Glyph(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) ||
     (lVar24 = *(long *)(param_1 + 0x98), lVar24 == 0)) {
    return 0x23;
  }
  if (*(long *)(lVar24 + 0x128) == 0) {
LAB_00e1233c:
    *(undefined8 *)(lVar24 + 0xa8) = 0;
  }
  else {
    puVar11 = (uint *)(*(long *)(lVar24 + 0x128) + 8);
    uVar10 = *puVar11;
    if ((uVar10 & 1) == 0) goto LAB_00e1233c;
    if (*(long *)(lVar24 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar24 + 8) + 0xb8) + 0x10))();
      puVar11 = (uint *)(*(long *)(lVar24 + 0x128) + 8);
      uVar10 = *puVar11;
    }
    *(undefined8 *)(lVar24 + 0xa8) = 0;
    *puVar11 = uVar10 & 0xfffffffe;
  }
  *(undefined8 *)(lVar24 + 0x98) = 0;
  *(undefined4 *)(lVar24 + 0xa0) = 0;
  *(undefined1 *)(lVar24 + 0xb2) = 0;
  *(undefined4 *)(lVar24 + 0x90) = 0;
  *(undefined4 *)(lVar24 + 0xf0) = 0;
  *(undefined8 *)(lVar24 + 0x68) = 0;
  *(undefined8 *)(lVar24 + 0x60) = 0;
  *(undefined8 *)(lVar24 + 0x78) = 0;
  *(undefined8 *)(lVar24 + 0x70) = 0;
  *(undefined8 *)(lVar24 + 0x48) = 0;
  *(undefined8 *)(lVar24 + 0x40) = 0;
  *(undefined8 *)(lVar24 + 0x58) = 0;
  *(undefined8 *)(lVar24 + 0x50) = 0;
  *(undefined8 *)(lVar24 + 0x38) = 0;
  *(undefined8 *)(lVar24 + 0x30) = 0;
  *(undefined8 *)(lVar24 + 0xd8) = 0;
  *(undefined8 *)(lVar24 + 0xd0) = 0;
  *(undefined8 *)(lVar24 + 0xe8) = 0;
  *(undefined8 *)(lVar24 + 0xe0) = 0;
  *(undefined8 *)(lVar24 + 200) = 0;
  *(undefined8 *)(lVar24 + 0xc0) = 0;
  *(undefined8 *)(lVar24 + 0x100) = 0;
  *(undefined8 *)(lVar24 + 0xf8) = 0;
  *(undefined8 *)(lVar24 + 0x120) = 0;
  *(undefined8 *)(lVar24 + 0x118) = 0;
  *(undefined8 *)(lVar24 + 0x110) = 0;
  *(undefined8 *)(lVar24 + 0x108) = 0;
  plVar26 = *(long **)(param_1 + 0xb0);
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x801;
  }
  plVar25 = *(long **)(plVar26[1] + 0x130);
  if ((param_3 & 1) != 0) {
    param_3 = param_3 & 0xfffffff0 | param_3 & 1 | 10;
  }
  if ((param_3 & 0x400000) != 0) {
    param_3 = param_3 & 0xfffffffb;
  }
  if (((plVar25 == (long *)0x0) || ((param_3 & 0x8002) != 0)) ||
     (uVar10 = (uint)*(ulong *)(param_1 + 0x10), (*(ulong *)(param_1 + 0x10) & 0x2001) != 1))
  goto LAB_00e12580;
  if ((param_3 >> 0xb & 1) == 0) {
    lVar16 = (*(long **)(param_1 + 0xf0))[2];
    lVar14 = **(long **)(param_1 + 0xf0);
    if (lVar16 == 0) {
      if (lVar14 != 0) goto LAB_00e12454;
    }
    else if ((lVar16 != 0) && (lVar14 == 0)) goto LAB_00e12454;
LAB_00e12580:
    uVar9 = (**(code **)(plVar26[3] + 0x90))(lVar24,*(undefined8 *)(param_1 + 0xa0),param_2,param_3)
    ;
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if (*(int *)(lVar24 + 0x90) != 0x6f75746c) {
      uVar9 = 0;
      goto joined_r0x00e127ec;
    }
    sVar3 = *(short *)(lVar24 + 0xca);
    sVar4 = *(short *)(lVar24 + 200);
    if (sVar4 == 0 && sVar3 == 0) {
LAB_00e12614:
      if ((param_3 >> 1 & 1) == 0) {
        if ((param_3 >> 4 & 1) == 0) {
          uVar15 = *(ulong *)(lVar24 + 0x40) & 0xffffffffffffffc0;
          uVar17 = *(long *)(lVar24 + 0x48) + 0x3fU & 0xffffffffffffffc0;
          *(ulong *)(lVar24 + 0x30) =
               (*(ulong *)(lVar24 + 0x40) + *(long *)(lVar24 + 0x30) + 0x3f & 0xffffffffffffffc0) -
               uVar15;
          lVar14 = uVar17 - (*(long *)(lVar24 + 0x48) - *(long *)(lVar24 + 0x38) &
                            0xffffffffffffffc0U);
          *(ulong *)(lVar24 + 0x60) = *(ulong *)(lVar24 + 0x60) & 0xffffffffffffffc0;
          *(ulong *)(lVar24 + 0x58) = *(ulong *)(lVar24 + 0x58) & 0xffffffffffffffc0;
          *(ulong *)(lVar24 + 0x40) = uVar15;
          *(ulong *)(lVar24 + 0x48) = uVar17;
        }
        else {
          uVar15 = *(ulong *)(lVar24 + 0x58);
          uVar17 = *(ulong *)(lVar24 + 0x60);
          *(ulong *)(lVar24 + 0x40) = *(ulong *)(lVar24 + 0x40) & 0xffffffffffffffc0;
          *(ulong *)(lVar24 + 0x48) = *(long *)(lVar24 + 0x48) + 0x3fU & 0xffffffffffffffc0;
          uVar18 = uVar15 & 0xffffffffffffffc0;
          uVar20 = uVar17 & 0xffffffffffffffc0;
          *(ulong *)(lVar24 + 0x58) = uVar18;
          *(ulong *)(lVar24 + 0x60) = uVar20;
          *(ulong *)(lVar24 + 0x30) =
               (uVar15 + *(long *)(lVar24 + 0x30) + 0x3f & 0xffffffffffffffc0) - uVar18;
          lVar14 = (uVar17 + *(long *)(lVar24 + 0x38) + 0x3f & 0xffffffffffffffc0) - uVar20;
        }
        *(long *)(lVar24 + 0x38) = lVar14;
        *(ulong *)(lVar24 + 0x50) = *(long *)(lVar24 + 0x50) + 0x20U & 0xffffffffffffffc0;
        *(ulong *)(lVar24 + 0x68) = *(long *)(lVar24 + 0x68) + 0x20U & 0xffffffffffffffc0;
      }
      goto joined_r0x00e127ec;
    }
    if (sVar3 < 1) {
      return 6;
    }
    if (sVar4 < 1) {
      return 6;
    }
    lVar14 = 0;
    iVar7 = -1;
    do {
      sVar5 = *(short *)(*(long *)(lVar24 + 0xe0) + lVar14 * 2);
      if ((int)sVar3 <= (int)sVar5) {
        return 6;
      }
      iVar22 = (int)sVar5;
      if (iVar22 <= iVar7) {
        return 6;
      }
      lVar14 = lVar14 + 1;
      iVar7 = iVar22;
    } while (lVar14 < sVar4);
    if (sVar3 + -1 == iVar22) goto LAB_00e12614;
LAB_00e12a54:
    uVar9 = 6;
  }
  else {
LAB_00e12454:
    if (((param_3 >> 5 & 1) == 0) && ((*(byte *)(*plVar26 + 1) >> 2 & 1) != 0)) {
      pcVar12 = *(code **)(*plVar26 + 0x40);
      if (pcVar12 == (code *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar8 = (char *)(*pcVar12)(plVar26,"font-format");
      }
      pcVar8 = strstr(pcVar8,"Type 1");
      if (pcVar8 == (char *)0x0) {
        uVar6 = false;
      }
      else {
        uVar6 = (int)plVar26[7] == 1;
      }
      if (((param_3 & 0xf0000) != 0x10000) || ((bool)uVar6 || (*(byte *)(*plVar26 + 1) & 8) != 0)) {
        uVar10 = (uint)*(undefined8 *)(param_1 + 0x10);
        if (((((uVar10 >> 3 & 1) == 0) || (*(long *)(param_1 + 0x4f0) == 0)) ||
            (*(short *)(param_1 + 0x1e6) != 0)) ||
           ((*(long *)(param_1 + 0x458) != 0 || (*(long *)(param_1 + 0x468) != 0))))
        goto LAB_00e12580;
      }
      else {
        uVar10 = (uint)*(undefined8 *)(param_1 + 0x10);
      }
    }
    if ((((param_3 >> 3 & 1) == 0) && ((uVar10 >> 1 & 1) != 0)) &&
       ((iVar7 = (**(code **)(plVar26[3] + 0x90))
                           (lVar24,*(undefined8 *)(param_1 + 0xa0),param_2,param_3 | 0x4000),
        iVar7 == 0 && (*(int *)(lVar24 + 0x90) == 0x62697473)))) {
joined_r0x00e127ec:
      uVar9 = 0;
    }
    else {
      lVar14 = *(long *)(param_1 + 0xf0);
      uVar2 = *(undefined4 *)(lVar14 + 0x30);
      *(undefined4 *)(lVar14 + 0x30) = 0;
      uVar9 = (**(code **)(*(long *)(*plVar25 + 0x28) + 0x18))
                        (plVar25,lVar24,*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
      *(undefined4 *)(lVar14 + 0x30) = uVar2;
    }
joined_r0x00e127ec:
    if ((param_3 >> 4 & 1) == 0) {
      *(undefined8 *)(lVar24 + 0x80) = *(undefined8 *)(lVar24 + 0x50);
      *(undefined8 *)(lVar24 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(lVar24 + 0x80) = 0;
      *(undefined8 *)(lVar24 + 0x88) = *(undefined8 *)(lVar24 + 0x68);
    }
    if (((param_3 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
      lVar13 = *(long *)(param_1 + 0xa0);
      lVar16 = *(long *)(lVar24 + 0x70);
      lVar19 = *(long *)(lVar24 + 0x78);
      lVar23 = *(long *)(lVar13 + 0x20);
      lVar14 = -lVar16;
      if (-1 < lVar16) {
        lVar14 = lVar16;
      }
      iVar7 = 1;
      if (-1 >= lVar16) {
        iVar7 = -1;
      }
      lVar16 = -lVar23;
      if (-1 < lVar23) {
        lVar16 = lVar23;
      }
      iVar22 = -iVar7;
      if (-1 < lVar23) {
        iVar22 = iVar7;
      }
      uVar17 = lVar16 * lVar14 + 0x20U >> 6;
      uVar15 = -uVar17;
      if (-1 < iVar22) {
        uVar15 = uVar17;
      }
      *(ulong *)(lVar24 + 0x70) = uVar15;
      lVar16 = *(long *)(lVar13 + 0x28);
      lVar14 = -lVar19;
      if (-1 < lVar19) {
        lVar14 = lVar19;
      }
      iVar7 = 1;
      if (-1 >= lVar19) {
        iVar7 = -1;
      }
      lVar19 = -lVar16;
      if (-1 < lVar16) {
        lVar19 = lVar16;
      }
      iVar22 = -iVar7;
      if (-1 < lVar16) {
        iVar22 = iVar7;
      }
      uVar17 = lVar19 * lVar14 + 0x20U >> 6;
      uVar15 = -uVar17;
      if (-1 < iVar22) {
        uVar15 = uVar17;
      }
      *(ulong *)(lVar24 + 0x78) = uVar15;
    }
    if ((param_3 >> 0xb & 1) == 0) {
      plVar26 = *(long **)(param_1 + 0xf0);
      uVar10 = *(uint *)(plVar26 + 6);
      if (uVar10 != 0) {
        lVar16 = *(long *)(*(long *)(*(long *)(lVar24 + 8) + 0xb0) + 8);
        lVar14 = *(long *)(lVar16 + 0x128);
        if (lVar14 == 0) {
          iVar7 = *(int *)(lVar24 + 0x90);
LAB_00e1274c:
          if (lVar16 != 0) {
            for (lVar16 = *(long *)(lVar16 + 0x118); lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
              lVar14 = *(long *)(lVar16 + 0x10);
              if (*(int *)(lVar14 + 0x20) == iVar7) {
                if (lVar14 != 0) goto LAB_00e127f8;
                break;
              }
            }
          }
          if (iVar7 != 0x6f75746c) goto joined_r0x00e12964;
          if (((plVar26 != (long *)0x0) && ((uVar10 & 1) != 0)) &&
             (0 < (long)*(short *)(lVar24 + 0xca))) {
            plVar25 = *(long **)(lVar24 + 0xd0);
            plVar21 = plVar25 + (long)*(short *)(lVar24 + 0xca) * 2;
            do {
              if (plVar25 != (long *)0x0) {
                lVar19 = *plVar26 * *plVar25;
                lVar14 = plVar26[2] * *plVar25;
                lVar13 = plVar26[1] * plVar25[1];
                lVar16 = plVar26[3] * plVar25[1];
                *plVar25 = (lVar13 + (lVar13 >> 0x3f) + 0x8000 >> 0x10) +
                           (lVar19 + (lVar19 >> 0x3f) + 0x8000 >> 0x10);
                plVar25[1] = (lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10) +
                             (lVar14 + (lVar14 >> 0x3f) + 0x8000 >> 0x10);
              }
              plVar25 = plVar25 + 2;
            } while (plVar25 < plVar21);
          }
          if ((uVar10 >> 1 & 1) == 0) goto joined_r0x00e12964;
          sVar3 = *(short *)(lVar24 + 0xca);
          uVar10 = (int)sVar3 - 1;
          if (0 < sVar3) {
            lVar16 = plVar26[5];
            lVar14 = plVar26[4];
            plVar25 = *(long **)(lVar24 + 0xd0);
            uVar15 = (ulong)uVar10 + 1;
            if (uVar15 < 4) {
              uVar17 = 0;
            }
            else {
              uVar17 = 0;
              if (((~uVar10 & 0xffff) != 0) && (uVar10 >> 0x10 == 0)) {
                uVar1 = (int)sVar3 & 3;
                uVar17 = uVar15 - uVar1;
                plVar21 = plVar25 + 4;
                plVar25 = plVar25 + uVar17 * 2;
                lVar19 = ((ulong)uVar10 + 1) - (ulong)uVar1;
                do {
                  lVar19 = lVar19 + -4;
                  plVar21[-4] = plVar21[-4] + lVar14;
                  plVar21[-3] = plVar21[-3] + lVar16;
                  plVar21[-2] = plVar21[-2] + lVar14;
                  plVar21[-1] = plVar21[-1] + lVar16;
                  *plVar21 = *plVar21 + lVar14;
                  plVar21[1] = plVar21[1] + lVar16;
                  plVar21[2] = plVar21[2] + lVar14;
                  plVar21[3] = plVar21[3] + lVar16;
                  plVar21 = plVar21 + 8;
                } while (lVar19 != 0);
                if (uVar1 == 0) goto joined_r0x00e12964;
              }
            }
            do {
              uVar10 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar10;
              plVar25[1] = plVar25[1] + lVar16;
              *plVar25 = *plVar25 + lVar14;
              plVar25 = plVar25 + 2;
            } while ((int)(uVar10 & 0xffff) < (int)sVar3);
            goto joined_r0x00e12964;
          }
        }
        else {
          iVar7 = *(int *)(lVar24 + 0x90);
          if (*(int *)(lVar14 + 0x20) != iVar7) goto LAB_00e1274c;
LAB_00e127f8:
          uVar9 = (**(code **)(*(long *)(lVar14 + 0x18) + 0x58))(lVar14,lVar24,plVar26,plVar26 + 4);
joined_r0x00e12964:
          if (plVar26 == (long *)0x0) goto LAB_00e129b8;
        }
        lVar19 = *plVar26 * *(long *)(lVar24 + 0x80);
        lVar14 = plVar26[2] * *(long *)(lVar24 + 0x80);
        lVar13 = plVar26[1] * *(long *)(lVar24 + 0x88);
        lVar16 = plVar26[3] * *(long *)(lVar24 + 0x88);
        *(long *)(lVar24 + 0x80) =
             (lVar13 + (lVar13 >> 0x3f) + 0x8000 >> 0x10) +
             (lVar19 + (lVar19 >> 0x3f) + 0x8000 >> 0x10);
        *(long *)(lVar24 + 0x88) =
             (lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10) +
             (lVar14 + (lVar14 >> 0x3f) + 0x8000 >> 0x10);
      }
    }
LAB_00e129b8:
    *(undefined4 *)(lVar24 + 0x18) = param_2;
    *(uint *)(*(long *)(lVar24 + 0x128) + 0x48) = param_3;
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    if ((param_3 & 1) == 0) {
      if (*(int *)(lVar24 + 0x90) == 0x62697473) {
        return 0;
      }
      if (*(int *)(lVar24 + 0x90) == 0x636f6d70) {
        return 0;
      }
      uVar10 = param_3 >> 0xb & 2;
      if ((param_3 >> 0x10 & 0xf) != 0) {
        uVar10 = param_3 >> 0x10 & 0xf;
      }
      if ((param_3 >> 2 & 1) != 0) {
        if (*(long *)(lVar24 + 8) != 0) {
          uVar9 = FUN_00e18cc4(*(undefined8 *)(*(long *)(*(long *)(lVar24 + 8) + 0xb0) + 8),lVar24);
          return uVar9;
        }
        goto LAB_00e12a54;
      }
      FUN_00e14d30(lVar24,uVar10,0);
    }
    uVar9 = 0;
  }
  return uVar9;
}

