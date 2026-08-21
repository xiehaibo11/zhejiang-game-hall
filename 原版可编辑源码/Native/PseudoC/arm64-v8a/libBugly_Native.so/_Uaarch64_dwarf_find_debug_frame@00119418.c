
undefined4
_Uaarch64_dwarf_find_debug_frame
          (undefined4 param_1,long param_2,ulong param_3,undefined8 param_4,char *param_5,
          ulong param_6,ulong param_7)

{
  uint *puVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  size_t __nmemb;
  ulong uVar16;
  ulong local_f8;
  uint local_ec;
  void *local_e8;
  uint local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  ulong local_80;
  uint local_74;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  log2Console(3,"Bugly-libunwind","Trying to find .debug_frame for %s\n",param_5);
  puVar6 = _Uaarch64_local_addr_space;
  puVar2 = (ulong *)(_Uaarch64_local_addr_space + 0x32a90);
  for (puVar13 = (ulong *)*puVar2; puVar13 != (ulong *)0x0; puVar13 = (ulong *)puVar13[6]) {
    log2Console(3,"Bugly-libunwind","checking %p: %lx-%lx\n",puVar13,*puVar13,puVar13[1]);
    if ((*puVar13 <= param_3) && (param_3 < puVar13[1])) goto LAB_00119530;
  }
  pcVar9 = param_5;
  if ((*param_5 == '\0') &&
     ((lVar10 = FUN_0011eab4(*(undefined8 *)(puVar6 + 0x32a98),param_3), lVar10 == 0 ||
      (pcVar9 = strdup(*(char **)(lVar10 + 0x28)), pcVar9 == (char *)0x0)))) {
    log2Console(3,"Bugly-libunwind","tried to locate binary for 0x%lx, but no luck\n",param_3);
LAB_001197f4:
    pcVar9 = "couldn\'t load .debug_frame\n";
  }
  else {
    iVar7 = FUN_0011a50c(pcVar9,&local_c8,&local_70,_Uaarch64_local_addr_space == puVar6);
    if (iVar7 == 0) {
      puVar13 = malloc(0x38);
      *puVar13 = param_6;
      puVar13[1] = param_7;
      puVar13[2] = CONCAT44(uStack_c4,local_c8);
      puVar13[3] = local_70;
      puVar13[4] = 0;
      puVar13[6] = *puVar2;
      *puVar2 = (ulong)puVar13;
    }
    else {
      puVar13 = (ulong *)0x0;
    }
    if (pcVar9 != param_5) {
      free(pcVar9);
    }
    if (puVar13 == (ulong *)0x0) goto LAB_001197f4;
LAB_00119530:
    local_74 = 0;
    log2Console(3,"Bugly-libunwind","loaded .debug_frame\n");
    uVar11 = puVar13[3];
    if (uVar11 != 0) {
      if (puVar13[4] == 0) {
        uVar12 = puVar13[2];
        local_70 = uVar12;
        uVar8 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
        local_e8 = calloc(0x10,8);
        if ((long)uVar11 < 1) {
          local_ec = 0;
LAB_00119860:
          __nmemb = (size_t)local_ec;
          local_e8 = realloc(local_e8,__nmemb << 3);
        }
        else {
          local_ec = 0;
          local_f8 = 0x10;
          uVar14 = 0;
          uVar16 = uVar12;
          do {
            FUN_0011991c(_Uaarch64_local_addr_space,uVar8,&local_70,&local_74,0);
            puVar6 = _Uaarch64_local_addr_space;
            if (local_74 == 0xffffffff) {
              iVar7 = FUN_0011991c(_Uaarch64_local_addr_space,uVar8,&local_70,&local_c8,0);
              if ((iVar7 < 0) ||
                 (iVar7 = FUN_0011991c(puVar6,uVar8,&local_70,&local_80,0), iVar7 < 0)) {
                lVar10 = 0;
              }
              else {
                uVar4 = local_c8;
                uVar5 = (uint)local_80;
                if (*(int *)(puVar6 + 0x40) != 0) {
                  uVar4 = (uint)local_80;
                  uVar5 = local_c8;
                }
                lVar10 = CONCAT44(uVar5,uVar4);
              }
              puVar6 = _Uaarch64_local_addr_space;
              uVar15 = local_70 + lVar10;
              iVar7 = FUN_0011991c(_Uaarch64_local_addr_space,uVar8,&local_70,&local_c8,0);
              if ((-1 < iVar7) &&
                 (iVar7 = FUN_0011991c(puVar6,uVar8,&local_70,&local_80,0), -1 < iVar7)) {
                uVar4 = (uint)local_80;
                uVar5 = local_c8;
                if (*(int *)(puVar6 + 0x40) != 0) {
                  uVar4 = local_c8;
                  uVar5 = (uint)local_80;
                }
                uVar14 = CONCAT44(uVar4,uVar5);
              }
              if (uVar14 != 0xffffffffffffffff) goto LAB_001196e8;
            }
            else {
              if (local_74 == 0) break;
              local_c8 = 0;
              uVar15 = local_70 + local_74;
              FUN_0011991c(_Uaarch64_local_addr_space,uVar8,&local_70,&local_c8,0);
              uVar14 = (ulong)local_c8;
              if (uVar14 != 0xffffffff) {
LAB_001196e8:
                local_80 = uVar16;
                iVar7 = FUN_00120b5c(_Uaarch64_local_addr_space,uVar8,&local_80,&local_c8,0,uVar12,0
                                    );
                if (iVar7 == 0) {
                  log2Console(3,"Bugly-libunwind","start_ip = %lx, end_ip = %lx\n",
                              CONCAT44(uStack_c4,local_c8),uStack_c0);
                  uVar4 = local_c8;
                  if (local_ec == (uint)local_f8) {
                    local_f8 = (ulong)(local_ec << 1);
                    local_e8 = realloc(local_e8,local_f8 << 3);
                  }
                  puVar1 = (uint *)((long)local_e8 + (ulong)local_ec * 8);
                  local_ec = local_ec + 1;
                  *puVar1 = uVar4;
                  puVar1[1] = (int)uVar16 - (int)uVar12;
                }
              }
            }
            uVar16 = uVar15;
            local_70 = uVar15;
          } while (uVar15 < uVar12 + uVar11);
          if (local_ec < (uint)local_f8) goto LAB_00119860;
          __nmemb = (size_t)local_ec;
        }
        qsort(local_e8,__nmemb,8,FUN_00119ad0);
        puVar13[4] = (ulong)local_e8;
        puVar13[5] = __nmemb;
      }
      param_1 = 1;
      *(undefined4 *)(param_2 + 0x28) = 1;
      uVar12 = puVar13[1];
      uVar11 = *puVar13;
      *(undefined8 *)(param_2 + 0x40) = 7;
      *(ulong **)(param_2 + 0x48) = puVar13;
      *(ulong *)(param_2 + 0x18) = uVar12;
      *(ulong *)(param_2 + 0x10) = uVar11;
      *(char **)(param_2 + 0x30) = param_5;
      *(undefined8 *)(param_2 + 0x38) = param_4;
      log2Console(3,"Bugly-libunwind",
                  "found debug_frame table `%s\': segbase=0x%lx, len=%lu, gp=0x%lx, table_data=0x%lx\n"
                  ,param_5,param_4,7,*(undefined8 *)(param_2 + 0x20),puVar13);
      goto LAB_001198e0;
    }
    pcVar9 = "zero-length .debug_frame\n";
  }
  log2Console(3,"Bugly-libunwind",pcVar9);
LAB_001198e0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

