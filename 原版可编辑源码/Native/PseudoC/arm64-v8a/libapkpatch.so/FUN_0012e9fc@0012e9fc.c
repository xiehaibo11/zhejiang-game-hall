
ulong FUN_0012e9fc(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  void *__s;
  undefined1 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  
  iVar5 = FUN_0012e6a0();
  if (iVar5 != 0) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (param_2 < 0) {
    return 0xfffffffe;
  }
  if (param_1[3] != 0) {
    lVar12 = param_1[1];
    lVar17 = param_1[7];
    if ((((int)lVar12 == 0) || (*param_1 != 0)) &&
       ((iVar5 = *(int *)(lVar17 + 8), iVar5 != 0x29a || (param_2 == 4)))) {
      if ((int)param_1[4] == 0) {
LAB_0012ed9c:
        uVar7 = 0xfffffffb;
        pcVar9 = "buffer error";
        goto LAB_0012ea78;
      }
      iVar2 = *(int *)(lVar17 + 0x4c);
      *(int *)(lVar17 + 0x4c) = param_2;
      if (*(long *)(lVar17 + 0x28) == 0) {
        if ((int)lVar12 == 0) {
          iVar13 = -9;
          iVar1 = iVar13;
          if (param_2 < 5) {
            iVar1 = 0;
          }
          if (iVar2 < 5) {
            iVar13 = 0;
          }
          if ((iVar1 + param_2 * 2 <= iVar13 + iVar2 * 2) && (param_2 != 4)) goto LAB_0012ed9c;
        }
      }
      else {
        FUN_0012f594(param_1);
        if ((int)param_1[4] == 0) goto LAB_0012f2cc;
        iVar5 = *(int *)(lVar17 + 8);
      }
      if (iVar5 == 0x2a) {
        if ((*(int *)(lVar17 + 200) < 2) && (iVar5 = *(int *)(lVar17 + 0xc4), 1 < iVar5)) {
          if (iVar5 < 6) {
            uVar6 = 0x40;
          }
          else {
            uVar6 = 0x80;
            if (iVar5 != 6) {
              uVar6 = 0xc0;
            }
          }
        }
        else {
          uVar6 = 0;
        }
        uVar6 = uVar6 | *(int *)(lVar17 + 0x54) * 0x1000 - 0x7800U;
        lVar12 = *(long *)(lVar17 + 0x28);
        if (*(int *)(lVar17 + 0xac) != 0) {
          uVar6 = uVar6 | 0x20;
        }
        *(long *)(lVar17 + 0x28) = lVar12 + 1;
        *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)(uVar6 >> 8);
        lVar12 = *(long *)(lVar17 + 0x28);
        *(long *)(lVar17 + 0x28) = lVar12 + 1;
        *(byte *)(*(long *)(lVar17 + 0x10) + lVar12) =
             ((byte)uVar6 + (char)(uVar6 / 0x1f) * -0x1f | (byte)uVar6) ^ 0x1f;
        if (*(int *)(lVar17 + 0xac) != 0) {
          lVar12 = param_1[0xc];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x18);
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x10);
          lVar12 = param_1[0xc];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 8);
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)lVar12;
        }
        lVar12 = FUN_00132b28(0,0,0);
        param_1[0xc] = lVar12;
        *(undefined4 *)(lVar17 + 8) = 0x71;
        FUN_0012f594(param_1);
        if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
        iVar5 = *(int *)(lVar17 + 8);
