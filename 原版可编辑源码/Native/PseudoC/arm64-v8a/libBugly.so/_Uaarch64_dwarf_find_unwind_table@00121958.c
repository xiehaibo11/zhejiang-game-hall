
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_dwarf_find_unwind_table
               (long param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5,
               ulong param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  ulong local_130;
  long local_128;
  long local_108;
  long local_100;
  char local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  char local_e5;
  long local_e0;
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  long local_b8 [9];
  long local_70 [3];
  ushort local_58 [4];
  undefined8 local_50;
  ulong local_48;
  ulong local_40 [3];
  long local_28 [5];
  
  local_28[4] = ___stack_chk_guard;
  if (*param_2 != '\0') {
    if (param_2[2] != '\0') {
      lVar14 = *(long *)(param_2 + 8);
      if (*(ushort *)(lVar14 + 0x38) != 0) {
        uVar13 = 0;
        uVar11 = 0xffffffffffffffff;
        piVar1 = (int *)(lVar14 + *(long *)(lVar14 + 0x20) + 0x38 +
                                  (ulong)(*(ushort *)(lVar14 + 0x38) - 1) * 0x38);
        piVar10 = (int *)0x0;
        piVar3 = (int *)(lVar14 + *(long *)(lVar14 + 0x20));
        piVar16 = (int *)0x0;
        piVar19 = (int *)0x0;
        do {
          while (piVar5 = piVar3, iVar4 = *piVar5, iVar4 == 2) {
            piVar3 = piVar5 + 0xe;
            piVar16 = piVar5;
            piVar18 = piVar19;
            if (piVar5 + 0xe == piVar1) goto LAB_00121a50;
          }
          piVar18 = piVar5;
          if ((iVar4 != 0x6474e550) && (piVar18 = piVar19, iVar4 == 1)) {
            uVar9 = *(ulong *)(piVar5 + 4);
            if (uVar9 < uVar11) {
              uVar11 = uVar9;
            }
            if (uVar13 < uVar9 + *(long *)(piVar5 + 10)) {
              uVar13 = uVar9 + *(long *)(piVar5 + 10);
            }
            if (*(ulong *)(piVar5 + 2) == param_6) {
              piVar10 = piVar5;
            }
          }
          piVar3 = piVar5 + 0xe;
          piVar19 = piVar18;
        } while (piVar5 + 0xe != piVar1);
LAB_00121a50:
        if (piVar10 != (int *)0x0) {
          param_5 = param_5 - *(long *)(piVar10 + 4);
          if (piVar18 == (int *)0x0) {
LAB_00121b8c:
            uVar7 = 0;
          }
          else {
            *(undefined8 *)(param_1 + 0x20) = 0;
            if (piVar16 != (int *)0x0) {
              lVar8 = *(long *)(piVar16 + 2);
              plVar6 = (long *)(lVar14 + lVar8);
              if ((lVar8 + 0x10U < *(ulong *)(param_2 + 0x10)) &&
                 (lVar8 = *(long *)(lVar14 + lVar8), lVar8 != 0)) {
                while (lVar8 != 3) {
                  plVar6 = plVar6 + 2;
                  if ((*(ulong *)(param_2 + 0x10) <= (ulong)((long)plVar6 + (0x10 - lVar14))) ||
                     (lVar8 = *plVar6, lVar8 == 0)) goto LAB_00121ac8;
                }
                *(long *)(param_1 + 0x20) = plVar6[1];
              }
            }
LAB_00121ac8:
            lVar8 = lVar14 + *(long *)(piVar18 + 2);
            cVar2 = *(char *)(lVar14 + *(long *)(piVar18 + 2));
            if (cVar2 != '\x01') {
              log2Console(3,"Bugly-libunwind","table `%s\' has unexpected version %d\n",param_4,
                          cVar2);
              uVar7 = 0xfffffff6;
              goto LAB_00121bac;
            }
            uVar7 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
            local_d8 = lVar8 + 4;
            local_28[0] = 0;
            local_50 = 0;
            local_48 = 0;
            local_40[2] = *(undefined8 *)(param_1 + 0x20);
            local_40[0] = 0;
            local_40[1] = 0;
            local_28[1] = 0;
            local_28[2] = 0;
            local_28[3] = 0;
            iVar4 = FUN_00119e5c(_Uaarch64_local_addr_space,uVar7,&local_d8,
                                 *(undefined1 *)(lVar8 + 1),&local_50,&local_d0,0);
            if ((iVar4 < 0) ||
               (iVar4 = FUN_00119e5c(_Uaarch64_local_addr_space,uVar7,&local_d8,
                                     *(undefined1 *)(lVar8 + 2),&local_50,&local_c8,0), iVar4 < 0))
            goto LAB_00121c94;
            if (*(char *)(lVar8 + 3) != ';') goto LAB_00121b8c;
            *(ulong *)(param_1 + 0x10) = uVar11 + param_5;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(ulong *)(param_1 + 0x40) = local_c8 & 0x1fffffffffffffff;
            *(ulong *)(param_1 + 0x18) = uVar13 + param_5;
            *(undefined4 *)(param_1 + 0x28) = 2;
            lVar17 = *(long *)(param_2 + 8);
            lVar15 = *(long *)(piVar18 + 2);
            lVar14 = *(long *)(piVar18 + 4);
            uVar7 = 1;
            *(long *)(param_1 + 0x48) = ((local_d8 - lVar17) - lVar15) + param_5 + lVar14;
            *(long *)(param_1 + 0x38) = ((lVar8 - lVar17) - lVar15) + param_5 + lVar14;
          }
          uVar7 = _Uaarch64_dwarf_find_debug_frame
                            (uVar7,param_1 + 0x50,param_7,param_5,param_4,uVar11 + param_5,
                             uVar13 + param_5);
          goto LAB_00121bac;
        }
      }
      uVar7 = 0;
      goto LAB_00121bac;
    }
    lVar14 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x20,local_70,8,0);
    if ((lVar14 == 8) &&
       (lVar14 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x38,local_58,2,0),
       lVar14 == 2)) {
      if (local_58[0] != 0) {
        local_108 = 0;
        local_100 = 0;
        iVar4 = 0;
        local_130 = 0;
        local_128 = 0;
        uVar13 = 0;
        uVar11 = 0xffffffffffffffff;
        lVar14 = local_70[0];
        do {
          lVar8 = _Uelf64_memory_read(param_2,lVar14 + **(long **)(param_2 + 0x18),&local_50,4,0);
          if (lVar8 != 4) goto LAB_00121c94;
          lVar8 = lVar14;
          lVar15 = local_100;
          if ((((int)local_50 != 2) &&
              (lVar8 = local_108, lVar15 = lVar14, (int)local_50 != 0x6474e550)) &&
             (lVar15 = local_100, (int)local_50 == 1)) {
            lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x10 + lVar14,
                                         local_40,8,0);
            if (lVar15 != 8) goto LAB_00121c94;
            if (local_40[0] < uVar11) {
              uVar11 = local_40[0];
            }
            lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x28 + lVar14,
                                         local_28,8,0);
            if (lVar15 != 8) goto LAB_00121c94;
            if (uVar13 < local_28[0] + local_40[0]) {
              uVar13 = local_28[0] + local_40[0];
            }
            lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 + lVar14,&local_48,
                                         8,0);
            if (lVar15 != 8) goto LAB_00121c94;
            lVar15 = local_100;
            if (param_6 == local_48) {
              local_130 = local_40[0];
              local_128 = lVar14;
            }
          }
          local_100 = lVar15;
          local_108 = lVar8;
          iVar4 = iVar4 + 1;
          lVar14 = lVar14 + 0x38;
        } while (iVar4 < (int)(uint)local_58[0]);
        if (local_128 != 0) {
          if (local_100 != 0) {
            *(undefined8 *)(param_1 + 0x20) = 0;
            if ((local_108 != 0) &&
               (lVar14 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 + local_108,
                                             &local_48,8,0), lVar14 == 8)) {
              lVar14 = (*(long **)(param_2 + 0x18))[1];
              lVar8 = **(long **)(param_2 + 0x18);
              uVar9 = local_48;
              do {
                uVar12 = uVar9;
                if ((ulong)(lVar14 - lVar8) <= uVar12 + 0x10) {
LAB_00121fb4:
                  log2Console(3,"Bugly-libunwind","DT_PLTGOT not found in dynamic header\n");
                  goto LAB_00121c04;
                }
                lVar15 = _Uelf64_memory_read(param_2,uVar12 + **(long **)(param_2 + 0x18),&local_c8,
                                             8,0);
                if (lVar15 != 8) goto LAB_00121c04;
                if (local_c8 == 0) goto LAB_00121fb4;
                uVar9 = uVar12 + 0x10;
              } while (local_c8 != 3);
              lVar14 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 + uVar12,
                                           &local_c0,8,0);
              if (lVar14 == 8) {
                *(long *)(param_1 + 0x20) = local_c0;
              }
            }
