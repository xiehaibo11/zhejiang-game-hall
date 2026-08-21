
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00a687d4(char *param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  long lVar7;
  size_t __n;
  undefined4 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  char *pcVar18;
  int *piVar19;
  char *local_68;
  
  uVar13 = param_3 * param_2;
  piVar19 = (int *)**(undefined8 **)(*param_4 + 0x8d50);
  if (piVar19[3] == 0) {
    if ((uVar13 == 0) || (*piVar19 != 0)) {
      if (uVar13 == 0) {
        return 0;
      }
    }
    else {
      iVar4 = 1;
      if ((byte)(*param_1 - 0x30U) < 10) {
        iVar4 = 2;
      }
      *piVar19 = iVar4;
    }
    uVar14 = 0;
    do {
      lVar16 = *(long *)(piVar19 + 4);
      bVar2 = param_1[uVar14];
      if (lVar16 == 0) {
        lVar16 = FUN_00a686ec();
        *(long *)(piVar19 + 4) = lVar16;
        if (lVar16 == 0) {
          piVar19[3] = 0x1b;
          return uVar13;
        }
        lVar7 = (*(code *)PTR_malloc_017699f8)(0xa0);
        lVar16 = *(long *)(piVar19 + 4);
        *(long *)(lVar16 + 0x68) = lVar7;
        if (lVar7 == 0) {
          lVar16 = **(long **)(*param_4 + 0x8d50);
          if (*(long *)(lVar16 + 0x10) != 0) {
            FUN_00a68734(0);
          }
          *(undefined8 *)(lVar16 + 0x10) = 0;
          *(undefined4 *)(lVar16 + 0xc) = 0x1b;
          return uVar13;
        }
        *(undefined8 *)(lVar16 + 0x70) = 0xa0;
        piVar19[8] = 0;
        piVar19[9] = 0;
        piVar19[6] = 0;
      }
      else {
        lVar7 = *(long *)(lVar16 + 0x68);
      }
      lVar11 = *(long *)(lVar16 + 0x78);
      *(long *)(lVar16 + 0x78) = lVar11 + 1;
      uVar12 = (uint)bVar2;
      *(byte *)(lVar7 + lVar11) = bVar2;
      if (*(long *)(lVar16 + 0x70) - 1U <= *(ulong *)(lVar16 + 0x78)) {
        lVar7 = (*(code *)PTR_realloc_01769a08)
                          (*(undefined8 *)(lVar16 + 0x68),*(long *)(lVar16 + 0x70) + 0xa0);
        if (lVar7 == 0) {
          FUN_00a68734(0,*(undefined8 *)(piVar19 + 4));
          piVar19[4] = 0;
          piVar19[5] = 0;
          piVar19[3] = 0x1b;
          lVar16 = **(long **)(*param_4 + 0x8d50);
          if (*(long *)(lVar16 + 0x10) != 0) {
            FUN_00a68734(0);
          }
          *(undefined8 *)(lVar16 + 0x10) = 0;
          *(undefined4 *)(lVar16 + 0xc) = 0x1b;
          return uVar13;
        }
        *(long *)(lVar16 + 0x68) = lVar7;
        *(long *)(lVar16 + 0x70) = *(long *)(lVar16 + 0x70) + 0xa0;
      }
      if (*piVar19 == 2) {
        if ((uint)piVar19[1] < 4) {
          uVar17 = (uint)bVar2;
          switch(piVar19[1]) {
          case 0:
            uVar1 = piVar19[6] + 1;
            piVar19[6] = uVar1;
            if (uVar1 < 9) {
              if (uVar12 < 0x40) {
                pvVar6 = (void *)(1L << ((ulong)bVar2 & 0x3f) & 0x3ff200000000001);
                goto joined_r0x00a68924;
              }
            }
            else if ((uVar1 == 9) && (uVar17 == 0x20)) {
              uVar9 = 1;
LAB_00a6937c:
              *(undefined8 *)(piVar19 + 1) = uVar9;
              break;
            }
            goto switchD_00a68a7c_caseD_2e;
          case 1:
            iVar4 = piVar19[6];
            piVar19[6] = iVar4 + 1U;
            if (piVar19[2] == 1) {
              if (uVar17 != 0x20) {
                __n = 0xf;
                pcVar18 = "APM0123456789:";
                goto LAB_00a68d60;
              }
              *(long *)(piVar19 + 0x10) = *(long *)(piVar19 + 8);
              *(undefined1 *)
               (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
              piVar19[1] = 2;
              piVar19[2] = 0;
              piVar19[6] = 0;
            }
            else if ((piVar19[2] == 0) && (iVar4 = isspace(uVar17), iVar4 == 0)) goto LAB_00a69064;
            break;
          case 2:
            iVar4 = piVar19[2];
            if (iVar4 != 1) goto LAB_00a68c44;
            iVar4 = piVar19[6];
            piVar19[6] = iVar4 + 1U;
            if (uVar17 == 0x20) {
              *(undefined1 *)
               (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
              pcVar18 = (char *)(*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8));
              iVar4 = strcmp("<DIR>",pcVar18);
              if (iVar4 == 0) {
                *(undefined4 *)(lVar16 + 8) = 1;
                *(undefined8 *)(lVar16 + 0x28) = 0;
                lVar16 = *(long *)(piVar19 + 4);
              }
              else {
                lVar7 = strtol(pcVar18,&local_68,10);
                *(long *)(lVar16 + 0x28) = lVar7;
                if ((*local_68 != '\0') ||
                   ((lVar7 + 0x8000000000000001U < 2 && (piVar5 = (int *)__errno(), *piVar5 == 0x22)
                    ))) {
                  lVar16 = **(long **)(*param_4 + 0x8d50);
                  if (*(long *)(lVar16 + 0x10) != 0) {
                    FUN_00a68734(0);
                  }
                  *(long *)(lVar16 + 0x10) = 0;
                  goto LAB_00a69514;
                }
                lVar16 = *(long *)(piVar19 + 4);
                *(undefined4 *)(lVar16 + 8) = 0;
              }
              *(uint *)(lVar16 + 0x60) = *(uint *)(lVar16 + 0x60) | 0x40;
LAB_00a69374:
              uVar9 = 3;
              piVar19[6] = 0;
              goto LAB_00a6937c;
            }
            break;
          case 3:
            iVar4 = piVar19[2];
            if (iVar4 == 2) {
              if (uVar12 != 10) goto switchD_00a68a7c_caseD_2e;
              uVar9 = *(undefined8 *)(piVar19 + 8);
            }
            else {
              if (iVar4 != 1) goto LAB_00a68c44;
              piVar19[6] = piVar19[6] + 1;
              if (uVar12 != 10) {
                if (uVar12 == 0xd) {
                  piVar19[2] = 2;
                  *(undefined1 *)(*(long *)(lVar16 + 0x68) + *(long *)(lVar16 + 0x78) + -1) = 0;
                }
                break;
              }
              *(undefined1 *)(*(long *)(lVar16 + 0x68) + *(long *)(lVar16 + 0x78) + -1) = 0;
              uVar9 = *(undefined8 *)(piVar19 + 8);
            }
            *(undefined8 *)(piVar19 + 10) = uVar9;
            iVar4 = FUN_00a69578(*param_4,lVar16);
            if (iVar4 != 0) goto LAB_00a69520;
            piVar19[1] = 0;
            piVar19[2] = 0;
          }
        }
        goto switchD_00a688ec_default;
      }
      if (*piVar19 != 1) {
        return uVar13 + 1;
      }
      if (9 < (uint)piVar19[1]) goto switchD_00a688ec_default;
      uVar17 = (uint)bVar2;
      switch(piVar19[1]) {
      case 0:
        if (piVar19[2] == 1) {
          uVar17 = piVar19[6];
          piVar19[6] = uVar17 + 1;
          if (uVar12 == 10) {
            *(undefined1 *)(*(long *)(lVar16 + 0x68) + (ulong)uVar17) = 0;
            pcVar18 = *(char **)(lVar16 + 0x68);
            iVar4 = strncmp("total ",pcVar18,6);
            if (iVar4 == 0) {
              pbVar15 = (byte *)(pcVar18 + 5);
              pbVar3 = (byte *)(pcVar18 + 7);
              do {
                pbVar10 = pbVar3;
                pbVar15 = pbVar15 + 1;
                bVar2 = *pbVar15;
                iVar4 = isspace((uint)bVar2);
                pbVar3 = pbVar10 + 1;
              } while (iVar4 != 0);
              while (bVar2 - 0x30 < 10) {
                bVar2 = *pbVar10;
                pbVar10 = pbVar10 + 1;
              }
              if (bVar2 == 0) {
                piVar19[1] = 1;
                *(undefined8 *)(lVar16 + 0x78) = 0;
                break;
              }
            }
            goto switchD_00a68a7c_caseD_2e;
          }
          if (uVar12 == 0xd) {
            piVar19[6] = uVar17;
            *(long *)(lVar16 + 0x78) = *(long *)(lVar16 + 0x78) + -1;
          }
        }
        else if (piVar19[2] == 0) {
          if (uVar12 == 0x74) {
            piVar19[2] = 1;
            piVar19[6] = piVar19[6] + 1;
          }
          else {
            uVar14 = uVar14 - 1;
            piVar19[1] = 1;
            *(undefined8 *)(lVar16 + 0x78) = 0;
          }
        }
        break;
      case 1:
        uVar8 = 0;
        switch(uVar12) {
        case 0x2d:
          break;
        default:
          goto switchD_00a68a7c_caseD_2e;
        case 0x44:
          uVar8 = 7;
          break;
        case 0x62:
          uVar8 = 3;
          break;
        case 99:
          uVar8 = 4;
          break;
        case 100:
          uVar8 = 1;
          break;
        case 0x6c:
          uVar8 = 2;
          break;
        case 0x70:
          uVar8 = 5;
          break;
        case 0x73:
          uVar8 = 6;
        }
        *(undefined4 *)(lVar16 + 8) = uVar8;
        piVar19[1] = 2;
        piVar19[6] = 0;
        piVar19[8] = 1;
        piVar19[9] = 0;
        break;
      case 2:
        uVar17 = piVar19[6] + 1;
        piVar19[6] = uVar17;
        if (uVar17 < 10) {
          __n = 9;
          pcVar18 = "rwx-tTsS";
LAB_00a68d60:
          pvVar6 = memchr(pcVar18,(uint)bVar2,__n);
joined_r0x00a68924:
          if (pvVar6 == (void *)0x0) goto switchD_00a68a7c_caseD_2e;
        }
        else if (uVar17 == 10) {
          if (uVar12 == 0x20) {
            *(undefined1 *)(*(long *)(lVar16 + 0x68) + 10) = 0;
            lVar7 = *(long *)(piVar19 + 8);
            pcVar18 = (char *)(*(long *)(lVar16 + 0x68) + lVar7);
            uVar12 = 0;
            if (*pcVar18 != '-') {
              uVar12 = 0x1000000;
            }
            uVar17 = 0x100;
            if (*pcVar18 != 'r') {
              uVar17 = uVar12;
            }
            if (pcVar18[1] != '-') {
              if (pcVar18[1] == 'w') {
                uVar17 = uVar17 | 0x80;
              }
              else {
                uVar17 = uVar17 | 0x1000000;
              }
            }
            bVar2 = pcVar18[2];
            if (bVar2 < 0x73) {
              if (bVar2 != 0x2d) {
                if (bVar2 == 0x53) {
                  uVar17 = uVar17 | 0x800;
                }
                else {
LAB_00a69230:
                  uVar17 = uVar17 | 0x1000000;
                }
              }
            }
            else if (bVar2 == 0x73) {
              uVar17 = uVar17 | 0x840;
            }
            else {
              if (bVar2 != 0x78) goto LAB_00a69230;
              uVar17 = uVar17 | 0x40;
            }
            if (pcVar18[3] != '-') {
              if (pcVar18[3] == 'r') {
                uVar17 = uVar17 | 0x20;
              }
              else {
                uVar17 = uVar17 | 0x1000000;
              }
            }
            if (pcVar18[4] != '-') {
              if (pcVar18[4] == 'w') {
                    /* try { // try from 00a69268 to 00b692b7 has its CatchHandler @ 00a69268
                       catch() { ... } // from try @ 00a69268 with catch @ 00a69268
                       catch() { ... } // from try @ 00a69314 with catch @ 00a69268
                       catch() { ... } // from try @ 00a69358 with catch @ 00a69268 */
                uVar17 = uVar17 | 0x10;
              }
              else {
                uVar17 = uVar17 | 0x1000000;
              }
            }
            bVar2 = pcVar18[5];
            if (bVar2 < 0x73) {
              if (bVar2 != 0x2d) {
                if (bVar2 == 0x53) {
                  uVar17 = uVar17 | 0x400;
                }
                else {
LAB_00a692bc:
                  uVar17 = uVar17 | 0x1000000;
                }
              }
            }
            else if (bVar2 == 0x73) {
              uVar17 = uVar17 | 0x408;
                    /* try { // try from 00a692b8 to 00b69313 has its CatchHandler @ 00a69398 */
            }
            else {
              if (bVar2 != 0x78) goto LAB_00a692bc;
              uVar17 = uVar17 | 8;
            }
            if (pcVar18[6] != '-') {
              if (pcVar18[6] == 'r') {
                uVar17 = uVar17 | 4;
              }
              else {
                uVar17 = uVar17 | 0x1000000;
              }
            }
            if (pcVar18[7] != '-') {
              if (pcVar18[7] == 'w') {
                uVar17 = uVar17 | 2;
              }
              else {
                uVar17 = uVar17 | 0x1000000;
              }
            }
            bVar2 = pcVar18[8];
            if (bVar2 < 0x74) {
              uVar12 = uVar17;
              if (bVar2 != 0x2d) {
                    /* try { // try from 00a69314 to 00b69343 has its CatchHandler @ 00a69268 */
                if (bVar2 == 0x54) {
                  uVar12 = uVar17 | 0x200;
                }
                else {
LAB_00a69354:
                  uVar12 = uVar17 | 0x1000000;
                  uVar17 = uVar12;
                }
              }
            }
            else if (bVar2 == 0x74) {
                    /* try { // try from 00a69344 to 00b69357 has its CatchHandler @ 00a69398 */
              uVar12 = uVar17 | 0x201;
            }
            else {
              if (bVar2 != 0x78) goto LAB_00a69354;
              uVar12 = uVar17 | 1;
            }
            if (uVar17 >> 0x18 == 0) {
              lVar16 = *(long *)(piVar19 + 4);
              *(uint *)(lVar16 + 0x18) = uVar12;
              *(uint *)(lVar16 + 0x60) = *(uint *)(lVar16 + 0x60) | 8;
              *(long *)(piVar19 + 0x12) = lVar7;
              goto LAB_00a69374;
            }
          }
          goto switchD_00a68a7c_caseD_2e;
        }
        break;
      case 3:
        iVar4 = piVar19[2];
        if (iVar4 == 1) {
          iVar4 = piVar19[6];
          piVar19[6] = iVar4 + 1U;
          if (uVar12 == 0x20) {
            *(undefined1 *)
             (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
            lVar16 = strtol((char *)(*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8)),&local_68,10
                           );
            if ((1 < lVar16 + 0x8000000000000001U) && (*local_68 == '\0')) {
              lVar7 = *(long *)(piVar19 + 4);
              *(long *)(lVar7 + 0x30) = lVar16;
              *(uint *)(lVar7 + 0x60) = *(uint *)(lVar7 + 0x60) | 0x80;
            }
            uVar9 = 4;
LAB_00a68e14:
            piVar19[6] = 0;
            piVar19[8] = 0;
            piVar19[9] = 0;
            goto LAB_00a6937c;
          }
          goto LAB_00a68e20;
        }
LAB_00a68bdc:
        if ((iVar4 == 0) && (uVar17 != 0x20)) {
          if (uVar17 - 0x30 < 10) goto LAB_00a68c50;
          goto switchD_00a68a7c_caseD_2e;
        }
        break;
      case 4:
        iVar4 = piVar19[2];
        if (iVar4 == 1) {
          iVar4 = piVar19[6];
          piVar19[6] = iVar4 + 1U;
          if (uVar12 == 0x20) {
            *(undefined1 *)
             (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
            uVar9 = *(undefined8 *)(piVar19 + 8);
            piVar19[1] = 5;
            piVar19[2] = 0;
            piVar19[8] = 0;
            piVar19[9] = 0;
            *(undefined8 *)(piVar19 + 0xc) = uVar9;
            piVar19[6] = 0;
          }
        }
        else {
LAB_00a68c44:
          if (iVar4 == 0) goto switchD_00a68c88_caseD_0;
        }
        break;
      case 5:
        iVar4 = piVar19[2];
        if (iVar4 != 1) goto LAB_00a68c44;
        iVar4 = piVar19[6];
        piVar19[6] = iVar4 + 1U;
        if (uVar12 == 0x20) {
          *(undefined1 *)
           (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
          uVar9 = *(undefined8 *)(piVar19 + 8);
          piVar19[1] = 6;
          piVar19[2] = 0;
          piVar19[8] = 0;
          piVar19[9] = 0;
          *(undefined8 *)(piVar19 + 0xe) = uVar9;
          piVar19[6] = 0;
        }
        break;
      case 6:
        iVar4 = piVar19[2];
        if (iVar4 != 1) goto LAB_00a68bdc;
        iVar4 = piVar19[6];
        piVar19[6] = iVar4 + 1U;
        if (uVar12 == 0x20) {
          *(undefined1 *)
           (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
          lVar16 = strtol((char *)(*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8)),&local_68,10);
          if ((1 < lVar16 + 0x8000000000000001U) && (*local_68 == '\0')) {
            lVar7 = *(long *)(piVar19 + 4);
            *(long *)(lVar7 + 0x28) = lVar16;
            *(uint *)(lVar7 + 0x60) = *(uint *)(lVar7 + 0x60) | 0x40;
          }
          uVar9 = 7;
          goto LAB_00a68e14;
        }
LAB_00a68e20:
        if (9 < uVar12 - 0x30) goto switchD_00a68a7c_caseD_2e;
        break;
      case 7:
        switch(piVar19[2]) {
        case 0:
          if (uVar17 != 0x20) {
            iVar4 = isalnum((uint)bVar2);
            if (iVar4 == 0) goto switchD_00a68a7c_caseD_2e;
            goto LAB_00a68c50;
          }
          break;
        case 1:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 == 0x20) {
LAB_00a68ec8:
            piVar19[2] = 2;
          }
          else {
LAB_00a68f0c:
            iVar4 = isalnum((uint)bVar2);
            if ((uVar12 != 0x2e) && (iVar4 == 0)) goto switchD_00a68a7c_caseD_2e;
          }
          break;
        case 2:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 != 0x20) {
            iVar4 = isalnum((uint)bVar2);
            if (iVar4 != 0) goto LAB_00a69014;
            goto switchD_00a68a7c_caseD_2e;
          }
          break;
        case 3:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 != 0x20) goto LAB_00a68f0c;
LAB_00a69034:
          piVar19[2] = 4;
          break;
        case 4:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 != 0x20) {
            iVar4 = isalnum((uint)bVar2);
            if (iVar4 == 0) goto switchD_00a68a7c_caseD_2e;
            piVar19[2] = 5;
          }
          break;
        case 5:
          iVar4 = piVar19[6];
          piVar19[6] = iVar4 + 1U;
          if (uVar12 == 0x20) {
            *(undefined1 *)
             (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -1) = 0;
            *(undefined8 *)(piVar19 + 0x10) = *(undefined8 *)(piVar19 + 8);
            iVar4 = 8;
            if (*(int *)(lVar16 + 8) == 2) {
              iVar4 = 9;
            }
            piVar19[1] = iVar4;
            piVar19[2] = 0;
          }
          else {
            iVar4 = isalnum((uint)bVar2);
            if (((iVar4 == 0) && (uVar12 != 0x2e)) && (uVar12 != 0x3a))
            goto switchD_00a68a7c_caseD_2e;
          }
        }
        break;
      case 8:
        iVar4 = piVar19[2];
        if (iVar4 == 2) {
          if (uVar12 != 10) goto switchD_00a68a7c_caseD_2e;
          lVar11 = *(long *)(lVar16 + 0x68);
          lVar7 = *(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6];
        }
        else {
          if (iVar4 != 1) goto LAB_00a68c44;
          iVar4 = piVar19[6];
          piVar19[6] = iVar4 + 1U;
          if (uVar12 != 10) {
            if (uVar12 == 0xd) goto LAB_00a68ec8;
            break;
          }
          lVar11 = *(long *)(lVar16 + 0x68);
          lVar7 = *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U);
        }
        *(undefined1 *)(lVar11 + lVar7 + -1) = 0;
        *(undefined8 *)(piVar19 + 10) = *(undefined8 *)(piVar19 + 8);
        piVar19[1] = 1;
        iVar4 = FUN_00a69578(*param_4,lVar16);
        if (iVar4 != 0) goto LAB_00a69520;
        break;
      case 9:
        switch(piVar19[2]) {
        case 0:
switchD_00a68c88_caseD_0:
          if (uVar12 != 0x20) {
LAB_00a68c50:
            lVar16 = *(long *)(lVar16 + 0x78);
            piVar19[6] = 1;
            piVar19[2] = 1;
LAB_00a68c60:
            *(long *)(piVar19 + 8) = lVar16 + -1;
          }
          break;
        case 1:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 == 0x20) goto LAB_00a68ec8;
          if ((uVar12 == 10) || (uVar12 == 0xd)) goto switchD_00a68a7c_caseD_2e;
          break;
        case 2:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 != 0x2d) goto LAB_00a69054;
LAB_00a69014:
          piVar19[2] = 3;
          break;
        case 3:
          piVar19[6] = piVar19[6] + 1;
          if (uVar12 == 0x3e) goto LAB_00a69034;
LAB_00a69054:
          if ((uVar12 == 10) || (uVar12 == 0xd)) goto switchD_00a68a7c_caseD_2e;
LAB_00a69064:
          piVar19[2] = 1;
          break;
        case 4:
          iVar4 = piVar19[6];
          piVar19[6] = iVar4 + 1U;
          if (uVar12 != 0x20) goto LAB_00a69054;
          piVar19[2] = 5;
          *(undefined1 *)
           (*(long *)(lVar16 + 0x68) + *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U) + -4) = 0;
          uVar9 = *(undefined8 *)(piVar19 + 8);
          piVar19[6] = 0;
          piVar19[8] = 0;
          piVar19[9] = 0;
          *(undefined8 *)(piVar19 + 10) = uVar9;
          break;
        case 5:
          if ((uVar12 != 10) && (uVar12 != 0xd)) {
            piVar19[2] = 6;
            lVar16 = *(long *)(lVar16 + 0x78);
            piVar19[6] = 1;
            goto LAB_00a68c60;
          }
          goto switchD_00a68a7c_caseD_2e;
        case 6:
          iVar4 = piVar19[6];
          piVar19[6] = iVar4 + 1U;
          if (uVar12 == 10) {
            lVar11 = *(long *)(lVar16 + 0x68);
                    /* catch() { ... } // from try @ 00a692b8 with catch @ 00a69398
                       catch() { ... } // from try @ 00a69344 with catch @ 00a69398 */
            lVar7 = *(long *)(piVar19 + 8) + (ulong)(iVar4 + 1U);
LAB_00a6939c:
            *(undefined1 *)(lVar11 + lVar7 + -1) = 0;
            *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(piVar19 + 8);
            iVar4 = FUN_00a69578(*param_4,lVar16);
            if (iVar4 != 0) {
LAB_00a69520:
              lVar16 = **(long **)(*param_4 + 0x8d50);
              if (*(long *)(lVar16 + 0x10) != 0) {
                FUN_00a68734(0);
              }
              *(undefined8 *)(lVar16 + 0x10) = 0;
              *(int *)(lVar16 + 0xc) = iVar4;
              return uVar13;
            }
            piVar19[1] = 1;
          }
          else if (uVar12 == 0xd) {
            piVar19[2] = 7;
          }
          break;
        case 7:
          if (uVar12 == 10) {
            lVar11 = *(long *)(lVar16 + 0x68);
            lVar7 = *(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6];
            goto LAB_00a6939c;
          }
switchD_00a68a7c_caseD_2e:
          lVar16 = **(long **)(*param_4 + 0x8d50);
          if (*(long *)(lVar16 + 0x10) != 0) {
            FUN_00a68734(0);
          }
          *(undefined8 *)(lVar16 + 0x10) = 0;
LAB_00a69514:
          *(undefined4 *)(lVar16 + 0xc) = 0x57;
          return uVar13;
        }
      }
switchD_00a688ec_default:
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
  return uVar13;
}