LAB_0012ec14:
        if (iVar5 == 0x39) {
          lVar12 = FUN_0012e2ac(0,0,0);
          lVar15 = *(long *)(lVar17 + 0x28);
          lVar14 = *(long *)(lVar17 + 0x10);
          param_1[0xc] = lVar12;
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(undefined1 *)(lVar14 + lVar15) = 0x1f;
          lVar12 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 0x8b;
          lVar12 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 8;
          piVar10 = *(int **)(lVar17 + 0x38);
          if (piVar10 == (int *)0x0) {
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 0;
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 0;
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 0;
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 0;
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 0;
            if (*(int *)(lVar17 + 0xc4) == 9) {
              uVar8 = 2;
            }
            else {
              uVar8 = 4;
              if (1 < *(int *)(lVar17 + 0xc4) && *(int *)(lVar17 + 200) < 2) {
                uVar8 = 0;
              }
            }
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = uVar8;
            lVar12 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = 3;
            *(undefined4 *)(lVar17 + 8) = 0x71;
            FUN_0012f594(param_1);
            if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
            iVar5 = *(int *)(lVar17 + 8);
            goto LAB_0012ef4c;
          }
          iVar5 = *piVar10;
          iVar2 = piVar10[0x11];
          lVar15 = *(long *)(lVar17 + 0x28);
          lVar12 = *(long *)(piVar10 + 6);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) =
               iVar5 != 0 | (iVar2 != 0) << 1 | (lVar12 != 0) << 2 |
               (*(long *)(piVar10 + 10) != 0) << 3 | (*(long *)(piVar10 + 0xe) != 0) << 4;
          lVar12 = *(long *)(lVar17 + 0x28);
          uVar11 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)uVar11;
          lVar12 = *(long *)(lVar17 + 0x28);
          uVar11 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)((ulong)uVar11 >> 8);
          lVar12 = *(long *)(lVar17 + 0x28);
          uVar11 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)((ulong)uVar11 >> 0x10);
          lVar12 = *(long *)(lVar17 + 0x28);
          uVar11 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 8);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)((ulong)uVar11 >> 0x18);
          if (*(int *)(lVar17 + 0xc4) == 9) {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
            if (1 < *(int *)(lVar17 + 0xc4) && *(int *)(lVar17 + 200) < 2) {
              uVar8 = 0;
            }
          }
          lVar12 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(undefined1 *)(*(long *)(lVar17 + 0x10) + lVar12) = uVar8;
          lVar12 = *(long *)(lVar17 + 0x28);
          uVar3 = *(undefined4 *)(*(long *)(lVar17 + 0x38) + 0x14);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)uVar3;
          lVar12 = *(long *)(lVar17 + 0x38);
          if (*(long *)(lVar12 + 0x18) != 0) {
            lVar15 = *(long *)(lVar17 + 0x28);
            uVar3 = *(undefined4 *)(lVar12 + 0x20);
            *(long *)(lVar17 + 0x28) = lVar15 + 1;
            *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)uVar3;
            lVar12 = *(long *)(lVar17 + 0x28);
            uVar3 = *(undefined4 *)(*(long *)(lVar17 + 0x38) + 0x20);
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)((uint)uVar3 >> 8);
            lVar12 = *(long *)(lVar17 + 0x38);
          }
          if (*(int *)(lVar12 + 0x44) != 0) {
            lVar12 = FUN_0012e2ac(param_1[0xc],*(undefined8 *)(lVar17 + 0x10),
                                  *(undefined4 *)(lVar17 + 0x28));
            param_1[0xc] = lVar12;
          }
          *(undefined8 *)(lVar17 + 0x40) = 0;
          *(undefined4 *)(lVar17 + 8) = 0x45;
