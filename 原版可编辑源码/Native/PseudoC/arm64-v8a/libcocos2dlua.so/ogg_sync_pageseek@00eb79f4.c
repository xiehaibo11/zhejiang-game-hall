
void ogg_sync_pageseek(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  size_t sVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  size_t __n;
  size_t sVar23;
  long local_98;
  long *local_90;
  long *plStack_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ogg_page_release(param_2);
  puVar15 = (undefined8 *)(param_1 + 0x10);
  plVar20 = (long *)*puVar15;
  lVar7 = *(long *)(param_1 + 0x18);
  local_70 = 0;
  plStack_88 = (long *)0x0;
  local_80 = 0;
  if (plVar20 == (long *)0x0) {
    iVar9 = *(int *)(param_1 + 0x24);
    if (iVar9 == 0) goto LAB_00eb7b48;
LAB_00eb7a78:
    local_78 = 0;
    local_90 = plStack_88;
    lVar12 = local_80;
    lVar10 = local_78;
    lVar11 = local_70;
joined_r0x00eb7a80:
    local_80 = lVar12;
    local_78 = lVar10;
    local_70 = lVar11;
    if (iVar9 <= lVar7) {
      iVar13 = *(int *)(param_1 + 0x28);
      if (iVar13 == 0) {
        if ((int)(iVar9 - 0x1bU) < 1) {
          iVar13 = 0;
        }
        else {
          iVar13 = 0;
          uVar14 = 0;
          do {
            lVar2 = uVar14 + 0x1b;
            if (lVar2 < lVar10) {
              local_78 = 0;
              lVar11 = local_90[2];
              lVar10 = 0;
              lVar12 = *(long *)*local_90 + local_90[1];
              plVar20 = local_90;
              plStack_88 = local_90;
              local_80 = lVar12;
              local_70 = lVar11;
            }
            if (lVar11 <= lVar2) {
              lVar12 = plVar20[2];
              do {
                plVar20 = (long *)plVar20[3];
                lVar10 = lVar10 + lVar12;
                lVar12 = plVar20[2];
                lVar11 = lVar12 + lVar10;
              } while (lVar11 <= lVar2);
              lVar12 = *(long *)*plVar20 + plVar20[1];
              plStack_88 = plVar20;
              local_80 = lVar12;
              local_78 = lVar10;
              local_70 = lVar11;
            }
            uVar14 = uVar14 + 1;
            iVar13 = iVar13 + (uint)*(byte *)(lVar12 + (lVar2 - lVar10));
            *(int *)(param_1 + 0x28) = iVar13;
          } while (uVar14 != iVar9 - 0x1bU);
        }
      }
      if (iVar13 + iVar9 <= lVar7) {
        uVar4 = FUN_00eb71b4(&local_90,0x16);
        FUN_00eb8544(&local_90,0);
        puVar8 = (undefined8 *)*puVar15;
        if (puVar8 == (undefined8 *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          iVar9 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28);
          do {
            lVar7 = (long)iVar9;
            if ((long)puVar8[2] <= (long)iVar9) {
              lVar7 = puVar8[2];
            }
            iVar13 = (int)lVar7;
            if (iVar13 < 1) {
              iVar13 = 0;
            }
            else {
              lVar7 = 0;
              do {
                pbVar1 = (byte *)(*(long *)*puVar8 + puVar8[1] + lVar7);
                lVar7 = lVar7 + 1;
                uVar18 = *(uint *)(crc_lookup + (ulong)((uint)*pbVar1 ^ uVar18 >> 0x18) * 4) ^
                         uVar18 << 8;
              } while (lVar7 < iVar13);
            }
            puVar8 = (undefined8 *)puVar8[3];
            iVar9 = iVar9 - iVar13;
          } while (puVar8 != (undefined8 *)0x0);
        }
        FUN_00eb8544(&local_90,uVar4);
        if (uVar4 != uVar18) {
          plVar20 = (long *)*puVar15;
          goto LAB_00eb7eac;
        }
        if (param_2 == (undefined8 *)0x0) {
          if ((long *)*puVar15 != (long *)0x0) {
            lVar7 = (long)*(int *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x24);
            plVar20 = (long *)*puVar15;
            do {
              lVar10 = plVar20[2];
              if (lVar7 < lVar10) {
                plVar20[1] = plVar20[1] + lVar7;
                plVar20[2] = lVar10 - lVar7;
                *puVar15 = plVar20;
                goto LAB_00eb8200;
              }
              lVar11 = *plVar20;
              plVar21 = (long *)plVar20[3];
              plVar17 = *(long **)(lVar11 + 0x18);
                    /* try { // try from 00eb8138 to 00fb82a7 has its CatchHandler @ 00eb8138
                       catch() { ... } // from try @ 00eb8138 with catch @ 00eb8138
                       catch() { ... } // from try @ 00eb82ac with catch @ 00eb8138
                       catch() { ... } // from try @ 00eb8360 with catch @ 00eb8138 */
              iVar9 = *(int *)(lVar11 + 0x10) + -1;
              *(int *)(lVar11 + 0x10) = iVar9;
              if (iVar9 == 0) {
                *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
                *(long *)(lVar11 + 0x18) = *plVar17;
                *plVar17 = lVar11;
              }
              *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
              plVar20[3] = plVar17[1];
              plVar17[1] = (long)plVar20;
              if (*(int *)((long)plVar17 + 0x14) != 0) {
                puVar8 = (undefined8 *)*plVar17;
                if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
                  do {
                    puVar22 = (undefined8 *)puVar8[3];
                    if ((void *)*puVar8 != (void *)0x0) {
                      free((void *)*puVar8);
                    }
                    free(puVar8);
                    puVar8 = puVar22;
                  } while (puVar22 != (undefined8 *)0x0);
                  *plVar17 = 0;
                  goto joined_r0x00eb81b4;
                }
                *plVar17 = 0;
                do {
                  plVar19 = (long *)plVar20[3];
                  free(plVar20);
                  plVar20 = plVar19;
joined_r0x00eb81b4:
                } while (plVar20 != (long *)0x0);
                plVar17[1] = 0;
                if ((int)plVar17[2] == 0) {
                  free(plVar17);
                }
              }
              lVar7 = lVar7 - lVar10;
              plVar20 = plVar21;
            } while (plVar21 != (long *)0x0);
          }
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        else {
          uVar5 = FUN_00eb86dc(puVar15,param_1 + 8,(long)*(int *)(param_1 + 0x24));
          *param_2 = uVar5;
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x24);
          uVar5 = FUN_00eb86dc(puVar15,param_1 + 8,(long)*(int *)(param_1 + 0x28));
          param_2[2] = uVar5;
          param_2[3] = (long)*(int *)(param_1 + 0x28);
        }
LAB_00eb8200:
        iVar9 = *(int *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        local_98 = (long)iVar9 + (long)*(int *)(param_1 + 0x24);
        lVar7 = *(long *)(param_1 + 0x18) - local_98;
LAB_00eb8218:
        *(long *)(param_1 + 0x18) = lVar7;
        goto LAB_00eb821c;
      }
    }
  }
  else {
    local_70 = plVar20[2];
    local_80 = *(long *)*plVar20 + plVar20[1];
    iVar9 = *(int *)(param_1 + 0x24);
    plStack_88 = plVar20;
    if (iVar9 != 0) goto LAB_00eb7a78;
LAB_00eb7b48:
    local_90 = plStack_88;
    local_78 = 0;
    if (0x1a < lVar7) {
      plVar17 = plVar20;
      if (local_70 < 1) {
        lVar10 = plVar20[2];
        local_78 = 0;
        plStack_88 = plVar20;
        do {
          plStack_88 = (long *)plStack_88[3];
          local_78 = local_78 + lVar10;
          lVar10 = plStack_88[2];
          local_70 = lVar10 + local_78;
        } while (local_70 < 1);
        local_80 = *(long *)*plStack_88 + plStack_88[1];
        plVar17 = plStack_88;
      }
      if (*(char *)(local_80 - local_78) == 'O') {
        if (1 < local_78) {
          local_78 = 0;
          local_70 = local_90[2];
          local_80 = *(long *)*local_90 + local_90[1];
          plVar17 = local_90;
          plStack_88 = local_90;
        }
        if (local_70 < 2) {
          lVar10 = plVar17[2];
          do {
            plVar17 = (long *)plVar17[3];
            local_78 = local_78 + lVar10;
            lVar10 = plVar17[2];
            local_70 = lVar10 + local_78;
          } while (local_70 < 2);
          local_80 = *(long *)*plVar17 + plVar17[1];
          plStack_88 = plVar17;
        }
        if (*(char *)((local_80 - local_78) + 1) != 'g') goto LAB_00eb7eac;
        if (2 < local_78) {
          local_78 = 0;
          local_70 = local_90[2];
          local_80 = *(long *)*local_90 + local_90[1];
          plVar17 = local_90;
          plStack_88 = local_90;
        }
        if (local_70 < 3) {
          lVar10 = plVar17[2];
          do {
            plVar17 = (long *)plVar17[3];
            local_78 = local_78 + lVar10;
            lVar10 = plVar17[2];
            local_70 = lVar10 + local_78;
          } while (local_70 < 3);
          local_80 = *(long *)*plVar17 + plVar17[1];
          plStack_88 = plVar17;
        }
        if (*(char *)((local_80 - local_78) + 2) != 'g') goto LAB_00eb7eac;
        if (3 < local_78) {
          local_78 = 0;
          local_70 = local_90[2];
          local_80 = *(long *)*local_90 + local_90[1];
          plVar17 = local_90;
          plStack_88 = local_90;
        }
        if (local_70 < 4) {
          lVar10 = plVar17[2];
          do {
            plVar17 = (long *)plVar17[3];
            local_78 = local_78 + lVar10;
            lVar10 = plVar17[2];
            local_70 = lVar10 + local_78;
          } while (local_70 < 4);
          local_80 = *(long *)*plVar17 + plVar17[1];
          plStack_88 = plVar17;
        }
        if (*(char *)((local_80 - local_78) + 3) != 'S') goto LAB_00eb7eac;
        plVar20 = plVar17;
        if (0x1a < local_78) {
          local_78 = 0;
          local_70 = local_90[2];
          local_80 = *(long *)*local_90 + local_90[1];
          plVar20 = local_90;
          plStack_88 = local_90;
        }
        if (local_70 < 0x1b) {
          lVar10 = plVar20[2];
          do {
            plVar20 = (long *)plVar20[3];
            local_78 = local_78 + lVar10;
            lVar10 = plVar20[2];
            local_70 = lVar10 + local_78;
          } while (local_70 < 0x1b);
          local_80 = *(long *)*plVar20 + plVar20[1];
          plStack_88 = plVar20;
        }
        iVar9 = *(byte *)((local_80 - local_78) + 0x1a) + 0x1b;
        *(int *)(param_1 + 0x24) = iVar9;
        lVar12 = local_80;
        lVar10 = local_78;
        lVar11 = local_70;
        goto joined_r0x00eb7a80;
      }
LAB_00eb7eac:
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (plVar20 != (long *)0x0) {
        lVar7 = 1;
LAB_00eb7ec4:
        lVar10 = plVar20[2];
        if (lVar10 <= lVar7) goto code_r0x00eb7ed4;
        plVar20[1] = plVar20[1] + lVar7;
        plVar20[2] = lVar10 - lVar7;
        *puVar15 = plVar20;
        local_98 = -1;
        while( true ) {
          lVar7 = plVar20[1];
          __n = plVar20[2];
          lVar10 = *(long *)*plVar20;
          pvVar6 = memchr((void *)(lVar10 + lVar7),0x4f,__n);
          sVar16 = __n;
          plVar17 = plVar20;
          sVar23 = __n;
          if (pvVar6 != (void *)0x0) break;
          do {
            lVar7 = *plVar17;
            plVar20 = (long *)plVar17[3];
            plVar21 = *(long **)(lVar7 + 0x18);
            iVar9 = *(int *)(lVar7 + 0x10) + -1;
            *(int *)(lVar7 + 0x10) = iVar9;
            if (iVar9 == 0) {
              *(int *)(plVar21 + 2) = (int)plVar21[2] + -1;
              *(long *)(lVar7 + 0x18) = *plVar21;
              *plVar21 = lVar7;
            }
            *(int *)(plVar21 + 2) = (int)plVar21[2] + -1;
            plVar17[3] = plVar21[1];
            plVar21[1] = (long)plVar17;
            if (*(int *)((long)plVar21 + 0x14) != 0) {
              puVar8 = (undefined8 *)*plVar21;
              if ((undefined8 *)*plVar21 != (undefined8 *)0x0) {
                do {
                  puVar22 = (undefined8 *)puVar8[3];
                  if ((void *)*puVar8 != (void *)0x0) {
                    free((void *)*puVar8);
                  }
                  free(puVar8);
                  puVar8 = puVar22;
                } while (puVar22 != (undefined8 *)0x0);
                *plVar21 = 0;
                goto joined_r0x00eb8074;
              }
              *plVar21 = 0;
              do {
                plVar19 = (long *)plVar17[3];
                free(plVar17);
                plVar17 = plVar19;
joined_r0x00eb8074:
              } while (plVar17 != (long *)0x0);
              plVar21[1] = 0;
              if ((int)plVar21[2] == 0) {
                free(plVar21);
              }
            }
            if (plVar20 == (long *)0x0) {
              *puVar15 = 0;
              sVar16 = __n;
              goto LAB_00eb80e8;
            }
            sVar23 = sVar23 - sVar16;
            sVar16 = plVar20[2];
            plVar17 = plVar20;
          } while (sVar16 - sVar23 == 0 || (long)sVar16 < (long)sVar23);
          plVar20[2] = sVar16 - sVar23;
          plVar20[1] = plVar20[1] + sVar23;
          *puVar15 = plVar20;
          local_98 = local_98 - __n;
        }
        sVar16 = (long)pvVar6 - (lVar10 + lVar7);
        sVar23 = sVar16;
        if ((long)__n <= (long)sVar16) {
          while( true ) {
            lVar7 = *plVar20;
            plVar21 = (long *)plVar20[3];
            plVar17 = *(long **)(lVar7 + 0x18);
            iVar9 = *(int *)(lVar7 + 0x10) + -1;
            *(int *)(lVar7 + 0x10) = iVar9;
            if (iVar9 == 0) {
              *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
              *(long *)(lVar7 + 0x18) = *plVar17;
              *plVar17 = lVar7;
            }
                    /* try { // try from 00eb82a8 to 00fb82ab has its CatchHandler @ 00eb8360 */
            *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
                    /* try { // try from 00eb82ac to 00fb8353 has its CatchHandler @ 00eb8138 */
            plVar20[3] = plVar17[1];
            plVar17[1] = (long)plVar20;
            if (*(int *)((long)plVar17 + 0x14) != 0) {
              puVar8 = (undefined8 *)*plVar17;
              if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
                do {
                  puVar22 = (undefined8 *)puVar8[3];
                  if ((void *)*puVar8 != (void *)0x0) {
                    free((void *)*puVar8);
                  }
                  free(puVar8);
                  puVar8 = puVar22;
                } while (puVar22 != (undefined8 *)0x0);
                *plVar17 = 0;
                goto joined_r0x00eb82f4;
              }
              *plVar17 = 0;
              do {
                plVar19 = (long *)plVar20[3];
                free(plVar20);
                plVar20 = plVar19;
joined_r0x00eb82f4:
              } while (plVar20 != (long *)0x0);
              plVar17[1] = 0;
              if ((int)plVar17[2] == 0) {
                free(plVar17);
              }
            }
            if (plVar21 == (long *)0x0) break;
            sVar23 = sVar23 - __n;
            __n = plVar21[2];
            plVar20 = plVar21;
            if ((long)sVar23 < (long)__n) goto LAB_00eb8338;
          }
          *puVar15 = 0;
                    /* catch() { ... } // from try @ 00eb82a8 with catch @ 00eb8360
                       catch() { ... } // from try @ 00eb8354 with catch @ 00eb8360
                       try { // try from 00eb8360 to 00fb8377 has its CatchHandler @ 00eb8138 */
LAB_00eb80e8:
          local_98 = local_98 - sVar16;
          goto LAB_00eb80ec;
        }
LAB_00eb8338:
        plVar20[1] = plVar20[1] + sVar23;
        plVar20[2] = __n - sVar23;
        *puVar15 = plVar20;
        local_98 = local_98 - sVar16;
                    /* try { // try from 00eb8354 to 00fb835f has its CatchHandler @ 00eb8360 */
        goto LAB_00eb80f0;
      }
LAB_00eb7f90:
      *puVar15 = 0;
      local_98 = -1;
LAB_00eb80ec:
      *(undefined8 *)(param_1 + 8) = 0;
LAB_00eb80f0:
      lVar7 = *(long *)(param_1 + 0x18) + local_98;
      goto LAB_00eb8218;
    }
  }
  local_98 = 0;
