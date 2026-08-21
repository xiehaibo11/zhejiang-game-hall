
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_dwarf_find_debug_frame
               (undefined4 param_1,long param_2,ulong param_3,undefined8 param_4,char *param_5,
               ulong param_6,ulong param_7)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *__ptr;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  void *local_a8;
  uint local_98;
  uint local_94;
  ulong local_70;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(3,"Bugly-libunwind","Trying to find .debug_frame for %s\n",param_5);
  puVar5 = _Uaarch64_local_addr_space;
  for (puVar14 = *(ulong **)(_Uaarch64_local_addr_space + 0x32a90); puVar14 != (ulong *)0x0;
      puVar14 = (ulong *)puVar14[6]) {
    log2Console(3,"Bugly-libunwind","checking %p: %lx-%lx\n",puVar14,*puVar14,puVar14[1]);
    if ((*puVar14 <= param_3) && (param_3 < puVar14[1])) goto LAB_00116184;
  }
  if (*param_5 == '\0') {
    lVar8 = FUN_0011bbe4(*(undefined8 *)(puVar5 + 0x32a98),param_3);
    if ((lVar8 == 0) || (__ptr = strdup(*(char **)(lVar8 + 0x28)), __ptr == (char *)0x0)) {
      log2Console(3,"Bugly-libunwind","tried to locate binary for 0x%lx, but no luck\n",param_3);
    }
    else {
      iVar6 = FUN_00115a30(__ptr,&local_58,&local_50,puVar5 == _Uaarch64_local_addr_space);
      if (iVar6 == 0) {
        puVar14 = malloc(0x38);
        uVar9 = *(ulong *)(puVar5 + 0x32a90);
        puVar14[2] = local_58;
        *puVar14 = param_6;
        puVar14[1] = param_7;
        puVar14[3] = local_50;
        puVar14[4] = 0;
        puVar14[6] = uVar9;
        *(ulong **)(puVar5 + 0x32a90) = puVar14;
        if (param_5 == __ptr) goto LAB_00116184;
      }
      else {
        puVar14 = (ulong *)0x0;
        if (param_5 == __ptr) goto LAB_00116270;
      }
      free(__ptr);
      if (puVar14 != (ulong *)0x0) goto LAB_00116184;
    }
  }
  else {
    iVar6 = FUN_00115a30(param_5,&local_58,&local_50,puVar5 == _Uaarch64_local_addr_space);
    if (iVar6 == 0) {
      puVar14 = malloc(0x38);
      uVar9 = *(ulong *)(puVar5 + 0x32a90);
      puVar14[2] = local_58;
      puVar14[1] = param_7;
      *puVar14 = param_6;
      puVar14[3] = local_50;
      puVar14[4] = 0;
      puVar14[6] = uVar9;
      *(ulong **)(puVar5 + 0x32a90) = puVar14;
LAB_00116184:
      log2Console(3,"Bugly-libunwind","loaded .debug_frame\n");
      uVar10 = puVar14[2];
      uVar9 = puVar14[3];
      if (uVar9 == 0) {
        log2Console(3,"Bugly-libunwind","zero-length .debug_frame\n");
      }
      else {
        if (puVar14[4] == 0) {
          local_94 = 0;
          local_98 = 0x10;
          local_70 = 0;
          lVar8 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
          local_a8 = calloc(0x10,8);
          uVar17 = 0;
          uVar16 = uVar10;
          while (uVar13 = uVar16, puVar5 = _Uaarch64_local_addr_space, uVar13 < uVar10 + uVar9) {
            uVar19 = uVar13 + 1;
            iVar6 = (**(code **)(lVar8 + 0x18))
                              (_Uaarch64_local_addr_space,uVar13 & 0xfffffffffffffff8,&local_50,0,0)
            ;
            uVar16 = local_50;
            if (-1 < iVar6) {
              uVar11 = uVar13 + 2;
              iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar19 & 0xfffffffffffffff8,&local_50,0,0);
              uVar2 = (undefined1)
                      (local_50 >>
                      ((ulong)(uint)(((int)uVar19 - (int)(uVar19 & 0xfffffffffffffff8)) * 8) & 0x3f)
                      );
              uVar19 = uVar11;
              if (-1 < iVar6) {
                uVar3 = (undefined1)
                        (uVar16 >>
                        ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) &
                        0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar4 = CONCAT11(uVar2,uVar3);
                }
                else {
                  uVar4 = CONCAT11(uVar3,uVar2);
                }
                uVar19 = uVar13 + 3;
                iVar6 = (**(code **)(lVar8 + 0x18))
                                  (puVar5,uVar11 & 0xfffffffffffffff8,&local_50,0,0);
                uVar16 = local_50;
                if (-1 < iVar6) {
                  uVar15 = uVar13 + 4;
                  iVar6 = (**(code **)(lVar8 + 0x18))
                                    (puVar5,uVar19 & 0xfffffffffffffff8,&local_50,0,0);
                  uVar2 = (undefined1)
                          (local_50 >>
                          ((ulong)(uint)(((int)uVar19 - (int)(uVar19 & 0xfffffffffffffff8)) * 8) &
                          0x3f));
                  uVar19 = uVar15;
                  if (-1 < iVar6) {
                    uVar3 = (undefined1)
                            (uVar16 >>
                            ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) &
                            0x3f));
                    if (*(int *)(puVar5 + 0x40) == 0) {
                      uVar17 = CONCAT22(CONCAT11(uVar2,uVar3),uVar4);
                    }
                    else {
                      uVar17 = CONCAT22(uVar4,CONCAT11(uVar3,uVar2));
                    }
                  }
                }
              }
            }
            puVar5 = _Uaarch64_local_addr_space;
            if (uVar17 == 0) break;
            iVar6 = (int)(uVar19 & 0xfffffffffffffff8);
            if (uVar17 == 0xffffffff) {
              uVar16 = uVar19 + 1;
              iVar7 = (**(code **)(lVar8 + 0x18))
                                (_Uaarch64_local_addr_space,uVar19 & 0xfffffffffffffff8,&local_50,0,
                                 0);
              uVar11 = local_50;
              if (iVar7 < 0) goto LAB_00116b98;
              uVar15 = uVar19 + 2;
              iVar7 = (**(code **)(lVar8 + 0x18))(puVar5,uVar16 & 0xfffffffffffffff8,&local_50,0,0);
              uVar2 = (undefined1)
                      (local_50 >>
                      ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) & 0x3f)
                      );
              if (iVar7 < 0) {
                lVar18 = 0;
                goto LAB_00116918;
              }
              uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar19 - iVar6) * 8) & 0x3f));
              if (*(int *)(puVar5 + 0x40) == 0) {
                uVar4 = CONCAT11(uVar2,uVar3);
              }
              else {
                uVar4 = CONCAT11(uVar3,uVar2);
              }
              uVar16 = uVar19 + 3;
              iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar15 & 0xfffffffffffffff8,&local_50,0,0);
              uVar11 = local_50;
              if (iVar6 < 0) {
LAB_00116b98:
                lVar18 = 0;
                uVar15 = uVar16;
              }
              else {
                iVar6 = (**(code **)(lVar8 + 0x18))
                                  (puVar5,uVar16 & 0xfffffffffffffff8,&local_50,0,0);
                uVar12 = uVar19 + 4;
                uVar2 = (undefined1)
                        (local_50 >>
                        ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) &
                        0x3f));
                uVar16 = uVar12;
                if (iVar6 < 0) goto LAB_00116b98;
                uVar3 = (undefined1)
                        (uVar11 >>
                        ((ulong)(uint)(((int)uVar15 - (int)(uVar15 & 0xfffffffffffffff8)) * 8) &
                        0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar1 = CONCAT22(CONCAT11(uVar2,uVar3),uVar4);
                }
                else {
                  uVar1 = CONCAT22(uVar4,CONCAT11(uVar3,uVar2));
                }
                uVar16 = uVar19 + 5;
                iVar6 = (**(code **)(lVar8 + 0x18))
                                  (puVar5,uVar12 & 0xfffffffffffffff8,&local_50,0,0);
                uVar11 = local_50;
                if (iVar6 < 0) goto LAB_00116b98;
                iVar6 = (**(code **)(lVar8 + 0x18))
                                  (puVar5,uVar16 & 0xfffffffffffffff8,&local_50,0,0);
                uVar15 = uVar19 + 6;
                uVar2 = (undefined1)
                        (local_50 >>
                        ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) &
                        0x3f));
                if (-1 < iVar6) {
                  uVar3 = (undefined1)
                          (uVar11 >>
                          ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) &
                          0x3f));
                  if (*(int *)(puVar5 + 0x40) == 0) {
                    uVar4 = CONCAT11(uVar2,uVar3);
                  }
                  else {
                    uVar4 = CONCAT11(uVar3,uVar2);
                  }
                  uVar16 = uVar19 + 7;
                  iVar6 = (**(code **)(lVar8 + 0x18))
                                    (puVar5,uVar15 & 0xfffffffffffffff8,&local_50,0,0);
                  uVar11 = local_50;
                  if (-1 < iVar6) {
                    uVar19 = uVar19 + 8;
                    iVar6 = (**(code **)(lVar8 + 0x18))
                                      (puVar5,uVar16 & 0xfffffffffffffff8,&local_50,0,0);
                    uVar2 = (undefined1)
                            (local_50 >>
                            ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) &
                            0x3f));
                    uVar16 = uVar19;
                    if (-1 < iVar6) {
                      uVar3 = (undefined1)
                              (uVar11 >>
                              ((ulong)(uint)(((int)uVar15 - (int)(uVar15 & 0xfffffffffffffff8)) * 8)
                              & 0x3f));
                      uVar15 = uVar19;
                      if (*(int *)(puVar5 + 0x40) == 0) {
                        lVar18 = CONCAT44(CONCAT22(CONCAT11(uVar2,uVar3),uVar4),uVar1);
                      }
                      else {
                        lVar18 = CONCAT44(uVar1,CONCAT22(uVar4,CONCAT11(uVar3,uVar2)));
                      }
                      goto LAB_00116918;
                    }
                  }
                  goto LAB_00116b98;
                }
                lVar18 = 0;
              }