LAB_0012ef68:
          lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x18);
          if (lVar12 != 0) {
            lVar15 = *(long *)(lVar17 + 0x40);
            uVar18 = *(ulong *)(lVar17 + 0x28);
            uVar16 = *(ulong *)(lVar17 + 0x18);
            uVar7 = (ulong)((uint)*(ushort *)(*(long *)(lVar17 + 0x38) + 0x20) - (int)lVar15);
            if (uVar16 < uVar18 + uVar7) {
              while( true ) {
                uVar19 = uVar16 - uVar18;
                memcpy((void *)(*(long *)(lVar17 + 0x10) + uVar18),(void *)(lVar12 + lVar15),
                       uVar19 & 0xffffffff);
                uVar16 = *(ulong *)(lVar17 + 0x18);
                iVar5 = *(int *)(*(long *)(lVar17 + 0x38) + 0x44);
                *(ulong *)(lVar17 + 0x28) = uVar16;
                if ((iVar5 != 0) && (uVar18 < uVar16)) {
                  lVar12 = FUN_0012e2ac(param_1[0xc],*(long *)(lVar17 + 0x10) + uVar18,
                                        (int)uVar16 - (int)uVar18);
                  param_1[0xc] = lVar12;
                }
                *(ulong *)(lVar17 + 0x40) = *(long *)(lVar17 + 0x40) + (uVar19 & 0xffffffff);
                FUN_0012f594(param_1);
                if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
                uVar16 = *(ulong *)(lVar17 + 0x18);
                uVar7 = (ulong)(uint)((int)uVar7 - (int)uVar19);
                if (uVar7 <= uVar16) break;
                lVar15 = *(long *)(lVar17 + 0x40);
                uVar18 = 0;
                lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x18);
              }
              lVar15 = *(long *)(lVar17 + 0x40);
              uVar18 = 0;
              lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x18);
            }
            memcpy((void *)(*(long *)(lVar17 + 0x10) + uVar18),(void *)(lVar12 + lVar15),uVar7);
            iVar5 = *(int *)(*(long *)(lVar17 + 0x38) + 0x44);
            uVar7 = *(long *)(lVar17 + 0x28) + uVar7;
            *(ulong *)(lVar17 + 0x28) = uVar7;
            if ((iVar5 != 0) && (uVar18 < uVar7)) {
              lVar12 = FUN_0012e2ac(param_1[0xc],*(long *)(lVar17 + 0x10) + uVar18,
                                    (int)uVar7 - (int)uVar18);
              param_1[0xc] = lVar12;
            }
            *(undefined8 *)(lVar17 + 0x40) = 0;
          }
          *(undefined4 *)(lVar17 + 8) = 0x49;
LAB_0012f0ac:
          if (*(long *)(*(long *)(lVar17 + 0x38) + 0x28) != 0) {
            uVar7 = *(ulong *)(lVar17 + 0x28);
            uVar16 = uVar7;
            while( true ) {
              if (uVar16 == *(ulong *)(lVar17 + 0x18)) {
                if ((*(int *)(*(long *)(lVar17 + 0x38) + 0x44) != 0) && (uVar7 < uVar16)) {
                  lVar12 = FUN_0012e2ac(param_1[0xc],*(long *)(lVar17 + 0x10) + uVar7,
                                        (int)uVar16 - (int)uVar7);
                  param_1[0xc] = lVar12;
                }
                FUN_0012f594(param_1);
                if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
                uVar16 = 0;
                uVar7 = 0;
              }
              lVar12 = *(long *)(lVar17 + 0x40);
              lVar15 = *(long *)(*(long *)(lVar17 + 0x38) + 0x28);
              *(long *)(lVar17 + 0x40) = lVar12 + 1;
              cVar4 = *(char *)(lVar15 + lVar12);
              *(ulong *)(lVar17 + 0x28) = uVar16 + 1;
              *(char *)(*(long *)(lVar17 + 0x10) + uVar16) = cVar4;
              if (cVar4 == '\0') break;
              uVar16 = *(ulong *)(lVar17 + 0x28);
            }
            if ((*(int *)(*(long *)(lVar17 + 0x38) + 0x44) != 0) &&
               (uVar7 < *(ulong *)(lVar17 + 0x28))) {
              lVar12 = FUN_0012e2ac(param_1[0xc],*(long *)(lVar17 + 0x10) + uVar7,
                                    (int)*(ulong *)(lVar17 + 0x28) - (int)uVar7);
              param_1[0xc] = lVar12;
            }
            *(undefined8 *)(lVar17 + 0x40) = 0;
          }
          *(undefined4 *)(lVar17 + 8) = 0x5b;
