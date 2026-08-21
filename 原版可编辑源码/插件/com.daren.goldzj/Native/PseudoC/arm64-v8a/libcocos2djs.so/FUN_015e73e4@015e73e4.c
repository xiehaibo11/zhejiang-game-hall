
undefined1  [16] FUN_015e73e4(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  Mutex *pMVar18;
  long lVar19;
  ulong uVar20;
  Mutex *pMVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined2 local_94;
  undefined1 local_92;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    uVar8 = 1;
    if (*(long *)(param_1 + 200) == 0) {
      uVar8 = 2;
    }
    if (((param_3 ^ 1) & 1) < uVar8) goto LAB_015e7800;
  }
  else {
    uVar8 = 0;
  }
  lVar16 = (long)param_2;
  uVar20 = (ulong)uVar8;
  do {
    plVar6 = (long *)(param_1 + 0x38);
    lVar23 = *plVar6;
    if ((*(byte *)((long)plVar6 + uVar20 + 0x40) & 1) == 0) {
      uVar22 = 0;
      uVar17 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_8c = 0;
    }
    else {
      v8::base::Mutex::Lock((Mutex *)(param_1 + 0x50));
      lVar11 = param_1 + uVar20 * 0x20;
      plVar10 = (long *)(lVar11 + 0x88);
      puVar14 = (ulong *)*plVar10;
      plVar12 = (long *)(lVar11 + 0x80);
      puVar9 = (ulong *)*plVar12;
      if (puVar9 == puVar14) {
        uVar22 = 0;
        uVar17 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_8c = 0;
      }
      else {
        uVar17 = puVar9[1];
        lVar11 = (long)puVar14 - (long)puVar9;
        if (0x10 < lVar11) {
          uVar13 = puVar9[1];
          uVar22 = *puVar9;
          uStack_84 = (undefined4)(uVar13 >> 0x20);
          local_90 = (undefined4)uVar22;
          uVar7 = puVar14[-2];
          puVar9[1] = puVar14[-1];
          *puVar9 = uVar7;
          puVar14[-1] = uVar13;
          puVar14[-2] = uVar22;
          if (lVar11 != 0x20) {
            lVar11 = lVar11 >> 4;
            lVar19 = lVar11 + -2;
            if (-1 < lVar11 + -3) {
              lVar19 = lVar11 + -3;
            }
            if (lVar11 + -1 < 3) {
              uVar22 = 1;
              puVar14 = puVar9 + 2;
            }
            else {
              bVar4 = puVar9[4] <= puVar9[2];
              puVar14 = puVar9 + 4;
              if (bVar4) {
                puVar14 = puVar9 + 2;
              }
              uVar22 = 1;
              if (!bVar4) {
                uVar22 = 2;
              }
            }
            uVar7 = *puVar9;
            if (uVar7 <= *puVar14) {
              uVar13 = puVar9[1];
              puVar5 = puVar9;
              do {
                puVar15 = puVar14;
                uVar24 = *puVar15;
                puVar5[1] = puVar15[1];
                *puVar5 = uVar24;
                if (lVar19 >> 1 < (long)uVar22) break;
                uVar24 = uVar22 << 1 | 1;
                puVar5 = puVar9 + uVar24 * 2;
                puVar14 = puVar5;
                uVar22 = uVar24;
                if (((long)(uVar24 + 1) < lVar11 + -1) &&
                   (puVar14 = puVar5 + 2, uVar22 = uVar24 + 1, puVar5[2] <= *puVar5)) {
                  puVar14 = puVar5;
                  uVar22 = uVar24;
                }
                puVar5 = puVar15;
              } while (uVar7 <= *puVar14);
              *puVar15 = uVar7;
              puVar15[1] = uVar13;
            }
          }
        }
        lVar11 = *plVar10;
        *plVar10 = lVar11 + -0x10;
        if (*plVar12 == lVar11 + -0x10) {
          *(undefined1 *)((long)plVar6 + uVar20 + 0x40) = 0;
        }
        local_90 = CONCAT31(local_90._1_3_,1);
        uStack_8c = (undefined4)uVar17;
        uStack_88 = (undefined4)(uVar17 >> 0x20);
        uVar22 = CONCAT44(uStack_8c,local_90);
        uVar17 = uVar17 >> 0x20;
      }
      v8::base::Mutex::Unlock((Mutex *)(param_1 + 0x50));
    }
    if ((uVar22 & 0xff) != 0) {
LAB_015e781c:
      uVar7 = uVar22 & 0xffffff0000000000;
      plVar6 = (long *)(param_1 + (uVar20 & 0xffffffff) * 8 + 0xc0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar20 = uVar22 & 0xff00000000;
      uVar13 = uVar22 & 0xffffff00;
      uVar22 = uVar22 & 0xff;
      goto LAB_015e7844;
    }
    pMVar18 = (Mutex *)(lVar23 + lVar16 * 0x60);
    v8::base::Mutex::Lock(pMVar18);
    lVar11 = *(long *)(pMVar18 + uVar20 * 0x18 + 0x30);
    if (*(long *)(pMVar18 + uVar20 * 0x18 + 0x28) != lVar11) {
      puVar9 = (ulong *)(lVar11 + -8);
      uVar17 = *puVar9;
      *(ulong **)(pMVar18 + uVar20 * 0x18 + 0x30) = puVar9;
      local_a0 = CONCAT31((int3)(uVar22 >> 8),1);
      uStack_9c = (undefined4)uVar17;
      v8::base::Mutex::Unlock(pMVar18);
      uVar22 = CONCAT44(uStack_9c,local_a0);
      uVar17 = uVar17 >> 0x20;
      goto LAB_015e781c;
    }
    iVar2 = *(int *)(lVar23 + lVar16 * 0x60 + 0x58);
    v8::base::Mutex::Unlock(pMVar18);
    lVar23 = *(long *)(param_1 + 0x38);
    lVar11 = *(long *)(param_1 + 0x40);
    if (lVar11 - lVar23 != 0) {
      lVar19 = (lVar11 - lVar23 >> 5) * -0x5555555555555555;
      do {
        if (iVar2 != param_2) {
          pMVar18 = (Mutex *)(lVar23 + (long)iVar2 * 0x60);
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          local_90 = 0;
          uStack_8c = 0;
          v8::base::Mutex::Lock(pMVar18);
          pMVar21 = pMVar18 + uVar20 * 0x18 + 0x30;
          lVar23 = *(long *)(pMVar18 + uVar20 * 0x18 + 0x28);
          if (lVar23 == *(long *)pMVar21) {
            uStack_68 = 0;
            local_70 = 0;
            uStack_6c = 0;
            v8::base::Mutex::Unlock(pMVar18);
            uVar17 = 0;
          }
          else {
            puVar9 = (ulong *)(lVar23 + (*(long *)pMVar21 - lVar23 >> 1 & 0xfffffffffffffff8U));
            uVar17 = *puVar9;
            std::__ndk1::
            vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
            ::assign<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>>
                      ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                        *)&local_90,puVar9 + 1);
            if (puVar9 != *(ulong **)pMVar21) {
              *(ulong **)pMVar21 = puVar9;
            }
            v8::base::Mutex::Unlock(pMVar18);
            pMVar18 = (Mutex *)(*(long *)(param_1 + 0x38) + lVar16 * 0x60);
            v8::base::Mutex::Lock(pMVar18);
            std::__ndk1::
            vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
            ::insert<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmCompilationUnit*>>
                      ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                        *)(pMVar18 + uVar20 * 0x18 + 0x28),
                       *(undefined8 *)(pMVar18 + uVar20 * 0x18 + 0x30),CONCAT44(uStack_8c,local_90),
                       CONCAT44(uStack_84,uStack_88));
            iVar1 = 0;
            if (iVar2 + 1 !=
                (int)((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 5) *
                -0x55555555) {
              iVar1 = iVar2 + 1;
            }
            *(int *)(pMVar18 + 0x58) = iVar1;
            local_70 = CONCAT31(local_70._1_3_,1);
            *(undefined2 *)((ulong)&local_70 | 1) = local_94;
            *(undefined1 *)((undefined2 *)((ulong)&local_70 | 1) + 1) = local_92;
            uStack_6c = (undefined4)uVar17;
            uStack_68 = (undefined4)(uVar17 >> 0x20);
            v8::base::Mutex::Unlock(pMVar18);
            uVar17 = uVar17 >> 0x20;
            if ((void *)CONCAT44(uStack_8c,local_90) != (void *)0x0) {
              uStack_88 = local_90;
              uStack_84 = uStack_8c;
              operator_delete((void *)CONCAT44(uStack_8c,local_90));
            }
          }
          uVar22 = CONCAT44(uStack_6c,local_70);
          if ((local_70 & 0xff) != 0) goto LAB_015e781c;
          lVar23 = *(long *)(param_1 + 0x38);
          lVar11 = *(long *)(param_1 + 0x40);
        }
        lVar19 = lVar19 + -1;
        iVar1 = 0;
        if (iVar2 + 1 != (int)((ulong)(lVar11 - lVar23) >> 5) * -0x55555555) {
          iVar1 = iVar2 + 1;
        }
        iVar2 = iVar1;
      } while (lVar19 != 0);
    }
    bVar4 = uVar20 < ((ulong)(param_3 ^ 1) & 1);
    uVar20 = uVar20 + 1;
  } while (bVar4);
LAB_015e7800:
  uVar20 = 0;
  uVar7 = 0;
  uVar17 = 0;
  uVar13 = 0;
  uVar22 = 0;
LAB_015e7844:
  auVar25._0_8_ = uVar7 | uVar20 | uVar13 | uVar22;
  auVar25._8_8_ = uVar17;
  return auVar25;
}

