
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
  int iVar11;
  long lVar12;
  long lVar13;
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
    if (iVar9 == 0) goto LAB_00e8b8d4;
LAB_00e8b808:
    local_78 = 0;
    local_90 = plStack_88;
    lVar13 = local_80;
    lVar10 = local_78;
    lVar12 = local_70;
joined_r0x00e8b810:
    local_80 = lVar13;
    local_78 = lVar10;
    local_70 = lVar12;
    if (iVar9 <= lVar7) {
      iVar11 = *(int *)(param_1 + 0x28);
      if (iVar11 == 0) {
        if ((int)(iVar9 - 0x1bU) < 1) {
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
          uVar14 = 0;
          do {
            lVar2 = uVar14 + 0x1b;
            if (lVar2 < lVar10) {
              local_78 = 0;
              lVar12 = local_90[2];
              lVar10 = 0;
              lVar13 = *(long *)*local_90 + local_90[1];
              plVar20 = local_90;
              plStack_88 = local_90;
              local_80 = lVar13;
              local_70 = lVar12;
            }
            if (lVar12 <= lVar2) {
              lVar13 = plVar20[2];
              do {
                plVar20 = (long *)plVar20[3];
                lVar10 = lVar10 + lVar13;
                lVar13 = plVar20[2];
                lVar12 = lVar13 + lVar10;
              } while (lVar12 <= lVar2);
              lVar13 = *(long *)*plVar20 + plVar20[1];
              plStack_88 = plVar20;
              local_80 = lVar13;
              local_78 = lVar10;
              local_70 = lVar12;
            }
            uVar14 = uVar14 + 1;
            iVar11 = iVar11 + (uint)*(byte *)(lVar13 + (lVar2 - lVar10));
            *(int *)(param_1 + 0x28) = iVar11;
          } while (uVar14 != iVar9 - 0x1bU);
        }
      }
      if (iVar11 + iVar9 <= lVar7) {
        uVar4 = FUN_00e8b020(&local_90,0x16);
        FUN_00e8c2e8(&local_90,0);
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
            iVar11 = (int)lVar7;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            else {
              lVar7 = 0;
              do {
                pbVar1 = (byte *)(*(long *)*puVar8 + puVar8[1] + lVar7);
                lVar7 = lVar7 + 1;
                uVar18 = *(uint *)(crc_lookup + (ulong)((uint)*pbVar1 ^ uVar18 >> 0x18) * 4) ^
                         uVar18 << 8;
              } while (lVar7 < iVar11);
            }
            puVar8 = (undefined8 *)puVar8[3];
            iVar9 = iVar9 - iVar11;
          } while (puVar8 != (undefined8 *)0x0);
        }
        FUN_00e8c2e8(&local_90,uVar4);
        if (uVar4 != uVar18) {
          plVar20 = (long *)*puVar15;
          goto LAB_00e8bc58;
        }
        if (param_2 == (undefined8 *)0x0) {
          if ((long *)*puVar15 != (long *)0x0) {
            lVar7 = (long)*(int *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x24);
            plVar20 = (long *)*puVar15;
            do {
              while( true ) {
                lVar10 = plVar20[2];
                if (lVar7 < lVar10) {
                  plVar20[1] = plVar20[1] + lVar7;
                  plVar20[2] = lVar10 - lVar7;
                  *puVar15 = plVar20;
                  goto LAB_00e8bfac;
                }
                lVar12 = *plVar20;
                plVar21 = (long *)plVar20[3];
                plVar17 = *(long **)(lVar12 + 0x18);
                iVar9 = *(int *)(lVar12 + 0x10) + -1;
                *(int *)(lVar12 + 0x10) = iVar9;
                if (iVar9 == 0) {
                  *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
                  *(long *)(lVar12 + 0x18) = *plVar17;
                  *plVar17 = lVar12;
                }
                *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
                plVar20[3] = plVar17[1];
                plVar17[1] = (long)plVar20;
                if (*(int *)((long)plVar17 + 0x14) != 0) break;
LAB_00e8bf74:
                lVar7 = lVar7 - lVar10;
                plVar20 = plVar21;
                if (plVar21 == (long *)0x0) goto LAB_00e8bf90;
              }
              puVar8 = (undefined8 *)*plVar17;
              if ((undefined8 *)*plVar17 == (undefined8 *)0x0) {
                *plVar17 = 0;
                goto LAB_00e8bf54;
              }
              do {
                puVar22 = (undefined8 *)puVar8[3];
                if ((void *)*puVar8 != (void *)0x0) {
                  free((void *)*puVar8);
                }
                free(puVar8);
                puVar8 = puVar22;
              } while (puVar22 != (undefined8 *)0x0);
              *plVar17 = 0;
              while (plVar20 != (long *)0x0) {
LAB_00e8bf54:
                plVar19 = (long *)plVar20[3];
                free(plVar20);
                plVar20 = plVar19;
              }
              plVar17[1] = 0;
              if ((int)plVar17[2] != 0) goto LAB_00e8bf74;
              free(plVar17);
              lVar7 = lVar7 - lVar10;
              plVar20 = plVar21;
            } while (plVar21 != (long *)0x0);
          }
LAB_00e8bf90:
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        else {
          uVar5 = FUN_00e8c4a8(puVar15,param_1 + 8,(long)*(int *)(param_1 + 0x24));
          *param_2 = uVar5;
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x24);
          uVar5 = FUN_00e8c4a8(puVar15,param_1 + 8,(long)*(int *)(param_1 + 0x28));
          param_2[2] = uVar5;
          param_2[3] = (long)*(int *)(param_1 + 0x28);
        }
