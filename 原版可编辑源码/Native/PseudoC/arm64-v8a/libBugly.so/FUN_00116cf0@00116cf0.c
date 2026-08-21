
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116cf0(long *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  uVar15 = param_3[2];
  local_8 = ___stack_chk_guard;
  puVar18 = (ulong *)param_3[1];
  uVar20 = *param_3;
  if (param_2 < 0x1a) {
    uVar9 = 0xffffffff;
    goto LAB_00116e54;
  }
  uVar13 = (ulong)*(ushort *)(param_1 + 3);
  piVar6 = (int *)param_1[2];
  lVar21 = *param_1;
  if (uVar13 != 0) {
    uVar19 = 0;
    piVar22 = (int *)0x0;
    piVar14 = (int *)0x0;
    uVar1 = 0;
    piVar17 = (int *)0x0;
    do {
      while (uVar11 = uVar1, iVar5 = *piVar6, iVar5 == 1) {
        uVar1 = lVar21 + *(long *)(piVar6 + 4);
        if ((uVar1 <= uVar20) && (uVar20 < uVar1 + *(long *)(piVar6 + 10))) {
          piVar22 = piVar6;
        }
        plVar7 = (long *)(piVar6 + 8);
        piVar6 = piVar6 + 0xe;
        if (uVar19 < uVar1 + *plVar7) {
          uVar19 = uVar1 + *plVar7;
        }
        uVar1 = uVar11 + 1;
        piVar16 = piVar17;
        if (uVar11 + 1 == uVar13) goto LAB_00116dd8;
      }
      piVar16 = piVar6;
      if ((iVar5 != 0x6474e550) && (piVar16 = piVar17, iVar5 == 2)) {
        piVar14 = piVar6;
      }
      piVar6 = piVar6 + 0xe;
      uVar1 = uVar11 + 1;
      piVar17 = piVar16;
    } while (uVar11 + 1 != uVar13);
LAB_00116dd8:
    uVar11 = uVar11 + 1;
    if (piVar22 != (int *)0x0) {
      if (piVar16 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        if (piVar14 == (int *)0x0) {
          uVar13 = 0;
          param_3[7] = 0;
LAB_00116e18:
          lVar10 = *(long *)(piVar16 + 4);
          puVar18[4] = uVar13;
          cVar2 = *(char *)(lVar21 + lVar10);
        }
        else {
          plVar7 = (long *)(lVar21 + *(long *)(piVar14 + 4));
          lVar10 = *(long *)(lVar21 + *(long *)(piVar14 + 4));
          while (lVar10 != 0) {
            if (lVar10 == 3) {
              uVar13 = plVar7[1];
              param_3[7] = uVar13;
              goto LAB_00116e18;
            }
            plVar7 = plVar7 + 2;
            lVar10 = *plVar7;
          }
          lVar10 = *(long *)(piVar16 + 4);
          puVar18[4] = param_3[7];
          cVar2 = *(char *)(lVar21 + lVar10);
        }
        if (cVar2 != '\x01') {
          log2Console(3,"Bugly-libunwind","table `%s\' has unexpected version %d\n",param_1[1],cVar2
                     );
          uVar9 = 0;
          goto LAB_00116e54;
        }
        uVar13 = lVar21 + lVar10;
        uVar8 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
        local_28 = uVar13 + 4;
        uVar9 = FUN_00119e5c(_Uaarch64_local_addr_space,uVar8,&local_28,*(undefined1 *)(uVar13 + 1),
                             puVar18,&local_20,0);
        if (((int)uVar9 < 0) ||
           (uVar9 = FUN_00119e5c(_Uaarch64_local_addr_space,uVar8,&local_28,
                                 *(undefined1 *)(uVar13 + 2),puVar18,&local_18,0), (int)uVar9 < 0))
        goto LAB_00116e54;
        if (*(char *)(uVar13 + 3) == ';') {
          lVar10 = *(long *)(piVar22 + 4);
          lVar12 = *(long *)(piVar22 + 10);
          uVar15 = param_1[1];
          *(undefined4 *)(param_3 + 8) = 2;
          param_3[6] = lVar21 + lVar10 + lVar12;
          param_3[9] = uVar15;
          param_3[5] = lVar21 + lVar10;
          param_3[0xc] = local_28;
          param_3[0xb] = local_18 & 0x1fffffffffffffff;
          param_3[10] = uVar13;
          log2Console(3,"Bugly-libunwind",
                      "found table `%s\': segbase=0x%lx, len=%lu, gp=0x%lx, table_data=0x%lx\n",
                      uVar15,uVar13,local_18 & 0x1fffffffffffffff,param_3[7]);
          lVar21 = *param_1;
          uVar11 = (ulong)*(ushort *)(param_1 + 3);
          uVar4 = 1;
        }
        else {
          if (*(char *)(uVar13 + 3) == -1) {
            log2Console(3,"Bugly-libunwind","table `%s\' lacks search table; doing linear search\n",
                        param_1[1]);
          }
          else {
            log2Console(3,"Bugly-libunwind","table `%s\' has encoding 0x%x; doing linear search\n",
                        param_1[1]);
          }
          if (*(char *)(uVar13 + 2) == -1) {
            local_18 = 0xffffffffffffffff;
          }
          uVar1 = local_18;
          if (*(char *)(uVar13 + 1) == -1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined4 *)((long)param_3 + 0x14) = 1;
          puVar3 = _Uaarch64_local_addr_space;
          uVar13 = 0;
          uVar9 = _Uaarch64_get_accessors(_Uaarch64_local_addr_space);
          local_10 = local_20;
          while( true ) {
            uVar11 = local_10;
            if (((uVar13 == uVar1) || (uVar19 <= local_10)) ||
               (iVar5 = FUN_0011dd90(puVar3,uVar9,&local_10,puVar18,0,0,0), iVar5 < 0))
            goto LAB_001170c0;
            if ((*puVar18 <= uVar20) && (uVar20 < puVar18[1])) break;
            uVar13 = uVar13 + 1;
          }
          if (((int)uVar15 == 0) ||
             (local_10 = uVar11,
             iVar5 = FUN_0011dd90(puVar3,uVar9,&local_10,puVar18,(int)uVar15,0,0), -1 < iVar5)) {
            lVar21 = *param_1;
            uVar4 = 1;
            uVar11 = (ulong)*(ushort *)(param_1 + 3);
            goto LAB_00117010;
          }
LAB_001170c0:
          lVar21 = *param_1;
          uVar4 = 0;
          uVar11 = (ulong)*(ushort *)(param_1 + 3);
        }
      }
LAB_00117010:
      if (uVar11 == 0) {
        uVar13 = 0;
        uVar15 = 0xffffffffffffffff;
      }
      else {
        uVar13 = 0;
        piVar14 = (int *)param_1[2] + uVar11 * 0xe;
        uVar15 = 0xffffffffffffffff;
        piVar6 = (int *)param_1[2];
        do {
          while (*piVar6 != 1) {
            piVar6 = piVar6 + 0xe;
            if (piVar6 == piVar14) goto LAB_00117074;
          }
          piVar17 = piVar6 + 0xe;
          uVar19 = lVar21 + *(long *)(piVar6 + 4);
          if (uVar19 < uVar15) {
            uVar15 = uVar19;
          }
          if (uVar13 < uVar19 + *(long *)(piVar6 + 10)) {
            uVar13 = uVar19 + *(long *)(piVar6 + 10);
          }
          piVar6 = piVar17;
        } while (piVar17 != piVar14);
      }
LAB_00117074:
      uVar9 = _Uaarch64_dwarf_find_debug_frame
                        (uVar4,param_3 + 0xd,uVar20,lVar21,param_1[1],uVar15,uVar13);
      goto LAB_00116e54;
    }
  }
  uVar9 = 0;
LAB_00116e54:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