LAB_0012f178:
          if (*(long *)(*(long *)(lVar17 + 0x38) + 0x38) != 0) {
            uVar7 = *(ulong *)(lVar17 + 0x28);
            uVar16 = uVar7;
            while( true ) {
              if (uVar16 == *(ulong *)(lVar17 + 0x18)) {
                if ((*(int *)(*(long *)(lVar17 + 0x38) + 0x44) != 0) && (uVar7 < uVar16)) {
                  lVar12 = FUN_0012e2ac(param_1[0xc],*(long *)(lVar17 + 0x10) + uVar7,
                                        (int)uVar16 - (int)uVar7);
                  param_1[0xc] = lVar12;
                }
                FUN_0012f594(param_1);
                if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
                uVar16 = 0;
                uVar7 = 0;
              }
              lVar12 = *(long *)(lVar17 + 0x40);
              lVar15 = *(long *)(*(long *)(lVar17 + 0x38) + 0x38);
              *(long *)(lVar17 + 0x40) = lVar12 + 1;
              cVar4 = *(char *)(lVar15 + lVar12);
              *(ulong *)(lVar17 + 0x28) = uVar16 + 1;
              *(char *)(*(long *)(lVar17 + 0x10) + uVar16) = cVar4;
              if (cVar4 == '\0') break;
              uVar16 = *(ulong *)(lVar17 + 0x28);
            }
            if ((*(int *)(*(long *)(lVar17 + 0x38) + 0x44) != 0) &&
               (uVar7 < *(ulong *)(lVar17 + 0x28))) {
              lVar12 = FUN_0012e2ac(param_1[0xc],*(long *)(lVar17 + 0x10) + uVar7,
                                    (int)*(ulong *)(lVar17 + 0x28) - (int)uVar7);
              param_1[0xc] = lVar12;
            }
          }
          *(undefined4 *)(lVar17 + 8) = 0x67;
LAB_0012f240:
          if (*(int *)(*(long *)(lVar17 + 0x38) + 0x44) != 0) {
            lVar12 = *(long *)(lVar17 + 0x28);
            if (*(ulong *)(lVar17 + 0x18) < lVar12 + 2U) {
              FUN_0012f594(param_1);
              lVar12 = 0;
              if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
            }
            lVar15 = param_1[0xc];
            *(long *)(lVar17 + 0x28) = lVar12 + 1;
            *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)lVar15;
            lVar12 = param_1[0xc];
            lVar15 = *(long *)(lVar17 + 0x28);
            *(long *)(lVar17 + 0x28) = lVar15 + 1;
            *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 8);
            lVar12 = FUN_0012e2ac(0,0,0);
            param_1[0xc] = lVar12;
          }
          *(undefined4 *)(lVar17 + 8) = 0x71;
          FUN_0012f594(param_1);
          if (*(long *)(lVar17 + 0x28) != 0) goto LAB_0012f2cc;
        }
        else {
LAB_0012ef4c:
          if (0x5a < iVar5) {
            if (iVar5 == 0x5b) goto LAB_0012f178;
            if (iVar5 != 0x67) goto LAB_0012f2dc;
            goto LAB_0012f240;
          }
          if (iVar5 == 0x45) goto LAB_0012ef68;
          if (iVar5 == 0x49) goto LAB_0012f0ac;
        }