LAB_00e8bfac:
        iVar9 = *(int *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        local_98 = (long)iVar9 + (long)*(int *)(param_1 + 0x24);
        lVar7 = *(long *)(param_1 + 0x18) - local_98;
LAB_00e8bfc4:
        *(long *)(param_1 + 0x18) = lVar7;
        goto LAB_00e8bfc8;
      }
    }
  }
  else {
    local_70 = plVar20[2];
    local_80 = *(long *)*plVar20 + plVar20[1];
    iVar9 = *(int *)(param_1 + 0x24);
    plStack_88 = plVar20;
    if (iVar9 != 0) goto LAB_00e8b808;
LAB_00e8b8d4:
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
          local_70 = local_90[2];
          local_78 = 0;
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
        if (*(char *)(local_80 + (1 - local_78)) != 'g') goto LAB_00e8bc58;
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
        if (*(char *)(local_80 + (2 - local_78)) != 'g') goto LAB_00e8bc58;
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
        if (*(char *)(local_80 + (3 - local_78)) != 'S') goto LAB_00e8bc58;
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
        iVar9 = *(byte *)(local_80 + (0x1a - local_78)) + 0x1b;
        *(int *)(param_1 + 0x24) = iVar9;
        lVar13 = local_80;
        lVar10 = local_78;
        lVar12 = local_70;
        goto joined_r0x00e8b810;
      }
