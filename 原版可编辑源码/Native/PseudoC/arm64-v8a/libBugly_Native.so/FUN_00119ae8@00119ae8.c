
void FUN_00119ae8(long *param_1,ulong param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 ulong *param_6,ulong param_7)

{
  char *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  long lVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  int *piVar21;
  long lVar22;
  int *piVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  ulong *puVar28;
  ulong *puVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  int *piVar33;
  ulong local_88;
  ulong uStack_80;
  char *local_78;
  ulong local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (param_2 < 0x1a) {
    uVar14 = 0xffffffff;
    goto LAB_00119ebc;
  }
  uVar26 = (ulong)*(ushort *)(param_1 + 3);
  if (uVar26 != 0) {
    uVar25 = param_3[2];
    uVar5 = *param_3;
    puVar19 = (ulong *)param_3[1];
    lVar30 = *param_1;
    piVar27 = (int *)param_1[2];
    piVar21 = (int *)0x0;
    piVar33 = (int *)0x0;
    piVar23 = (int *)0x0;
    uVar31 = 0;
    do {
      iVar13 = *piVar27;
      uVar26 = uVar26 - 1;
      piVar24 = piVar23;
      uVar32 = uVar31;
      if (iVar13 == 1) {
        uVar2 = *(long *)(piVar27 + 4) + lVar30;
        piVar23 = piVar33;
        if ((uVar2 <= uVar5) && (piVar23 = piVar27, *(long *)(piVar27 + 10) + uVar2 <= uVar5)) {
          piVar23 = piVar33;
        }
        uVar32 = *(long *)(piVar27 + 8) + uVar2;
        piVar33 = piVar23;
        if (*(long *)(piVar27 + 8) + uVar2 <= uVar31) {
          uVar32 = uVar31;
        }
      }
      else {
        piVar24 = piVar27;
        if ((iVar13 != 2) && (piVar24 = piVar23, iVar13 == 0x6474e550)) {
          piVar21 = piVar27;
        }
      }
      piVar27 = piVar27 + 0xe;
      piVar23 = piVar24;
      uVar31 = uVar32;
    } while (0 < (long)uVar26);
    if (piVar33 != (int *)0x0) {
      if (piVar21 == (int *)0x0) {
        bVar12 = false;
        uVar8 = *(ushort *)(param_1 + 3);
        pcVar16 = (char *)param_3;
joined_r0x00119c0c:
        uVar26 = (ulong)uVar8;
        if (uVar26 == 0) {
LAB_00119d44:
          puVar19 = (ulong *)0x0;
          puVar17 = (ulong *)0xffffffffffffffff;
        }
        else {
LAB_00119c10:
          if ((int)uVar26 == 1) {
            puVar19 = (ulong *)0x0;
            uVar25 = 0;
            puVar17 = (ulong *)0xffffffffffffffff;
          }
          else {
            uVar25 = uVar26 & 0xfffe;
            piVar27 = (int *)(param_1[2] + 0x38);
            puVar18 = (ulong *)0x0;
            puVar20 = (ulong *)0x0;
            puVar28 = (ulong *)0xffffffffffffffff;
            uVar31 = uVar25;
            puVar29 = (ulong *)0xffffffffffffffff;
            do {
              iVar6 = piVar27[-0xe];
              iVar13 = *piVar27;
              if (iVar6 == 1) {
                pcVar16 = (char *)*param_1;
              }
              if (iVar13 == 1) {
                param_4 = (ulong *)*param_1;
              }
              if (iVar6 == 1) {
                param_5 = *(ulong **)(piVar27 + -10);
              }
              if (iVar13 == 1) {
                param_7 = *(ulong *)(piVar27 + 4);
              }
              if (iVar6 == 1) {
                param_6 = *(ulong **)(piVar27 + -4);
              }
              param_5 = (ulong *)((long)param_5 + (long)pcVar16);
              pcVar16 = (char *)(param_7 + (long)param_4);
              if (iVar13 == 1) {
                param_4 = *(ulong **)(piVar27 + 10);
              }
              bVar11 = iVar13 == 1;
              puVar19 = (ulong *)((long)param_5 + (long)param_6);
              param_6 = (ulong *)(ulong)bVar11;
              param_7 = (ulong)(param_5 < puVar28);
              param_4 = (ulong *)((long)pcVar16 + (long)param_4);
              puVar17 = param_5;
              if (iVar6 != 1 || param_5 >= puVar28) {
                puVar17 = puVar28;
              }
              puVar3 = (ulong *)pcVar16;
              if (!bVar11 || puVar29 <= pcVar16) {
                puVar3 = puVar29;
              }
              if (iVar6 != 1 || puVar19 <= puVar18) {
                puVar19 = puVar18;
              }
              puVar4 = param_4;
              if (!bVar11 || param_4 <= puVar20) {
                puVar4 = puVar20;
              }
              uVar31 = uVar31 - 2;
              piVar27 = piVar27 + 0x1c;
              puVar18 = puVar19;
              puVar20 = puVar4;
              puVar28 = puVar17;
              puVar29 = puVar3;
            } while (uVar31 != 0);
            if (puVar3 <= puVar17) {
              puVar17 = puVar3;
            }
            if (puVar19 <= puVar4) {
              puVar19 = puVar4;
            }
            if (uVar25 == uVar26) goto LAB_00119eac;
          }
          piVar27 = (int *)(param_1[2] + uVar25 * 0x38);
          puVar18 = puVar17;
          puVar20 = puVar19;
          do {
            puVar17 = puVar18;
            puVar19 = puVar20;
            if (*piVar27 == 1) {
              puVar28 = (ulong *)(*(long *)(piVar27 + 4) + *param_1);
              puVar17 = puVar28;
              if (puVar18 <= puVar28) {
                puVar17 = puVar18;
              }
              puVar19 = (ulong *)((long)puVar28 + *(long *)(piVar27 + 10));
              if ((ulong *)((long)puVar28 + *(long *)(piVar27 + 10)) <= puVar20) {
                puVar19 = puVar20;
              }
            }
            uVar25 = uVar25 + 1;
            piVar27 = piVar27 + 0xe;
            puVar18 = puVar17;
            puVar20 = puVar19;
          } while (uVar25 < uVar26);
        }
LAB_00119eac:
        uVar14 = _Uaarch64_dwarf_find_debug_frame
                           (bVar12,param_3 + 0xd,uVar5,*param_1,param_1[1],puVar17,puVar19);
        goto LAB_00119ebc;
      }
      if (piVar24 == (int *)0x0) {
        param_3[7] = 0;
      }
      else {
        uVar26 = *(ulong *)(*(long *)(piVar24 + 4) + lVar30);
        puVar17 = (ulong *)(*(long *)(piVar24 + 4) + lVar30) + 1;
        while (uVar26 != 0) {
          if (uVar26 == 3) {
            param_3[7] = *puVar17;
            break;
          }
          uVar26 = puVar17[1];
          puVar17 = puVar17 + 2;
        }
      }
      puVar19[4] = param_3[7];
      param_5 = (ulong *)(*(long *)(piVar21 + 4) + lVar30);
      if ((char)*param_5 == '\x01') {
        uVar15 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
        local_78 = (char *)((long)param_5 + 4);
        uVar14 = FUN_0011cb4c(_Uaarch64_local_addr_space,uVar15,&local_78,
                              *(char *)((long)param_5 + 1),puVar19,&uStack_80,0);
        if ((int)uVar14 < 0) goto LAB_00119ebc;
        param_6 = &local_88;
        param_7 = 0;
        uVar14 = FUN_0011cb4c(_Uaarch64_local_addr_space,uVar15,&local_78,
                              *(char *)((long)param_5 + 2),puVar19);
        if ((int)uVar14 < 0) goto LAB_00119ebc;
        bVar7 = *(byte *)((long)param_5 + 3);
        puVar17 = (ulong *)(ulong)bVar7;
        if (bVar7 != 0x3b) {
          param_4 = (ulong *)param_1[1];
          if (bVar7 == 0xff) {
            pcVar16 = "table `%s\' lacks search table; doing linear search\n";
            log2Console(3,"Bugly-libunwind");
          }
          else {
            pcVar16 = "table `%s\' has encoding 0x%x; doing linear search\n";
            log2Console(3,"Bugly-libunwind");
          }
          if (*(char *)((long)param_5 + 2) == -1) {
            local_88 = 0xffffffffffffffff;
          }
          uVar26 = local_88;
          if (*(char *)((long)param_5 + 1) == -1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pcVar1 = (char *)((long)param_3 + 0x14);
          pcVar1[0] = '\x01';
          puVar10 = _Uaarch64_local_addr_space;
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          uVar14 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
          local_70 = uStack_80;
          if ((uVar26 != 0) && (uStack_80 < uVar32)) {
            uVar31 = 0;
            do {
              uVar2 = local_70;
              pcVar16 = (char *)&local_70;
              puVar17 = (ulong *)0x0;
              param_6 = (ulong *)0x0;
              param_7 = 0;
              param_4 = puVar19;
              iVar13 = FUN_00120b5c(puVar10,uVar14);
              if (iVar13 < 0) goto LAB_00119fd4;
              if ((*puVar19 <= uVar5) && (uVar5 < puVar19[1])) {
                puVar17 = (ulong *)(ulong)(uint)uVar25;
                if ((uint)uVar25 == 0) {
                  iVar13 = 1;
                }
                else {
                  pcVar16 = (char *)&local_70;
                  param_6 = (ulong *)0x0;
                  param_7 = 0;
                  local_70 = uVar2;
                  iVar13 = FUN_00120b5c(puVar10,uVar14);
                  param_4 = puVar19;
                  if (-1 < iVar13) {
                    iVar13 = 1;
                  }
                }
                goto LAB_00119fd4;
              }
              uVar31 = uVar31 + 1;
            } while ((uVar31 < uVar26) && (local_70 < uVar32));
          }
          iVar13 = -10;
LAB_00119fd4:
          bVar12 = iVar13 == 1;
          uVar8 = *(ushort *)(param_1 + 3);
          param_5 = puVar17;
          goto joined_r0x00119c0c;
        }
        *(undefined4 *)(param_3 + 8) = 2;
        lVar22 = *(long *)(piVar33 + 4);
        param_7 = param_3[7];
        param_3[5] = lVar22 + lVar30;
        pcVar16 = "found table `%s\': segbase=0x%lx, len=%lu, gp=0x%lx, table_data=0x%lx\n";
        param_3[6] = *(long *)(piVar33 + 10) + lVar22 + lVar30;
        param_4 = (ulong *)param_1[1];
        param_3[9] = (ulong)param_4;
        param_3[10] = (ulong)param_5;
        param_6 = (ulong *)(local_88 & 0x1fffffffffffffff);
        param_3[0xb] = (ulong)param_6;
        param_3[0xc] = (ulong)local_78;
        log2Console(3,"Bugly-libunwind");
        bVar12 = true;
        uVar26 = (ulong)*(ushort *)(param_1 + 3);
        if (uVar26 == 0) goto LAB_00119d44;
        goto LAB_00119c10;
      }
      log2Console(3,"Bugly-libunwind","table `%s\' has unexpected version %d\n",param_1[1]);
    }
  }
  uVar14 = 0;
LAB_00119ebc:
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}

