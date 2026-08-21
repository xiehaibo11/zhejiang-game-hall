
void _Uaarch64_dwarf_find_unwind_table
               (long param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5,
               ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  long local_180;
  long local_178;
  ulong local_170;
  ulong local_168;
  long local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  ulong local_148;
  undefined8 local_140;
  ulong uStack_138;
  ulong local_130 [3];
  long alStack_118 [5];
  char local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  char local_ed;
  long local_e8;
  long local_e0;
  long local_d8 [5];
  char *local_b0 [4];
  long local_90 [3];
  ushort local_78 [4];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*param_2 == '\0') goto LAB_001242c4;
  if (param_2[2] != '\0') {
    lVar20 = *(long *)(param_2 + 8);
    if ((ulong)*(ushort *)(lVar20 + 0x38) != 0) {
      uVar19 = 0;
      piVar21 = (int *)(lVar20 + *(long *)(lVar20 + 0x20));
      piVar11 = (int *)0x0;
      uVar13 = 0;
      piVar15 = (int *)0x0;
      uVar17 = 0xffffffffffffffff;
      piVar23 = (int *)0x0;
      do {
        iVar5 = *piVar21;
        piVar12 = piVar11;
        uVar14 = uVar13;
        piVar16 = piVar15;
        uVar18 = uVar17;
        piVar24 = piVar21;
        if (((iVar5 != 0x6474e550) && (piVar12 = piVar21, piVar24 = piVar23, iVar5 != 2)) &&
           (piVar12 = piVar11, iVar5 == 1)) {
          uVar1 = *(ulong *)(piVar21 + 4);
          uVar18 = uVar1;
          if (uVar17 <= uVar1) {
            uVar18 = uVar17;
          }
          uVar14 = *(long *)(piVar21 + 10) + uVar1;
          if (*(long *)(piVar21 + 10) + uVar1 <= uVar13) {
            uVar14 = uVar13;
          }
          piVar16 = piVar21;
          if (*(ulong *)(piVar21 + 2) != param_6) {
            piVar16 = piVar15;
          }
        }
        uVar19 = uVar19 + 1;
        piVar21 = piVar21 + 0xe;
        piVar11 = piVar12;
        uVar13 = uVar14;
        piVar15 = piVar16;
        uVar17 = uVar18;
        piVar23 = piVar24;
      } while (uVar19 < *(ushort *)(lVar20 + 0x38));
      if (piVar16 != (int *)0x0) {
        param_5 = param_5 - *(long *)(piVar16 + 4);
        if (piVar24 == (int *)0x0) {
LAB_001242fc:
          uVar9 = 0;
LAB_00124300:
          uVar9 = _Uaarch64_dwarf_find_debug_frame
                            (uVar9,param_1 + 0x50,param_7,param_5,param_4,param_5 + uVar18,
                             param_5 + uVar14);
          goto LAB_001242c8;
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        if (piVar12 != (int *)0x0) {
          plVar4 = (long *)(*(long *)(param_2 + 8) + *(long *)(piVar12 + 2));
          do {
            plVar3 = plVar4;
            if (*(ulong *)(param_2 + 0x10) <=
                (ulong)((0x10 - *(long *)(param_2 + 8)) + (long)plVar3)) goto LAB_0012419c;
            if (*plVar3 == 0) goto LAB_0012419c;
            plVar4 = plVar3 + 2;
          } while (*plVar3 != 3);
          *(long *)(param_1 + 0x20) = plVar3[1];
        }
LAB_0012419c:
        pcVar10 = (char *)(*(long *)(param_2 + 8) + *(long *)(piVar24 + 2));
        if (*pcVar10 == '\x01') {
          uVar9 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
          local_b0[0] = pcVar10 + 4;
          alStack_118[3] = 0;
          alStack_118[0] = 0;
          alStack_118[2] = 0;
          alStack_118[1] = 0;
          uStack_138 = 0;
          local_140 = 0;
          local_130[1] = 0;
          local_130[0] = 0;
          local_130[2] = *(undefined8 *)(param_1 + 0x20);
          iVar5 = FUN_0011cb4c(_Uaarch64_local_addr_space,uVar9,local_b0,pcVar10[1],&local_140,
                               &local_e8,0);
          if ((-1 < iVar5) &&
             (iVar5 = FUN_0011cb4c(_Uaarch64_local_addr_space,uVar9,local_b0,pcVar10[2],&local_140,
                                   &local_148,0), -1 < iVar5)) {
            if (pcVar10[3] != ';') goto LAB_001242fc;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x28) = 2;
            *(ulong *)(param_1 + 0x10) = param_5 + uVar18;
            *(ulong *)(param_1 + 0x18) = param_5 + uVar14;
            uVar9 = 1;
            *(ulong *)(param_1 + 0x40) = local_148 & 0x1fffffffffffffff;
            *(char **)(param_1 + 0x48) =
                 local_b0[0] +
                 (((*(long *)(piVar24 + 4) + param_5) - *(long *)(param_2 + 8)) -
                 *(long *)(piVar24 + 2));
            *(char **)(param_1 + 0x38) =
                 pcVar10 + (((*(long *)(piVar24 + 4) + param_5) - *(long *)(param_2 + 8)) -
                           *(long *)(piVar24 + 2));
            goto LAB_00124300;
          }
        }
        else {
          log2Console(3,"Bugly-libunwind","table `%s\' has unexpected version %d\n",param_4);
        }
        goto LAB_001242c4;
      }
    }
    uVar9 = 0;
    goto LAB_001242c8;
  }
  lVar20 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x20,local_90,8,0);
  if ((lVar20 != 8) ||
     (lVar20 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x38,local_78,2,0),
     lVar20 != 2)) goto LAB_001242c4;
  if (local_78[0] == 0) {
LAB_00124178:
    pcVar10 = "PT_LOAD section not found.\n";
LAB_00124188:
    log2Console(3,"Bugly-libunwind",pcVar10);
  }
  else {
    uVar22 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    lVar20 = local_90[0];
    uVar19 = 0xffffffffffffffff;
    do {
      lVar6 = _Uelf64_memory_read(param_2,lVar20 + **(long **)(param_2 + 0x18),&local_140,4,0);
      if (lVar6 != 4) goto LAB_001242c4;
      uVar13 = uVar19;
      lVar6 = local_180;
      lVar8 = lVar20;
      uVar17 = local_170;
      lVar7 = local_160;
      if ((((int)local_140 != 0x6474e550) &&
          (lVar6 = lVar20, lVar8 = local_178, (int)local_140 != 2)) &&
         (lVar6 = local_180, (int)local_140 == 1)) {
        lVar6 = _Uelf64_memory_read(param_2,lVar20 + **(long **)(param_2 + 0x18) + 0x10,local_130,8,
                                    0);
        if (lVar6 != 8) goto LAB_001242c4;
        uVar13 = local_130[0];
        if (uVar19 <= local_130[0]) {
          uVar13 = uVar19;
        }
        lVar7 = _Uelf64_memory_read(param_2,lVar20 + **(long **)(param_2 + 0x18) + 0x28,alStack_118,
                                    8,0);
        lVar6 = alStack_118[0];
        uVar19 = local_130[0];
        if ((lVar7 != 8) ||
           (lVar7 = _Uelf64_memory_read(param_2,lVar20 + **(long **)(param_2 + 0x18) + 8,&uStack_138
                                        ,8,0), lVar7 != 8)) goto LAB_001242c4;
        uVar18 = lVar6 + uVar19;
        if (lVar6 + uVar19 <= local_168) {
          uVar18 = local_168;
        }
        lVar6 = local_180;
        uVar17 = local_130[0];
        local_168 = uVar18;
        lVar7 = lVar20;
        if (uStack_138 != param_6) {
          uVar17 = local_170;
          lVar7 = local_160;
        }
      }
      local_160 = lVar7;
      local_170 = uVar17;
      local_178 = lVar8;
      local_180 = lVar6;
      uVar22 = uVar22 + 1;
      lVar20 = lVar20 + 0x38;
      uVar19 = uVar13;
    } while (uVar22 < local_78[0]);
    if (local_160 == 0) goto LAB_00124178;
    if (local_178 != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      if ((local_180 != 0) &&
         (lVar20 = _Uelf64_memory_read(param_2,local_180 + **(long **)(param_2 + 0x18) + 8,
                                       &uStack_138,8,0), lVar20 == 8)) {
        lVar20 = **(long **)(param_2 + 0x18);
        lVar6 = (*(long **)(param_2 + 0x18))[1];
        uVar19 = uStack_138;
        do {
          uVar17 = uVar19 + 0x10;
          if ((ulong)(lVar6 - lVar20) <= uVar17) {
LAB_00124318:
            log2Console(3,"Bugly-libunwind","DT_PLTGOT not found in dynamic header\n");
            goto LAB_00124330;
          }
          lVar8 = _Uelf64_memory_read(param_2,uVar19 + **(long **)(param_2 + 0x18),&local_e8,8,0);
          if (lVar8 != 8) goto LAB_00124330;
          if (local_e8 == 0) goto LAB_00124318;
          uVar19 = uVar17;
        } while (local_e8 != 3);
        lVar20 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + uVar17 + -8,&local_e0,8,0
                                    );
        if (lVar20 == 8) {
          *(long *)(param_1 + 0x20) = local_e0;
        }
      }
LAB_00124330:
      lVar6 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + local_178 + 8,&local_e0,8,0)
      ;
      lVar20 = local_e0;
      if (lVar6 != 8) goto LAB_001242c4;
      lVar6 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + local_e0,&local_f0,4,0);
      if (lVar6 == 4) {
        if (local_f0 != '\x01') {
          pcVar10 = "table has unexpected version %d\n";
LAB_0012450c:
          log2Console(3,"Bugly-libunwind",pcVar10);
          goto LAB_001242c4;
        }
        alStack_118[3] = 0;
        alStack_118[0] = 0;
        alStack_118[2] = 0;
        alStack_118[1] = 0;
        uStack_138 = 0;
        local_140 = 0;
        local_130[1] = 0;
        local_130[0] = 0;
        local_130[2] = *(undefined8 *)(param_1 + 0x20);
        uVar9 = _Uaarch64_get_accessors(*(undefined8 *)(param_2 + 8));
        local_148 = **(long **)(param_2 + 0x18) + lVar20 + 4;
        iVar5 = FUN_0011cb4c(*(undefined8 *)(param_2 + 8),uVar9,&local_148,local_ef,&local_140,
                             auStack_150,*(undefined8 *)(param_2 + 0x10));
        if (iVar5 < 0) {
          pcVar10 = "Failed to read encoded frame start.\n";
        }
        else {
          iVar5 = FUN_0011cb4c(*(undefined8 *)(param_2 + 8),uVar9,&local_148,local_ee,&local_140,
                               &local_158,*(undefined8 *)(param_2 + 0x10));
          if (-1 < iVar5) {
            if (local_ed == ';') {
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(ulong *)(param_1 + 0x40) = local_158 & 0x1fffffffffffffff;
              lVar6 = _Uelf64_memory_read(param_2,local_178 + **(long **)(param_2 + 0x18) + 0x10,
                                          local_d8,8,0);
              if ((lVar6 == 8) &&
                 (lVar6 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + local_178 + 8,
                                              &local_e0,8,0), lVar6 == 8)) {
                param_5 = param_5 - local_170;
                lVar6 = **(long **)(param_2 + 0x18);
                *(long *)(param_1 + 0x38) = (local_d8[0] + param_5 + lVar20) - local_e0;
                *(ulong *)(param_1 + 0x10) = uVar13 + param_5;
                *(ulong *)(param_1 + 0x18) = local_168 + param_5;
                *(undefined4 *)(param_1 + 0x28) = 2;
                *(ulong *)(param_1 + 0x48) =
                     ((local_d8[0] + param_5 + local_148) - lVar6) - local_e0;
                uVar9 = 1;
                goto LAB_001242c8;
              }
              goto LAB_001242c4;
            }
            pcVar10 = "Unsupported header table format %d\n";
            goto LAB_0012450c;
          }
          pcVar10 = "Failed to read fde count.\n";
        }
      }
      else {
        pcVar10 = "Failed to read dwarf_eh_frame_hdr from in memory elf image.\n";
      }
      goto LAB_00124188;
    }
  }
LAB_001242c4:
  uVar9 = 0xfffffff6;
LAB_001242c8:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