LAB_0012f2dc:
        if ((int)param_1[1] == 0) goto LAB_0012f2e4;
      }
      else {
        if (iVar5 != 0x29a) goto LAB_0012ec14;
        if ((int)param_1[1] != 0) goto LAB_0012ed9c;
LAB_0012f2e4:
        if ((*(int *)(lVar17 + 0xb4) == 0) && ((param_2 == 0 || (*(int *)(lVar17 + 8) == 0x29a))))
        goto LAB_0012f40c;
      }
      if (*(int *)(lVar17 + 0xc4) == 0) {
        uVar6 = FUN_0012f628(lVar17,param_2);
      }
      else if (*(int *)(lVar17 + 200) == 3) {
        uVar6 = FUN_0012fc74(lVar17,param_2);
      }
      else if (*(int *)(lVar17 + 200) == 2) {
        uVar6 = FUN_0012fac8(lVar17,param_2);
      }
      else {
        uVar6 = (*(code *)(&PTR_FUN_00166f70)[(long)*(int *)(lVar17 + 0xc4) * 2])(lVar17,param_2);
      }
      if ((uVar6 & 0xfffffffe) == 2) {
        *(undefined4 *)(lVar17 + 8) = 0x29a;
      }
      if ((uVar6 & 0xfffffffd) != 0) {
        if (uVar6 == 1) {
          if (param_2 != 5) {
            if (param_2 == 1) {
              FUN_00132eec();
            }
            else {
              FUN_00132cb0(lVar17,0,0,0);
              if (param_2 == 3) {
                __s = *(void **)(lVar17 + 0x78);
                uVar7 = (ulong)(*(int *)(lVar17 + 0x84) - 1);
                *(undefined2 *)((long)__s + uVar7 * 2) = 0;
                memset(__s,0,uVar7 << 1);
                if (*(int *)(lVar17 + 0xb4) == 0) {
                  *(undefined4 *)(lVar17 + 0xac) = 0;
                  *(undefined8 *)(lVar17 + 0x98) = 0;
                  *(undefined4 *)(lVar17 + 0x172c) = 0;
                }
              }
            }
          }
          FUN_0012f594(param_1);
          if ((int)param_1[4] == 0) goto LAB_0012f2cc;
        }
LAB_0012f40c:
        if (param_2 != 4) {
          return 0;
        }
        if (*(int *)(lVar17 + 0x30) < 1) {
          return 1;
        }
        lVar12 = param_1[0xc];
        if (*(int *)(lVar17 + 0x30) == 2) {
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)lVar12;
          lVar12 = param_1[0xc];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 8);
          lVar12 = param_1[0xc];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x10);
          lVar12 = param_1[0xc];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x18);
          lVar12 = *(long *)(lVar17 + 0x28);
          lVar15 = param_1[2];
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)lVar15;
          lVar12 = param_1[2];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 8);
          lVar12 = param_1[2];
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x10);
          lVar12 = *(long *)(lVar17 + 0x28);
          lVar15 = *(long *)(lVar17 + 0x10);
          uVar7 = (ulong)param_1[2] >> 0x18;
        }
        else {
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x18);
          lVar15 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar15 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar15) = (char)((ulong)lVar12 >> 0x10);
          uVar7 = param_1[0xc];
          lVar12 = *(long *)(lVar17 + 0x28);
          *(long *)(lVar17 + 0x28) = lVar12 + 1;
          *(char *)(*(long *)(lVar17 + 0x10) + lVar12) = (char)(uVar7 >> 8);
          lVar12 = *(long *)(lVar17 + 0x28);
          lVar15 = *(long *)(lVar17 + 0x10);
        }
        *(long *)(lVar17 + 0x28) = lVar12 + 1;
        *(char *)(lVar15 + lVar12) = (char)uVar7;
        FUN_0012f594(param_1);
        if (0 < *(int *)(lVar17 + 0x30)) {
          *(int *)(lVar17 + 0x30) = -*(int *)(lVar17 + 0x30);
        }
        return (ulong)(*(long *)(lVar17 + 0x28) == 0);
      }
      if ((int)param_1[4] != 0) {
        return 0;
      }
LAB_0012f2cc:
      *(undefined4 *)(lVar17 + 0x4c) = 0xffffffff;
      return 0;
    }
  }
  uVar7 = 0xfffffffe;
  pcVar9 = "stream error";
LAB_0012ea78:
  param_1[6] = (long)pcVar9;
  return uVar7;
}