LAB_00eb821c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98);
code_r0x00eb7ed4:
  lVar11 = *plVar20;
  plVar21 = (long *)plVar20[3];
  plVar17 = *(long **)(lVar11 + 0x18);
  iVar9 = *(int *)(lVar11 + 0x10) + -1;
  *(int *)(lVar11 + 0x10) = iVar9;
  if (iVar9 == 0) {
    *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
    *(long *)(lVar11 + 0x18) = *plVar17;
    *plVar17 = lVar11;
  }
  *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
  plVar20[3] = plVar17[1];
  plVar17[1] = (long)plVar20;
  if (*(int *)((long)plVar17 + 0x14) != 0) {
    puVar8 = (undefined8 *)*plVar17;
    if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
      do {
        puVar22 = (undefined8 *)puVar8[3];
        if ((void *)*puVar8 != (void *)0x0) {
          free((void *)*puVar8);
        }
        free(puVar8);
        puVar8 = puVar22;
      } while (puVar22 != (undefined8 *)0x0);
      *plVar17 = 0;
      goto joined_r0x00eb7f60;
    }
    *plVar17 = 0;
    do {
      plVar19 = (long *)plVar20[3];
      free(plVar20);
      plVar20 = plVar19;
joined_r0x00eb7f60:
    } while (plVar20 != (long *)0x0);
    plVar17[1] = 0;
    if ((int)plVar17[2] == 0) {
      free(plVar17);
    }
  }
  lVar7 = lVar7 - lVar10;
  plVar20 = plVar21;
  if (plVar21 == (long *)0x0) goto LAB_00eb7f90;
  goto LAB_00eb7ec4;
}