LAB_00121c04:
            lVar8 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 + local_100,
                                        &local_c0,8,0);
            lVar14 = local_c0;
            if (lVar8 == 8) {
              lVar8 = _Uelf64_memory_read(param_2,local_c0 + **(long **)(param_2 + 0x18),&local_e8,4
                                          ,0);
              if (lVar8 != 4) {
                log2Console(3,"Bugly-libunwind",
                            "Failed to read dwarf_eh_frame_hdr from in memory elf image.\n");
                uVar7 = 0xfffffff6;
                goto LAB_00121bac;
              }
              if (local_e8 == '\x01') {
                local_28[0] = 0;
                local_50 = 0;
                local_48 = 0;
                local_40[2] = *(undefined8 *)(param_1 + 0x20);
                local_40[0] = 0;
                local_40[1] = 0;
                local_28[1] = 0;
                local_28[2] = 0;
                local_28[3] = 0;
                uVar7 = _Uaarch64_get_accessors(*(undefined8 *)(param_2 + 8));
                local_e0 = lVar14 + **(long **)(param_2 + 0x18) + 4;
                iVar4 = FUN_00119e5c(*(undefined8 *)(param_2 + 8),uVar7,&local_e0,local_e7,&local_50
                                     ,&local_d8,*(undefined8 *)(param_2 + 0x10));
                if (iVar4 < 0) {
                  log2Console(3,"Bugly-libunwind","Failed to read encoded frame start.\n");
                  uVar7 = 0xfffffff6;
                  goto LAB_00121bac;
                }
                iVar4 = FUN_00119e5c(*(undefined8 *)(param_2 + 8),uVar7,&local_e0,local_e6,&local_50
                                     ,&local_d0,*(undefined8 *)(param_2 + 0x10));
                if (iVar4 < 0) {
                  log2Console(3,"Bugly-libunwind","Failed to read fde count.\n");
                  uVar7 = 0xfffffff6;
                  goto LAB_00121bac;
                }
                if (local_e5 != ';') {
                  log2Console(3,"Bugly-libunwind","Unsupported header table format %d\n");
                  uVar7 = 0xfffffff6;
                  goto LAB_00121bac;
                }
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(ulong *)(param_1 + 0x40) = local_d0 & 0x1fffffffffffffff;
                lVar8 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x10 + local_100,
                                            local_b8,8,0);
                if ((lVar8 == 8) &&
                   (lVar8 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 + local_100,
                                                &local_c0,8,0), lVar8 == 8)) {
                  param_5 = param_5 - local_130;
                  lVar8 = **(long **)(param_2 + 0x18);
                  *(long *)(param_1 + 0x38) = (lVar14 - local_c0) + param_5 + local_b8[0];
                  uVar7 = 1;
                  *(long *)(param_1 + 0x48) =
                       (local_e0 - (local_c0 + lVar8)) + param_5 + local_b8[0];
                  *(ulong *)(param_1 + 0x10) = param_5 + uVar11;
                  *(ulong *)(param_1 + 0x18) = param_5 + uVar13;
                  *(undefined4 *)(param_1 + 0x28) = 2;
                  goto LAB_00121bac;
                }
              }
              else {
                log2Console(3,"Bugly-libunwind","table has unexpected version %d\n",local_e8);
              }
            }
          }
          goto LAB_00121c94;
        }
      }
      log2Console(3,"Bugly-libunwind","PT_LOAD section not found.\n");
      uVar7 = 0xfffffff6;
      goto LAB_00121bac;
    }
  }
LAB_00121c94:
  uVar7 = 0xfffffff6;
LAB_00121bac:
  if (local_28[4] != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