LAB_00116918:
              puVar5 = _Uaarch64_local_addr_space;
              uVar16 = uVar15 + lVar18;
              iVar6 = (**(code **)(lVar8 + 0x18))
                                (_Uaarch64_local_addr_space,uVar15 & 0xfffffffffffffff8,&local_50,0,
                                 0);
              uVar19 = local_50;
              if (iVar6 < 0) {
LAB_00116b8c:
                uVar19 = 0xffffffffffffffff;
              }
              else {
                uVar11 = uVar15 + 1 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar11,&local_50,0,0);
                uVar2 = (undefined1)
                        (local_50 >> ((ulong)(uint)(((int)(uVar15 + 1) - (int)uVar11) * 8) & 0x3f));
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar3 = (undefined1)
                        (uVar19 >>
                        ((ulong)(uint)(((int)uVar15 - (int)(uVar15 & 0xfffffffffffffff8)) * 8) &
                        0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar4 = CONCAT11(uVar2,uVar3);
                }
                else {
                  uVar4 = CONCAT11(uVar3,uVar2);
                }
                uVar11 = uVar15 + 2 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar11,&local_50,0,0);
                uVar19 = local_50;
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar12 = uVar15 + 3 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar12,&local_50,0,0);
                uVar2 = (undefined1)
                        (local_50 >> ((ulong)(uint)(((int)(uVar15 + 3) - (int)uVar12) * 8) & 0x3f));
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar3 = (undefined1)
                        (uVar19 >> ((ulong)(uint)(((int)(uVar15 + 2) - (int)uVar11) * 8) & 0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar1 = CONCAT22(CONCAT11(uVar2,uVar3),uVar4);
                }
                else {
                  uVar1 = CONCAT22(uVar4,CONCAT11(uVar3,uVar2));
                }
                uVar11 = uVar15 + 4 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar11,&local_50,0,0);
                uVar19 = local_50;
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar12 = uVar15 + 5 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar12,&local_50,0,0);
                uVar2 = (undefined1)
                        (local_50 >> ((ulong)(uint)(((int)(uVar15 + 5) - (int)uVar12) * 8) & 0x3f));
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar3 = (undefined1)
                        (uVar19 >> ((ulong)(uint)(((int)(uVar15 + 4) - (int)uVar11) * 8) & 0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar4 = CONCAT11(uVar2,uVar3);
                }
                else {
                  uVar4 = CONCAT11(uVar3,uVar2);
                }
                uVar11 = uVar15 + 6 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar11,&local_50,0,0);
                uVar19 = local_50;
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar12 = uVar15 + 7 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar12,&local_50,0,0);
                uVar2 = (undefined1)
                        (local_50 >> ((ulong)(uint)(((int)(uVar15 + 7) - (int)uVar12) * 8) & 0x3f));
                if (iVar6 < 0) goto LAB_00116b8c;
                uVar3 = (undefined1)
                        (uVar19 >> ((ulong)(uint)(((int)(uVar15 + 6) - (int)uVar11) * 8) & 0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar19 = 0xffffffffffffffff;
                  local_70 = CONCAT44(CONCAT22(CONCAT11(uVar2,uVar3),uVar4),uVar1);
                }
                else {
                  uVar19 = 0xffffffffffffffff;
                  local_70 = CONCAT44(uVar1,CONCAT22(uVar4,CONCAT11(uVar3,uVar2)));
                }
              }
            }
            else {
              uVar16 = uVar19 + uVar17;
              iVar7 = (**(code **)(lVar8 + 0x18))(_Uaarch64_local_addr_space);
              uVar11 = local_50;
              if (iVar7 < 0) {
LAB_001166d4:
                local_70 = 0;
              }
              else {
                uVar15 = uVar19 + 1 & 0xfffffffffffffff8;
                iVar7 = (**(code **)(lVar8 + 0x18))(puVar5,uVar15,&local_50,0,0);
                uVar2 = (undefined1)
                        (local_50 >> ((ulong)(uint)(((int)(uVar19 + 1) - (int)uVar15) * 8) & 0x3f));
                if (iVar7 < 0) goto LAB_001166d4;
                uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar19 - iVar6) * 8) & 0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  uVar4 = CONCAT11(uVar2,uVar3);
                }
                else {
                  uVar4 = CONCAT11(uVar3,uVar2);
                }
                uVar15 = uVar19 + 2 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar15,&local_50,0,0);
                uVar11 = local_50;
                if (iVar6 < 0) goto LAB_001166d4;
                uVar12 = uVar19 + 3 & 0xfffffffffffffff8;
                iVar6 = (**(code **)(lVar8 + 0x18))(puVar5,uVar12,&local_50,0,0);
                uVar2 = (undefined1)
                        (local_50 >> ((ulong)(uint)(((int)(uVar19 + 3) - (int)uVar12) * 8) & 0x3f));
                if (iVar6 < 0) goto LAB_001166d4;
                uVar3 = (undefined1)
                        (uVar11 >> ((ulong)(uint)(((int)(uVar19 + 2) - (int)uVar15) * 8) & 0x3f));
                if (*(int *)(puVar5 + 0x40) == 0) {
                  local_70 = (ulong)CONCAT22(CONCAT11(uVar2,uVar3),uVar4);
                }
                else {
                  local_70 = (ulong)CONCAT22(uVar4,CONCAT11(uVar3,uVar2));
                }
              }
              uVar19 = 0xffffffff;
            }
            if ((uVar19 != local_70) &&
               (local_58 = uVar13,
               iVar6 = FUN_0011dd90(_Uaarch64_local_addr_space,lVar8,&local_58,&local_50,0,uVar10,0)
               , iVar6 == 0)) {
              log2Console(3,"Bugly-libunwind","start_ip = %lx, end_ip = %lx\n",local_50,local_48);
              uVar19 = local_50;
              if (local_94 == local_98) {
                local_98 = local_94 << 1;
                local_a8 = realloc(local_a8,(ulong)local_98 << 3);
              }
              uVar11 = (ulong)local_94;
              local_94 = local_94 + 1;
              *(int *)((long)local_a8 + uVar11 * 8 + 4) = (int)uVar13 - (int)uVar10;
              *(int *)((long)local_a8 + uVar11 * 8) = (int)uVar19;
            }
          }
          if (local_94 < local_98) {
            local_a8 = realloc(local_a8,(ulong)local_94 << 3);
          }
          qsort(local_a8,(ulong)local_94,8,FUN_00115a14);
          puVar14[4] = (ulong)local_a8;
          puVar14[5] = (ulong)local_94;
        }
        uVar9 = *puVar14;
        *(ulong *)(param_2 + 0x18) = puVar14[1];
        *(ulong *)(param_2 + 0x10) = uVar9;
        *(undefined8 *)(param_2 + 0x38) = param_4;
        *(undefined4 *)(param_2 + 0x28) = 1;
        *(char **)(param_2 + 0x30) = param_5;
        *(ulong **)(param_2 + 0x48) = puVar14;
        *(undefined8 *)(param_2 + 0x40) = 7;
        log2Console(3,"Bugly-libunwind",
                    "found debug_frame table `%s\': segbase=0x%lx, len=%lu, gp=0x%lx, table_data=0x%lx\n"
                    ,param_5,param_4,7,*(undefined8 *)(param_2 + 0x20),puVar14);
        param_1 = 1;
      }
      goto LAB_00116214;
    }
  }
LAB_00116270:
  log2Console(3,"Bugly-libunwind","couldn\'t load .debug_frame\n");
LAB_00116214:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

