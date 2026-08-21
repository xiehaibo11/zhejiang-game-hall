
ulong FUN_00c0ad38(long *param_1,double *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 uVar9;
  int *piVar10;
  long lVar11;
  double *pdVar12;
  ulong uVar13;
  ulong uVar14;
  double *pdVar15;
  double dVar16;
  double dVar17;
  uint local_18;
  int iStack_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 uStack_4;
  
  uVar2 = *(int *)((long)param_1 + 0xac) + 1;
  *(uint *)((long)param_1 + 0xac) = uVar2;
  if (199 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00c064c4(param_1,0,0x863);
  }
  iVar3 = *(int *)((long)param_1 + 0x34);
  if (iVar3 == 0x10f) {
    FUN_00c079c0();
    FUN_00c0ad38(param_1,param_2,8);
    lVar11 = *param_1;
    uVar2 = *(uint *)((long)param_2 + 0xc);
    uVar7 = *(uint *)(param_2 + 2);
    *(uint *)(param_2 + 2) = uVar2;
    *(uint *)((long)param_2 + 0xc) = uVar7;
    FUN_00c08724(lVar11,uVar2);
    FUN_00c08724(lVar11,*(uint *)((long)param_2 + 0xc));
    FUN_00c08060(lVar11,param_2);
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 < 2) {
      *(uint *)(param_2 + 1) = 2;
    }
    else if (uVar2 < 6) {
      *(uint *)(param_2 + 1) = 1;
    }
    else {
      if (uVar2 != 10) {
        if (uVar2 != 0xb) {
          uVar7 = *(uint *)param_2;
          uVar5 = 0x13;
          goto LAB_00c0adc0;
        }
        uVar5 = 0x13;
        FUN_00c07f38(lVar11,1);
        iVar3 = *(int *)(lVar11 + 0x34);
        *(int *)(lVar11 + 0x34) = iVar3 + 1;
        *(char *)(*(long *)(lVar11 + 0x48) + (ulong)*(uint *)param_2 * 8 + 1) = (char)iVar3;
        iVar3 = *(int *)(lVar11 + 0x34);
        *(uint *)(param_2 + 1) = 0xc;
        *(uint *)param_2 = iVar3 - 1;
        goto LAB_00c0b760;
      }
      lVar8 = (ulong)(*(uint *)param_2 - 1) * 8;
      *(byte *)(*(long *)(lVar11 + 0x48) + lVar8) =
           (byte)*(undefined4 *)(*(long *)(lVar11 + 0x48) + lVar8) ^ 1;
    }
  }
  else {
    if (iVar3 == 0x2d) {
      FUN_00c079c0();
      FUN_00c0ad38(param_1,param_2,8);
      lVar11 = *param_1;
      if (*(uint *)((long)param_2 + 0xc) == *(uint *)(param_2 + 2)) {
        if (*(uint *)(param_2 + 1) == 5) {
          uVar13 = (ulong)*param_2 & 0x7fffffffffff;
          if (*(short *)(uVar13 + 10) == 0x10) {
            *(ulong *)(uVar13 + 0x18) = *(ulong *)(uVar13 + 0x18) ^ 0x8000000000000000;
          }
          else {
            *(long *)(uVar13 + 0x10) = -*(long *)(uVar13 + 0x10);
          }
          goto LAB_00c0ade0;
        }
        uVar5 = 0x14;
        if (*(uint *)(param_2 + 1) == 4) {
          dVar16 = *param_2;
          if ((int)((long)dVar16 >> 0x2f) == -0xe) {
            uVar2 = *(uint *)param_2;
            if (uVar2 == 0) goto LAB_00c0adac;
            if (uVar2 == -uVar2) {
              *param_2 = -(double)(int)uVar2;
            }
            else {
              *(uint *)param_2 = -uVar2;
              *(uint *)((long)param_2 + 4) = 0xfff90000;
            }
          }
          else {
            if (ABS(dVar16) == 0.0) goto LAB_00c0adac;
            *param_2 = -dVar16;
          }
          goto LAB_00c0ade0;
        }
      }
      else {
        uVar5 = 0x14;
      }
    }
    else {
      if (iVar3 != 0x23) {
        if (iVar3 == 0x10e) {
          *(uint *)(param_2 + 1) = 0;
          *(uint *)param_2 = 0;
          *(uint *)((long)param_2 + 0xc) = 0xffffffff;
          *(uint *)(param_2 + 2) = 0xffffffff;
        }
        else if (iVar3 < 0x10f) {
          if (iVar3 != 0x107) {
            if (iVar3 == 0x109) {
              FUN_00c079c0();
              FUN_00c0a994(param_1,param_2,0,(int)param_1[0xe]);
            }
            else {
              if (iVar3 != 0x7b) goto LAB_00c0b170;
              FUN_00c0ba44();
            }
            goto LAB_00c0ade0;
          }
          *(uint *)param_2 = 0;
          *(uint *)((long)param_2 + 0xc) = 0xffffffff;
          *(uint *)(param_2 + 1) = 1;
          *(uint *)(param_2 + 2) = 0xffffffff;
        }
        else if (iVar3 == 0x118) {
          lVar11 = *param_1;
          if ((*(byte *)(lVar11 + 0x58) >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00c07bc4(param_1,0xa8d);
          }
          FUN_00c07f38(lVar11,1);
          uVar2 = *(uint *)(lVar11 + 0x34);
          *(uint *)(lVar11 + 0x34) = uVar2 + 1;
          uVar7 = FUN_00c07f70(lVar11,uVar2 << 8 | 0x2000047 |
                                      (uint)*(byte *)(lVar11 + 0x59) << 0x10);
          *(uint *)((long)param_2 + 4) = uVar2;
          *(uint *)param_2 = uVar7;
          *(uint *)((long)param_2 + 0xc) = 0xffffffff;
          *(uint *)(param_2 + 2) = 0xffffffff;
          *(uint *)(param_2 + 1) = 0xd;
        }
        else if (iVar3 < 0x119) {
          if (iVar3 != 0x114) {
LAB_00c0b170:
            FUN_00c0c45c(param_1,param_2);
            goto LAB_00c0ade0;
          }
          *(uint *)param_2 = 0;
          *(uint *)((long)param_2 + 0xc) = 0xffffffff;
          *(uint *)(param_2 + 1) = 2;
          *(uint *)(param_2 + 2) = 0xffffffff;
        }
        else if (iVar3 == 0x11e) {
          lVar11 = param_1[2];
          *(uint *)param_2 = 0;
          dVar16 = (double)param_1[2];
          uVar2 = 5;
          if ((int)(lVar11 >> 0x2f) != -0xb) {
            uVar2 = 4;
          }
          *(uint *)((long)param_2 + 0xc) = 0xffffffff;
          *(uint *)(param_2 + 1) = uVar2;
          *(uint *)(param_2 + 2) = 0xffffffff;
          *param_2 = dVar16;
        }
        else {
          if (iVar3 != 0x120) goto LAB_00c0b170;
          *(uint *)((long)param_2 + 0xc) = 0xffffffff;
          *(uint *)(param_2 + 2) = 0xffffffff;
          *(uint *)(param_2 + 1) = 3;
          *param_2 = (double)(param_1[2] & 0x7fffffffffff);
        }
        FUN_00c079c0(param_1);
        goto LAB_00c0ade0;
      }
      FUN_00c079c0();
      uVar5 = 0x15;
      FUN_00c0ad38(param_1,param_2,8);
      lVar11 = *param_1;
    }
LAB_00c0adac:
    FUN_00c08cac(lVar11,param_2);
    uVar7 = *(uint *)param_2;
    uVar2 = *(uint *)(param_2 + 1);
LAB_00c0adc0:
    if (uVar2 == 0xc) {
LAB_00c0b760:
      FUN_00c07f1c(lVar11);
      uVar7 = *(uint *)param_2;
    }
    uVar2 = FUN_00c07f70(lVar11,uVar5 | uVar7 << 0x10);
    *(uint *)param_2 = uVar2;
    *(uint *)(param_2 + 1) = 0xb;
  }
LAB_00c0ade0:
  iVar3 = *(int *)((long)param_1 + 0x34);
  if (iVar3 == 0x5e) {
    uVar13 = 5;
  }
  else if (iVar3 < 0x5f) {
    if (iVar3 == 0x2d) {
      uVar13 = 1;
    }
    else if (iVar3 < 0x2e) {
      if (iVar3 == 0x2a) {
        uVar13 = 2;
      }
      else if (iVar3 == 0x2b) {
        uVar13 = 0;
      }
      else {
        if (iVar3 != 0x25) {
LAB_00c0ae14:
          uVar13 = 0xf;
          goto LAB_00c0ae18;
        }
        uVar13 = 4;
      }
    }
    else if (iVar3 == 0x3c) {
      uVar13 = 9;
    }
    else if (iVar3 == 0x3e) {
      uVar13 = 0xc;
    }
    else {
      if (iVar3 != 0x2f) goto LAB_00c0ae14;
      uVar13 = 3;
    }
  }
  else if (iVar3 == 0x119) {
    uVar13 = 8;
  }
  else if (iVar3 < 0x11a) {
    if (iVar3 == 0x110) {
      uVar13 = 0xe;
    }
    else if (iVar3 == 0x117) {
      uVar13 = 6;
    }
    else {
      if (iVar3 != 0x101) goto LAB_00c0ae14;
      uVar13 = 0xd;
    }
  }
  else if (iVar3 == 0x11b) {
    uVar13 = 0xb;
  }
  else if (iVar3 < 0x11b) {
    uVar13 = 10;
  }
  else {
    uVar13 = 7;
    if (iVar3 != 0x11c) goto LAB_00c0ae14;
  }
  if (param_3 < (byte)(&DAT_01410750)[uVar13 * 2]) {
    uVar14 = uVar13;
    do {
      FUN_00c079c0(param_1);
      lVar11 = *param_1;
      uVar2 = (uint)uVar14;
      if (uVar2 == 0xd) {
        FUN_00c09498(lVar11,param_2);
        uVar13 = FUN_00c0ad38(param_1,&local_18,2);
        lVar11 = *param_1;
        FUN_00c08060(lVar11,&local_18);
        uVar2 = *(uint *)(param_2 + 2);
        piVar10 = &local_8;
LAB_00c0b3c0:
        uVar13 = uVar13 & 0xffffffff;
        FUN_00c07bd8(lVar11,piVar10,uVar2);
        param_2[2] = (double)CONCAT44(uStack_4,local_8);
        *param_2 = (double)CONCAT44(iStack_14,local_18);
        param_2[1] = (double)CONCAT44(local_c,local_10);
      }
      else {
        if (uVar2 == 0xe) {
          FUN_00c08060(lVar11,param_2);
          uVar2 = *(uint *)(param_2 + 1);
          if (uVar2 < 2) {
            uVar2 = 0xffffffff;
          }
          else if (uVar2 == 10) {
            uVar2 = *(uint *)param_2;
          }
          else if (uVar2 - 2 < 3) {
            FUN_00c08290(lVar11,param_2,0xff);
            uVar2 = FUN_00c0899c(lVar11);
          }
          else {
            uVar2 = FUN_00c09288(lVar11,param_2,1);
          }
          FUN_00c07bd8(lVar11,(uint *)((long)param_2 + 0xc),uVar2);
          uVar2 = *(uint *)(param_2 + 2);
          *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)(lVar11 + 0x28);
          FUN_00c07bd8(lVar11,lVar11 + 0x30,uVar2);
          *(uint *)(param_2 + 2) = 0xffffffff;
          uVar13 = FUN_00c0ad38(param_1,&local_18,1);
          lVar11 = *param_1;
          FUN_00c08060(lVar11,&local_18);
          uVar2 = *(uint *)((long)param_2 + 0xc);
          piVar10 = &local_c;
          goto LAB_00c0b3c0;
        }
        if (uVar2 == 6) {
          FUN_00c08c34(lVar11,param_2);
          uVar13 = FUN_00c0ad38(param_1,&local_18,4);
          lVar11 = *param_1;
          uVar13 = uVar13 & 0xffffffff;
          FUN_00c08d80(lVar11,&local_18);
          if ((local_10 == 0xb) &&
             (lVar8 = *(long *)(lVar11 + 0x48) + (ulong)local_18 * 8,
             *(char *)(*(long *)(lVar11 + 0x48) + (ulong)local_18 * 8) == '&')) {
            uVar9 = (undefined1)*(uint *)param_2;
            if (*(uint *)(param_2 + 1) == 0xc) {
              FUN_00c07f1c(lVar11);
              uVar9 = (undefined1)*(uint *)param_2;
              lVar8 = *(long *)(lVar11 + 0x48) + (ulong)local_18 * 8;
            }
            *(undefined1 *)(lVar8 + 3) = uVar9;
            *(uint *)param_2 = local_18;
          }
          else {
            FUN_00c08c34(lVar11,&local_18);
            if (local_10 == 0xc) {
              FUN_00c07f1c(lVar11,local_18);
            }
            uVar2 = *(uint *)param_2;
            if (*(uint *)(param_2 + 1) == 0xc) {
              FUN_00c07f1c(lVar11);
              uVar2 = *(uint *)param_2;
            }
            uVar2 = FUN_00c07f70(lVar11,local_18 << 0x10 | 0x26 | uVar2 << 0x18);
            *(uint *)param_2 = uVar2;
          }
          *(uint *)(param_2 + 1) = 0xb;
          goto LAB_00c0aff0;
        }
        if (uVar2 - 7 < 2) {
          if ((4 < *(uint *)(param_2 + 1)) ||
             (*(uint *)((long)param_2 + 0xc) != *(uint *)(param_2 + 2))) {
            FUN_00c08cac(lVar11,param_2);
          }
          uVar13 = FUN_00c0ad38(param_1,&local_18,(&UNK_01410751)[uVar14 * 2]);
          lVar11 = *param_1;
          uVar13 = uVar13 & 0xffffffff;
          FUN_00c08d80(lVar11,param_2);
        }
        else {
          if ((*(uint *)(param_2 + 1) != 4) ||
             (*(uint *)((long)param_2 + 0xc) != *(uint *)(param_2 + 2))) {
            FUN_00c08cac(lVar11,param_2);
          }
          uVar13 = FUN_00c0ad38(param_1,&local_18,(&UNK_01410751)[uVar14 * 2]);
          lVar11 = *param_1;
          uVar13 = uVar13 & 0xffffffff;
          if (uVar2 < 6) {
            if ((((*(uint *)(param_2 + 1) == 4) &&
                 (*(uint *)((long)param_2 + 0xc) == *(uint *)(param_2 + 2))) && (local_10 == 4)) &&
               (local_c == local_8)) {
              if ((int)((long)*param_2 >> 0x2f) == -0xe) {
                dVar16 = (double)(int)*(uint *)param_2;
              }
              else {
                dVar16 = *param_2;
              }
              if (iStack_14 >> 0xf == -0xe) {
                dVar17 = (double)(int)local_18;
              }
              else {
                dVar17 = (double)CONCAT44(iStack_14,local_18);
              }
              dVar16 = (double)FUN_00c1e3cc(dVar16,dVar17,uVar14);
              if ((!NAN(dVar16)) && (dVar16 != -0.0)) {
                if (dVar16 == (double)(int)dVar16) {
                  *(int *)param_2 = (int)dVar16;
                  *(uint *)((long)param_2 + 4) = 0xfff90000;
                }
                else {
                  *param_2 = dVar16;
                }
                goto LAB_00c0aff0;
              }
            }
            if (uVar2 == 5) {
              uVar7 = 0x25;
              uVar2 = FUN_00c08cac(lVar11,&local_18);
              uVar5 = FUN_00c08cac(lVar11,param_2);
LAB_00c0b118:
              uVar1 = *(uint *)(param_2 + 1);
              uVar6 = uVar5;
            }
            else {
              uVar7 = uVar2 + 0x20;
              FUN_00c08d80(lVar11,&local_18);
              if ((local_10 == 4) && (uVar5 = FUN_00c07b70(lVar11,&local_18), uVar5 < 0x100)) {
                uVar7 = uVar2 + 0x16;
              }
              else {
                uVar5 = FUN_00c08cac(lVar11,&local_18);
              }
              FUN_00c08d80(lVar11,param_2);
              if (((*(uint *)(param_2 + 1) == 4) && (local_10 != 4)) &&
                 (uVar2 = FUN_00c07b70(lVar11,param_2), uVar2 < 0x100)) {
                uVar7 = uVar7 - 5;
                goto LAB_00c0b118;
              }
              uVar6 = FUN_00c08cac(lVar11,param_2);
              uVar1 = *(uint *)(param_2 + 1);
              uVar2 = uVar5;
            }
            if ((uVar1 == 0xc) && (*(uint *)(lVar11 + 0x38) <= *(uint *)param_2)) {
              *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + -1;
            }
            if ((local_10 == 0xc) && (*(uint *)(lVar11 + 0x38) <= local_18)) {
              *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + -1;
            }
            uVar2 = FUN_00c07f70(lVar11,uVar2 << 0x10 | uVar6 << 0x18 | uVar7);
            *(uint *)param_2 = uVar2;
            *(uint *)(param_2 + 1) = 0xb;
            goto LAB_00c0aff0;
          }
          FUN_00c08d80(lVar11,param_2);
        }
        pdVar12 = param_2;
        pdVar15 = (double *)&local_18;
        if (1 < uVar2 - 7) {
          uVar2 = uVar2 - 9;
          if ((uVar2 & 1) != 0) {
            uVar2 = uVar2 ^ 3;
            FUN_00c08d80(lVar11,&local_18);
            pdVar12 = (double *)&local_18;
            pdVar15 = param_2;
          }
          iVar3 = FUN_00c08cac(lVar11,pdVar15);
          iVar4 = FUN_00c08cac(lVar11,pdVar12);
          uVar7 = *(uint *)(pdVar15 + 1);
          uVar2 = iVar3 << 0x10 | iVar4 << 8 | uVar2;
          goto LAB_00c0afbc;
        }
        uVar5 = 4;
        if (uVar2 != 8) {
          uVar5 = 5;
        }
        if (*(uint *)(param_2 + 1) < 5) {
          pdVar12 = (double *)&local_18;
          pdVar15 = param_2;
        }
        iVar3 = FUN_00c08cac(lVar11,pdVar12);
        FUN_00c08d80(lVar11,pdVar15);
        uVar7 = *(uint *)(pdVar15 + 1);
        switch(uVar7) {
        case 0:
        case 1:
        case 2:
          uVar2 = uVar5 + 6 | uVar7 << 0x10 | iVar3 << 8;
          if (*(uint *)(pdVar12 + 1) == 0xc) goto LAB_00c0b324;
          goto LAB_00c0afd0;
        case 3:
          iVar4 = FUN_00c07b10(lVar11,*pdVar15,0xfffffffb);
          uVar2 = uVar5 + 2 | iVar3 << 8 | iVar4 << 0x10;
          uVar7 = *(uint *)(pdVar15 + 1);
          break;
        case 4:
          iVar4 = FUN_00c07b70(lVar11,pdVar15);
          uVar7 = *(uint *)(pdVar15 + 1);
          uVar2 = uVar5 + 4 | iVar3 << 8 | iVar4 << 0x10;
          break;
        default:
          iVar4 = FUN_00c08cac(lVar11,pdVar15);
          uVar2 = uVar5 | iVar3 << 8 | iVar4 << 0x10;
          uVar5 = *(uint *)(pdVar12 + 1);
          uVar7 = *(uint *)(pdVar15 + 1);
          goto joined_r0x00c0b320;
        }
LAB_00c0afbc:
        uVar5 = *(uint *)(pdVar12 + 1);
joined_r0x00c0b320:
        if (uVar5 == 0xc) {
LAB_00c0b324:
          if (*(uint *)(lVar11 + 0x38) <= *(uint *)pdVar12) {
            *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + -1;
          }
        }
        if ((uVar7 == 0xc) && (*(uint *)(lVar11 + 0x38) <= *(uint *)pdVar15)) {
          *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + -1;
        }
LAB_00c0afd0:
        FUN_00c07f70(lVar11,uVar2);
        uVar2 = FUN_00c0899c(lVar11);
        *(uint *)param_2 = uVar2;
        *(uint *)(param_2 + 1) = 10;
      }
LAB_00c0aff0:
    } while (((int)uVar13 != 0xf) && (uVar14 = uVar13, param_3 < (byte)(&DAT_01410750)[uVar13 * 2]))
    ;
  }
LAB_00c0ae18:
  *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + -1;
  return uVar13;
}

