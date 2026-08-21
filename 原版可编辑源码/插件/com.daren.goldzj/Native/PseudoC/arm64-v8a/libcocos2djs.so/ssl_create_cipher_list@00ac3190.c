
/* WARNING: Type propagation algorithm not settling */

long ssl_create_cipher_list(long param_1,long *param_2,long *param_3,char *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *ptr;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  int iVar23;
  long *local_70;
  long *local_68;
  
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (param_4 == (char *)0x0) {
    return 0;
  }
  iVar6 = strncmp(param_4,"SUITEB128ONLY",0xd);
  if (iVar6 == 0) {
    bVar5 = false;
    uVar12 = 0x10000;
LAB_00ac3278:
    *(uint *)(param_5 + 0x1c) = *(uint *)(param_5 + 0x1c) & 0xfffcffff | uVar12;
LAB_00ac3288:
    if ((*(byte *)(*(long *)(param_1 + 0xc0) + 0x68) >> 4 & 1) == 0) {
      iVar6 = 0x14b;
      iVar8 = 0x9e;
      iVar23 = 0x4f1;
      goto LAB_00ac34d0;
    }
    if (uVar12 == 0x10000) {
      param_4 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar12 == 0x20000) {
      param_4 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else if (uVar12 == 0x30000) {
      param_4 = "ECDHE-ECDSA-AES256-GCM-SHA384";
      if (!bVar5) {
        param_4 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
      }
    }
  }
  else {
    iVar6 = strncmp(param_4,"SUITEB128C2",0xb);
    if (iVar6 == 0) {
      bVar5 = true;
      uVar12 = 0x30000;
      goto LAB_00ac3278;
    }
    iVar6 = strncmp(param_4,"SUITEB128",9);
    if (iVar6 == 0) {
      bVar5 = false;
      uVar12 = 0x30000;
      goto LAB_00ac3278;
    }
    iVar6 = strncmp(param_4,"SUITEB192",9);
    if (iVar6 == 0) {
      bVar5 = false;
      uVar12 = 0x20000;
      goto LAB_00ac3278;
    }
    uVar12 = *(uint *)(param_5 + 0x1c) & 0x30000;
    if (uVar12 != 0) {
      bVar5 = false;
      goto LAB_00ac3288;
    }
  }
  uVar4 = DAT_01d38ec8._4_4_;
  uVar3 = (uint)DAT_01d38ec8;
  uVar2 = DAT_01d38ec4;
  uVar12 = DAT_01d38ec0;
  iVar6 = (**(code **)(param_1 + 0xa8))();
  ptr = CRYPTO_malloc(iVar6 << 5,"ssl/ssl_ciph.c",0x533);
  if (ptr == (long *)0x0) {
    iVar6 = 0xa6;
    iVar8 = 0x41;
    iVar23 = 0x535;
LAB_00ac34d0:
    ERR_put_error(0x14,iVar6,iVar8,"ssl/ssl_ciph.c",iVar23);
    return 0;
  }
  if (iVar6 < 1) {
LAB_00ac34a8:
    local_68 = (long *)0x0;
    local_70 = (long *)0x0;
  }
  else {
    iVar23 = 0;
    iVar8 = 0;
    do {
      piVar9 = (int *)(**(code **)(param_1 + 0xb0))(iVar23);
      if ((((piVar9 != (int *)0x0) && (*piVar9 != 0)) &&
          ((iVar7 = FIPS_mode(), iVar7 == 0 || ((*(byte *)(piVar9 + 0xd) >> 4 & 1) == 0)))) &&
         (((((piVar9[5] & uVar3) == 0 && ((piVar9[6] & uVar4) == 0)) && ((piVar9[7] & uVar12) == 0))
          && ((piVar9[8] & uVar2) == 0)))) {
        if ((*(byte *)(*(long *)(param_1 + 0xc0) + 0x68) >> 3 & 1) == 0) {
          iVar7 = piVar9[9];
        }
        else {
          iVar7 = piVar9[0xb];
        }
        if (iVar7 != 0) {
          lVar15 = (long)iVar8;
          iVar8 = iVar8 + 1;
          plVar21 = ptr + lVar15 * 4;
          *plVar21 = (long)piVar9;
          *(undefined4 *)(plVar21 + 1) = 0;
          plVar21[2] = 0;
          plVar21[3] = 0;
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar6 != iVar23);
    if (iVar8 < 1) goto LAB_00ac34a8;
    uVar11 = 0;
    ptr[3] = 0;
    if (iVar8 != 1) {
      ptr[2] = (long)(ptr + 4);
      uVar11 = (long)iVar8 - 1;
      if (2 < iVar8) {
        uVar13 = (uVar11 & 0xffffffff) - 1;
        if (uVar13 < 2) {
LAB_00ac34d8:
          lVar10 = 1;
        }
        else {
          uVar1 = ~(uint)uVar11 & 1;
          lVar15 = uVar13 - uVar1;
          if (lVar15 == 0) goto LAB_00ac34d8;
          lVar10 = lVar15 + 1;
          plVar21 = ptr + 0xc;
          do {
            lVar15 = lVar15 + -2;
            plVar21[-6] = (long)(plVar21 + -4);
            plVar21[-5] = (long)(plVar21 + -0xc);
            plVar21[-2] = (long)plVar21;
            plVar21[-1] = (long)(plVar21 + -8);
            plVar21 = plVar21 + 8;
          } while (lVar15 != 0);
          if (uVar1 == 0) goto LAB_00ac34fc;
        }
        lVar15 = (uVar11 & 0xffffffff) - lVar10;
        plVar21 = ptr + lVar10 * 4;
        do {
          lVar15 = lVar15 + -1;
          plVar21[2] = (long)(plVar21 + 4);
          plVar21[3] = (long)(plVar21 + -4);
          plVar21 = plVar21 + 4;
        } while (lVar15 != 0);
      }
LAB_00ac34fc:
      ptr[uVar11 * 4 + 3] = (long)(ptr + (long)iVar8 * 4 + -8);
    }
    plVar21 = ptr + uVar11 * 4;
    plVar21[2] = 0;
    plVar18 = plVar21;
    plVar20 = ptr;
    plVar19 = ptr;
    plVar16 = plVar21;
    do {
      if (plVar16 == (long *)0x0) break;
      plVar16 = (long *)plVar20[2];
      plVar14 = plVar19;
      if ((((*(byte *)(*plVar20 + 0x14) >> 2 & 1) != 0) &&
          ((*(byte *)(*plVar20 + 0x18) >> 3 & 1) != 0)) && ((int)plVar20[1] == 0)) {
        if (plVar20 != plVar18) {
          lVar15 = plVar20[3];
          plVar14 = plVar16;
          if (plVar20 != plVar19) {
            plVar14 = plVar19;
          }
          plVar19 = plVar16;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x10) = plVar16;
            plVar19 = (long *)plVar20[2];
          }
          if (plVar19 != (long *)0x0) {
            plVar19[3] = lVar15;
          }
          plVar18[2] = (long)plVar20;
          plVar20[2] = 0;
          plVar20[3] = (long)plVar18;
          plVar18 = plVar20;
        }
        *(undefined4 *)(plVar20 + 1) = 1;
      }
      bVar5 = plVar20 != plVar21;
      plVar19 = plVar14;
      plVar20 = plVar16;
    } while (bVar5);
    plVar21 = plVar18;
    plVar20 = plVar19;
    plVar16 = plVar18;
    if (plVar19 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar19[2];
        plVar14 = plVar20;
        if (((*(byte *)(*plVar19 + 0x14) >> 2 & 1) != 0) && ((int)plVar19[1] == 0)) {
          if (plVar19 != plVar21) {
            lVar15 = plVar19[3];
            plVar14 = plVar16;
            if (plVar19 != plVar20) {
              plVar14 = plVar20;
            }
            plVar20 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x10) = plVar16;
              plVar20 = (long *)plVar19[2];
            }
            if (plVar20 != (long *)0x0) {
              plVar20[3] = lVar15;
            }
            plVar21[2] = (long)plVar19;
            plVar19[2] = 0;
            plVar19[3] = (long)plVar21;
            plVar21 = plVar19;
          }
          *(undefined4 *)(plVar19 + 1) = 1;
        }
        bVar5 = plVar19 != plVar18;
        plVar20 = plVar14;
        plVar19 = plVar16;
      } while (bVar5);
      plVar19 = plVar20;
      plVar18 = plVar21;
      if (plVar20 != (long *)0x0) {
        do {
          if (plVar21 == (long *)0x0) break;
          plVar14 = (long *)plVar21[3];
          plVar16 = plVar18;
          if (((*(byte *)(*plVar21 + 0x14) >> 2 & 1) != 0) && ((int)plVar21[1] != 0)) {
            if (plVar21 != plVar19) {
              lVar15 = plVar21[2];
              plVar16 = plVar14;
              if (plVar21 != plVar18) {
                plVar16 = plVar18;
              }
              plVar18 = plVar14;
              if (lVar15 != 0) {
                *(long **)(lVar15 + 0x18) = plVar14;
                plVar18 = (long *)plVar21[3];
              }
              if (plVar18 != (long *)0x0) {
                plVar18[2] = lVar15;
              }
              plVar19[3] = (long)plVar21;
              plVar21[2] = (long)plVar19;
              plVar21[3] = 0;
              plVar19 = plVar21;
            }
            *(undefined4 *)(plVar21 + 1) = 0;
          }
          bVar5 = plVar21 != plVar20;
          plVar21 = plVar14;
          plVar18 = plVar16;
        } while (bVar5);
      }
    }
    plVar21 = plVar19;
    plVar20 = plVar18;
    plVar16 = plVar18;
    if (plVar19 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar19[2];
        plVar14 = plVar21;
        if (((*(byte *)(*plVar19 + 0x1d) & 0x30) != 0) && ((int)plVar19[1] == 0)) {
          if (plVar19 != plVar20) {
            lVar15 = plVar19[3];
            plVar14 = plVar16;
            if (plVar19 != plVar21) {
              plVar14 = plVar21;
            }
            plVar21 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x10) = plVar16;
              plVar21 = (long *)plVar19[2];
            }
            if (plVar21 != (long *)0x0) {
              plVar21[3] = lVar15;
            }
            plVar20[2] = (long)plVar19;
            plVar19[2] = 0;
            plVar19[3] = (long)plVar20;
            plVar20 = plVar19;
          }
          *(undefined4 *)(plVar19 + 1) = 1;
        }
        bVar5 = plVar19 != plVar18;
        plVar19 = plVar16;
        plVar21 = plVar14;
      } while (bVar5);
    }
    plVar18 = plVar21;
    plVar19 = plVar20;
    plVar16 = plVar20;
    if (plVar21 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar21[2];
        plVar14 = plVar18;
        if (((*(byte *)(*plVar21 + 0x1e) >> 3 & 1) != 0) && ((int)plVar21[1] == 0)) {
          if (plVar21 != plVar19) {
            lVar15 = plVar21[3];
            plVar14 = plVar16;
            if (plVar21 != plVar18) {
              plVar14 = plVar18;
            }
            plVar18 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x10) = plVar16;
              plVar18 = (long *)plVar21[2];
            }
            if (plVar18 != (long *)0x0) {
              plVar18[3] = lVar15;
            }
            plVar19[2] = (long)plVar21;
                    /* catch() { ... } // from try @ 00ac3910 with catch @ 00ac380c
                       catch() { ... } // from try @ 00ac3b78 with catch @ 00ac380c
                       catch() { ... } // from try @ 00ac3c68 with catch @ 00ac380c */
            plVar21[2] = 0;
            plVar21[3] = (long)plVar19;
            plVar19 = plVar21;
          }
          *(undefined4 *)(plVar21 + 1) = 1;
        }
        bVar5 = plVar21 != plVar20;
        plVar21 = plVar16;
        plVar18 = plVar14;
      } while (bVar5);
    }
    plVar21 = plVar18;
    plVar20 = plVar19;
    plVar16 = plVar19;
    if (plVar18 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar18[2];
        plVar14 = plVar21;
        if (((*(uint *)(*plVar18 + 0x1c) & 0x3c0c0) != 0) && ((int)plVar18[1] == 0)) {
          if (plVar18 != plVar20) {
            lVar15 = plVar18[3];
            plVar14 = plVar16;
            if (plVar18 != plVar21) {
              plVar14 = plVar21;
            }
            plVar21 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x10) = plVar16;
              plVar21 = (long *)plVar18[2];
            }
            if (plVar21 != (long *)0x0) {
              plVar21[3] = lVar15;
            }
            plVar20[2] = (long)plVar18;
            plVar18[2] = 0;
            plVar18[3] = (long)plVar20;
            plVar20 = plVar18;
          }
          *(undefined4 *)(plVar18 + 1) = 1;
        }
        bVar5 = plVar18 != plVar19;
        plVar18 = plVar16;
        plVar21 = plVar14;
                    /* try { // try from 00ac38ac to 00bc38cf has its CatchHandler @ 00ac3cd8 */
      } while (bVar5);
    }
    plVar18 = plVar21;
    plVar19 = plVar20;
    plVar16 = plVar20;
    if (plVar21 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar21[2];
        plVar14 = plVar18;
        if ((int)plVar21[1] == 0) {
          if (plVar21 != plVar19) {
            lVar15 = plVar21[3];
                    /* try { // try from 00ac38f0 to 00bc38fb has its CatchHandler @ 00ac3c94 */
            plVar14 = plVar16;
            if (plVar21 != plVar18) {
              plVar14 = plVar18;
            }
            plVar18 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x10) = plVar16;
              plVar18 = (long *)plVar21[2];
            }
                    /* try { // try from 00ac3908 to 00bc390f has its CatchHandler @ 00ac3c6c */
            if (plVar18 != (long *)0x0) {
              plVar18[3] = lVar15;
            }
                    /* try { // try from 00ac3910 to 00bc3b13 has its CatchHandler @ 00ac380c */
            plVar19[2] = (long)plVar21;
            plVar21[2] = 0;
            plVar21[3] = (long)plVar19;
            plVar19 = plVar21;
          }
          *(undefined4 *)(plVar21 + 1) = 1;
        }
        bVar5 = plVar21 != plVar20;
        plVar21 = plVar16;
        plVar18 = plVar14;
      } while (bVar5);
    }
    plVar21 = plVar18;
    plVar20 = plVar19;
    plVar16 = plVar19;
    if (plVar18 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar18[2];
        plVar14 = plVar21;
        if ((((*(byte *)(*plVar18 + 0x20) & 1) != 0) && ((int)plVar18[1] != 0)) &&
           (plVar18 != plVar20)) {
          lVar15 = plVar18[3];
          plVar14 = plVar16;
          if (plVar18 != plVar21) {
            plVar14 = plVar21;
          }
          plVar21 = plVar16;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x10) = plVar16;
            plVar21 = (long *)plVar18[2];
          }
          if (plVar21 != (long *)0x0) {
            plVar21[3] = lVar15;
          }
          plVar20[2] = (long)plVar18;
          plVar18[2] = 0;
          plVar18[3] = (long)plVar20;
          plVar20 = plVar18;
        }
        bVar5 = plVar18 != plVar19;
        plVar18 = plVar16;
        plVar21 = plVar14;
      } while (bVar5);
    }
    plVar18 = plVar21;
    plVar19 = plVar20;
    plVar16 = plVar20;
    if (plVar21 != (long *)0x0) {
      do {
        if (plVar16 == (long *)0x0) break;
        plVar16 = (long *)plVar21[2];
        plVar14 = plVar18;
        if ((((*(byte *)(*plVar21 + 0x18) >> 2 & 1) != 0) && ((int)plVar21[1] != 0)) &&
           (plVar21 != plVar19)) {
          lVar15 = plVar21[3];
          plVar14 = plVar16;
          if (plVar21 != plVar18) {
            plVar14 = plVar18;
          }
          plVar18 = plVar16;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x10) = plVar16;
            plVar18 = (long *)plVar21[2];
          }
          if (plVar18 != (long *)0x0) {
            plVar18[3] = lVar15;
          }
          plVar19[2] = (long)plVar21;
          plVar21[2] = 0;
          plVar21[3] = (long)plVar19;
          plVar19 = plVar21;
        }
        bVar5 = plVar21 != plVar20;
        plVar21 = plVar16;
        plVar18 = plVar14;
      } while (bVar5);
    }
    local_68 = plVar18;
    plVar21 = plVar19;
    plVar20 = plVar19;
    if (plVar18 != (long *)0x0) {
      do {
        if (plVar20 == (long *)0x0) break;
        plVar20 = (long *)plVar18[2];
        plVar16 = local_68;
        if ((((*(byte *)(*plVar18 + 0x14) & 1) != 0) && ((int)plVar18[1] != 0)) &&
           (plVar18 != plVar21)) {
          lVar15 = plVar18[3];
          plVar16 = plVar20;
          if (plVar18 != local_68) {
            plVar16 = local_68;
          }
          plVar14 = plVar20;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x10) = plVar20;
            plVar14 = (long *)plVar18[2];
          }
          if (plVar14 != (long *)0x0) {
            plVar14[3] = lVar15;
          }
          plVar21[2] = (long)plVar18;
          plVar18[2] = 0;
          plVar18[3] = (long)plVar21;
          plVar21 = plVar18;
        }
        bVar5 = plVar18 != plVar19;
        plVar18 = plVar20;
        local_68 = plVar16;
      } while (bVar5);
    }
    plVar18 = plVar21;
    plVar20 = local_68;
    plVar19 = plVar21;
    if (local_68 != (long *)0x0) {
      do {
        if (plVar19 == (long *)0x0) break;
        plVar19 = (long *)plVar20[2];
        plVar16 = local_68;
        if ((((*(byte *)(*plVar20 + 0x14) >> 3 & 1) != 0) && ((int)plVar20[1] != 0)) &&
           (plVar20 != plVar18)) {
          lVar15 = plVar20[3];
          plVar16 = plVar19;
          if (plVar20 != local_68) {
            plVar16 = local_68;
          }
          plVar14 = plVar19;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x10) = plVar19;
            plVar14 = (long *)plVar20[2];
          }
          if (plVar14 != (long *)0x0) {
            plVar14[3] = lVar15;
          }
          plVar18[2] = (long)plVar20;
          plVar20[2] = 0;
          plVar20[3] = (long)plVar18;
          plVar18 = plVar20;
        }
        bVar5 = plVar20 != plVar21;
        local_68 = plVar16;
        plVar20 = plVar19;
                    /* try { // try from 00ac3b14 to 00bc3b37 has its CatchHandler @ 00ac3cd4 */
      } while (bVar5);
    }
    local_70 = plVar18;
    plVar21 = local_68;
    plVar20 = plVar18;
    if (local_68 != (long *)0x0) {
      do {
        if (plVar20 == (long *)0x0) break;
        plVar20 = (long *)plVar21[2];
        plVar19 = local_68;
                    /* try { // try from 00ac3b58 to 00bc3b63 has its CatchHandler @ 00ac3c70 */
        if ((((*(byte *)(*plVar21 + 0x1c) >> 2 & 1) != 0) && ((int)plVar21[1] != 0)) &&
           (plVar21 != local_70)) {
          lVar15 = plVar21[3];
          plVar19 = plVar20;
          if (plVar21 != local_68) {
            plVar19 = local_68;
          }
          plVar16 = plVar20;
          if (lVar15 != 0) {
                    /* try { // try from 00ac3b70 to 00bc3b77 has its CatchHandler @ 00ac3c68 */
            *(long **)(lVar15 + 0x10) = plVar20;
            plVar16 = (long *)plVar21[2];
          }
                    /* try { // try from 00ac3b78 to 00bc3c5f has its CatchHandler @ 00ac380c */
          if (plVar16 != (long *)0x0) {
            plVar16[3] = lVar15;
          }
          local_70[2] = (long)plVar21;
          plVar21[2] = 0;
          plVar21[3] = (long)local_70;
          local_70 = plVar21;
        }
        bVar5 = plVar21 != plVar18;
        local_68 = plVar19;
        plVar21 = plVar20;
      } while (bVar5);
    }
  }
  iVar8 = FUN_00ac4410(&local_68,&local_70);
  if (iVar8 != 0) {
    plVar18 = local_68;
    plVar21 = local_70;
    if (local_68 != (long *)0x0) {
      do {
        if (plVar21 == (long *)0x0) break;
        plVar19 = (long *)plVar21[3];
        plVar20 = local_70;
        if (((*(int *)(*plVar21 + 0x24) == 0x303) && (plVar21 != plVar18)) && ((int)plVar21[1] != 0)
           ) {
          lVar15 = plVar21[2];
          plVar20 = plVar19;
          if (plVar21 != local_70) {
            plVar20 = local_70;
          }
          plVar16 = plVar19;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x18) = plVar19;
            plVar16 = (long *)plVar21[3];
          }
          if (plVar16 != (long *)0x0) {
            plVar16[2] = lVar15;
          }
          plVar18[3] = (long)plVar21;
          plVar21[2] = (long)plVar18;
          plVar21[3] = 0;
          plVar18 = plVar21;
        }
        bVar5 = plVar21 != local_68;
        local_70 = plVar20;
        plVar21 = plVar19;
      } while (bVar5);
    }
    plVar21 = local_70;
    plVar20 = plVar18;
    if (plVar18 != (long *)0x0) {
      do {
        if (local_70 == (long *)0x0) break;
                    /* try { // try from 00ac3c60 to 00bc3c63 has its CatchHandler @ 00ac3c6c */
                    /* try { // try from 00ac3c64 to 00bc3c67 has its CatchHandler @ 00ac3c68 */
                    /* catch() { ... } // from try @ 00ac3b70 with catch @ 00ac3c68
                       catch() { ... } // from try @ 00ac3c64 with catch @ 00ac3c68
                       try { // try from 00ac3c68 to 00bc3ceb has its CatchHandler @ 00ac380c */
        plVar16 = (long *)local_70[3];
                    /* catch() { ... } // from try @ 00ac3908 with catch @ 00ac3c6c
                       catch() { ... } // from try @ 00ac3c60 with catch @ 00ac3c6c */
        plVar19 = plVar21;
                    /* catch() { ... } // from try @ 00ac3b58 with catch @ 00ac3c70 */
        if ((((*(byte *)(*local_70 + 0x20) >> 6 & 1) != 0) && (local_70 != plVar20)) &&
           ((int)local_70[1] != 0)) {
          lVar15 = local_70[2];
          plVar19 = plVar16;
          if (local_70 != plVar21) {
            plVar19 = plVar21;
          }
          plVar21 = plVar16;
          if (lVar15 != 0) {
                    /* catch() { ... } // from try @ 00ac38f0 with catch @ 00ac3c94 */
            *(long **)(lVar15 + 0x18) = plVar16;
            plVar21 = (long *)local_70[3];
          }
          if (plVar21 != (long *)0x0) {
            plVar21[2] = lVar15;
          }
          plVar20[3] = (long)local_70;
          local_70[2] = (long)plVar20;
          local_70[3] = 0;
          plVar20 = local_70;
        }
        bVar5 = local_70 != plVar18;
        plVar21 = plVar19;
        local_70 = plVar16;
      } while (bVar5);
      local_70 = plVar21;
      plVar18 = plVar20;
      if (plVar20 != (long *)0x0) {
        do {
          if (plVar21 == (long *)0x0) break;
          plVar16 = (long *)plVar21[3];
          plVar19 = local_70;
          if ((((*(byte *)(*plVar21 + 0x14) & 6) != 0) && (plVar21 != plVar18)) &&
             ((int)plVar21[1] != 0)) {
            lVar15 = plVar21[2];
            plVar19 = plVar16;
            if (plVar21 != local_70) {
              plVar19 = local_70;
            }
            plVar14 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x18) = plVar16;
              plVar14 = (long *)plVar21[3];
            }
            if (plVar14 != (long *)0x0) {
              plVar14[2] = lVar15;
            }
            plVar18[3] = (long)plVar21;
            plVar21[2] = (long)plVar18;
            plVar21[3] = 0;
            plVar18 = plVar21;
          }
          bVar5 = plVar21 != plVar20;
          plVar21 = plVar16;
          local_70 = plVar19;
        } while (bVar5);
      }
    }
                    /* catch() { ... } // from try @ 00ac38ac with catch @ 00ac3cd8 */
    plVar21 = plVar18;
    plVar20 = local_70;
    if (plVar18 != (long *)0x0) {
      do {
        if (plVar20 == (long *)0x0) break;
        plVar16 = (long *)plVar20[3];
        plVar19 = local_70;
        if ((((*(byte *)(*plVar20 + 0x14) & 6) != 0) && ((*(byte *)(*plVar20 + 0x20) >> 6 & 1) != 0)
            ) && ((plVar20 != plVar21 && ((int)plVar20[1] != 0)))) {
          lVar15 = plVar20[2];
          plVar19 = plVar16;
          if (plVar20 != local_70) {
            plVar19 = local_70;
          }
          plVar14 = plVar16;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 0x18) = plVar16;
            plVar14 = (long *)plVar20[3];
          }
          if (plVar14 != (long *)0x0) {
            plVar14[2] = lVar15;
          }
          plVar21[3] = (long)plVar20;
          plVar20[2] = (long)plVar21;
          plVar20[3] = 0;
          plVar21 = plVar20;
        }
        bVar5 = plVar20 != plVar18;
        local_70 = plVar19;
        plVar20 = plVar16;
      } while (bVar5);
    }
    plVar18 = plVar21;
    plVar20 = local_70;
    if (plVar21 != (long *)0x0) {
      do {
        if (plVar20 == (long *)0x0) break;
        plVar16 = (long *)plVar20[3];
        plVar19 = local_70;
        if ((int)plVar20[1] != 0) {
          if (plVar20 != plVar18) {
            lVar15 = plVar20[2];
            plVar19 = plVar16;
            if (plVar20 != local_70) {
              plVar19 = local_70;
            }
            plVar14 = plVar16;
            if (lVar15 != 0) {
              *(long **)(lVar15 + 0x18) = plVar16;
              plVar14 = (long *)plVar20[3];
            }
            if (plVar14 != (long *)0x0) {
              plVar14[2] = lVar15;
            }
            plVar18[3] = (long)plVar20;
            plVar20[2] = (long)plVar18;
            plVar20[3] = 0;
            plVar18 = plVar20;
          }
          *(undefined4 *)(plVar20 + 1) = 0;
        }
        bVar5 = plVar20 != plVar21;
        local_70 = plVar19;
        plVar20 = plVar16;
      } while (bVar5);
    }
    local_68 = plVar18;
    plVar20 = CRYPTO_malloc((iVar6 + 0x49) * 8,"ssl/ssl_ciph.c",0x5a8);
    plVar21 = plVar20;
    if (plVar20 == (long *)0x0) {
      CRYPTO_free(ptr);
      ERR_put_error(0x14,0xa6,0x41,"ssl/ssl_ciph.c",0x5ab);
      return 0;
    }
    for (; plVar18 != (long *)0x0; plVar18 = (long *)plVar18[2]) {
      *plVar21 = *plVar18;
      plVar21 = plVar21 + 1;
    }
    puVar17 = &DAT_01c712c8;
    lVar15 = 0x48;
    do {
      plVar18 = plVar21;
      if (((((*(uint *)(puVar17 + 0x14) == 0) || ((*(uint *)(puVar17 + 0x14) & ~uVar3) != 0)) &&
           ((*(uint *)(puVar17 + 0x18) == 0 || ((*(uint *)(puVar17 + 0x18) & ~uVar4) != 0)))) &&
          ((*(uint *)(puVar17 + 0x1c) == 0 || ((*(uint *)(puVar17 + 0x1c) & ~uVar12) != 0)))) &&
         ((*(uint *)(puVar17 + 0x20) == 0 || ((*(uint *)(puVar17 + 0x20) & ~uVar2) != 0)))) {
        plVar18 = plVar21 + 1;
        *plVar21 = (long)puVar17;
      }
      lVar15 = lVar15 + -1;
      puVar17 = puVar17 + 0x48;
      plVar21 = plVar18;
    } while (lVar15 != 0);
    *plVar18 = 0;
    iVar6 = strncmp(param_4,"DEFAULT",7);
    pcVar22 = param_4;
    if (iVar6 == 0) {
      iVar6 = FUN_00ac4594("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_68,&local_70,plVar20,param_5);
      pcVar22 = param_4 + 7;
      if (*pcVar22 == ':') {
        pcVar22 = param_4 + 8;
      }
      if (iVar6 == 0) {
        CRYPTO_free(plVar20);
        goto LAB_00ac40cc;
      }
    }
    if (*pcVar22 == '\0') {
      CRYPTO_free(plVar20);
    }
    else {
      iVar6 = FUN_00ac4594(pcVar22,&local_68,&local_70,plVar20,param_5);
      CRYPTO_free(plVar20);
      if (iVar6 == 0) goto LAB_00ac40cc;
    }
    lVar15 = OPENSSL_sk_new_null();
    plVar21 = local_68;
    if (lVar15 == 0) {
      CRYPTO_free(ptr);
      return 0;
    }
    do {
      if (plVar21 == (long *)0x0) {
        CRYPTO_free(ptr);
        lVar10 = OPENSSL_sk_dup(lVar15);
        if (lVar10 != 0) {
          OPENSSL_sk_free(*param_2);
          *param_2 = lVar15;
          if (*param_3 != 0) {
            OPENSSL_sk_free();
          }
          *param_3 = lVar10;
          OPENSSL_sk_set_cmp_func(lVar10,ssl_cipher_ptr_id_cmp);
          OPENSSL_sk_sort(*param_3);
          return lVar15;
        }
LAB_00ac4110:
        OPENSSL_sk_free(lVar15);
        return 0;
      }
      if ((int)plVar21[1] != 0) {
        iVar6 = FIPS_mode();
        if (iVar6 == 0) {
          lVar10 = *plVar21;
        }
        else {
          lVar10 = *plVar21;
          if ((*(byte *)(lVar10 + 0x34) >> 4 & 1) == 0) goto LAB_00ac4030;
        }
        iVar6 = OPENSSL_sk_push(lVar15,lVar10);
        if (iVar6 == 0) {
          CRYPTO_free(ptr);
          goto LAB_00ac4110;
        }
      }
LAB_00ac4030:
      plVar21 = (long *)plVar21[2];
    } while( true );
  }
LAB_00ac40cc:
  CRYPTO_free(ptr);
  return 0;
}