LAB_00e8bc58:
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (plVar20 != (long *)0x0) {
        lVar7 = 1;
LAB_00e8bc64:
        do {
          lVar10 = plVar20[2];
          if (lVar7 < lVar10) {
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
                  if ((undefined8 *)*plVar21 == (undefined8 *)0x0) {
                    *plVar21 = 0;
                    goto LAB_00e8be44;
                  }
                  do {
                    puVar22 = (undefined8 *)puVar8[3];
                    if ((void *)*puVar8 != (void *)0x0) {
                      free((void *)*puVar8);
                    }
                    free(puVar8);
                    puVar8 = puVar22;
                  } while (puVar22 != (undefined8 *)0x0);
                  *plVar21 = 0;
                  while (plVar17 != (long *)0x0) {
LAB_00e8be44:
                    plVar19 = (long *)plVar17[3];
                    free(plVar17);
                    plVar17 = plVar19;
                  }
                  plVar21[1] = 0;
                  if ((int)plVar21[2] == 0) {
                    free(plVar21);
                  }
                }
                if (plVar20 == (long *)0x0) {
                  *puVar15 = 0;
                  sVar16 = __n;
                  goto LAB_00e8be94;
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
                *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
                plVar20[3] = plVar17[1];
                plVar17[1] = (long)plVar20;
                if (*(int *)((long)plVar17 + 0x14) != 0) {
                  puVar8 = (undefined8 *)*plVar17;
                  if ((undefined8 *)*plVar17 == (undefined8 *)0x0) {
                    *plVar17 = 0;
                    goto LAB_00e8c0a0;
                  }
                  do {
                    puVar22 = (undefined8 *)puVar8[3];
                    if ((void *)*puVar8 != (void *)0x0) {
                      free((void *)*puVar8);
                    }
                    free(puVar8);
                    puVar8 = puVar22;
                  } while (puVar22 != (undefined8 *)0x0);
                  *plVar17 = 0;
                  while (plVar20 != (long *)0x0) {
LAB_00e8c0a0:
                    plVar19 = (long *)plVar20[3];
                    free(plVar20);
                    plVar20 = plVar19;
                  }
                  plVar17[1] = 0;
                  if ((int)plVar17[2] == 0) {
                    free(plVar17);
                  }
                }
                if (plVar21 == (long *)0x0) break;
                sVar23 = sVar23 - __n;
                __n = plVar21[2];
                plVar20 = plVar21;
                if ((long)sVar23 < (long)__n) goto LAB_00e8c0e0;
              }
              *puVar15 = 0;
LAB_00e8be94:
              local_98 = local_98 - sVar16;
              goto LAB_00e8be98;
            }
LAB_00e8c0e0:
            plVar20[1] = plVar20[1] + sVar23;
            plVar20[2] = __n - sVar23;
            *puVar15 = plVar20;
            local_98 = local_98 - sVar16;
            goto LAB_00e8be9c;
          }
          lVar12 = *plVar20;
          plVar21 = (long *)plVar20[3];
          plVar17 = *(long **)(lVar12 + 0x18);
          iVar9 = *(int *)(lVar12 + 0x10) + -1;
          *(int *)(lVar12 + 0x10) = iVar9;
          if (iVar9 == 0) {
            *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
            *(long *)(lVar12 + 0x18) = *plVar17;
            *plVar17 = lVar12;
          }
          *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
          plVar20[3] = plVar17[1];
          plVar17[1] = (long)plVar20;
          if (*(int *)((long)plVar17 + 0x14) == 0) {
LAB_00e8bd20:
            lVar7 = lVar7 - lVar10;
            plVar20 = plVar21;
            if (plVar21 == (long *)0x0) break;
            goto LAB_00e8bc64;
          }
          puVar8 = (undefined8 *)*plVar17;
          if ((undefined8 *)*plVar17 == (undefined8 *)0x0) {
            *plVar17 = 0;
            goto LAB_00e8bd00;
          }
          do {
            puVar22 = (undefined8 *)puVar8[3];
            if ((void *)*puVar8 != (void *)0x0) {
              free((void *)*puVar8);
            }
            free(puVar8);
            puVar8 = puVar22;
          } while (puVar22 != (undefined8 *)0x0);
          *plVar17 = 0;
          while (plVar20 != (long *)0x0) {
LAB_00e8bd00:
            plVar19 = (long *)plVar20[3];
            free(plVar20);
            plVar20 = plVar19;
          }
          plVar17[1] = 0;
          if ((int)plVar17[2] != 0) goto LAB_00e8bd20;
          free(plVar17);
          lVar7 = lVar7 - lVar10;
          plVar20 = plVar21;
        } while (plVar21 != (long *)0x0);
      }
      *puVar15 = 0;
      local_98 = -1;
LAB_00e8be98:
      *(undefined8 *)(param_1 + 8) = 0;
LAB_00e8be9c:
      lVar7 = *(long *)(param_1 + 0x18) + local_98;
      goto LAB_00e8bfc4;
    }
  }
  local_98 = 0;
LAB_00e8bfc8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98);
}

