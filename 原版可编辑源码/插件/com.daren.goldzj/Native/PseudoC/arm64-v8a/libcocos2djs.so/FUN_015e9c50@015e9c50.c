
/* WARNING: Removing unreachable block (ram,0x015e9cf0) */

void FUN_015e9c50(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,long param_7)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  Mutex *this;
  void *__dest;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  int *piVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  void *__src;
  size_t __n;
  ulong uVar28;
  Mutex *local_e0;
  ulong local_a0;
  int local_98 [2];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined8 local_78;
  long lStack_70;
  int local_68 [2];
  
  if (param_5 != 0 || param_3 != 0) {
    plVar1 = param_1 + 0x1a;
    lVar27 = *(long *)(*param_1 + 200);
    iVar12 = (int)param_1[0x1a];
    lVar6 = param_1[7];
    iVar13 = (int)*plVar1;
    iVar8 = (int)((ulong)(param_1[8] - lVar6) >> 5) * -0x55555555;
    iVar21 = 0;
    if (iVar12 + 1 != iVar8) {
      iVar21 = iVar12 + 1;
    }
    if (iVar13 != iVar12) {
      ClearExclusiveLocal();
      iVar21 = iVar13;
      goto LAB_015e9d00;
    }
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *(int *)plVar1 = iVar21;
      cVar10 = ExclusiveMonitorsStatus();
    }
    while (iVar21 = iVar13, cVar10 != '\0') {
LAB_015e9d00:
      while( true ) {
        iVar13 = (int)*plVar1;
        iVar5 = 0;
        if (iVar21 + 1 != iVar8) {
          iVar5 = iVar21 + 1;
        }
        if (iVar13 == iVar21) break;
        ClearExclusiveLocal();
        iVar21 = iVar13;
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar12 = iVar21;
      if (bVar11) {
        *(int *)plVar1 = iVar5;
        cVar10 = ExclusiveMonitorsStatus();
      }
    }
    this = (Mutex *)(lVar6 + (long)iVar12 * 0x60);
    v8::base::Mutex::Lock(this);
    piVar19 = local_98;
    bVar11 = false;
    local_90 = param_2;
    local_88 = param_3;
    local_e0 = (Mutex *)0x0;
    local_98[0] = 0;
    local_78 = param_4;
    lStack_70 = param_5;
    local_80 = 1;
    do {
      lVar17 = *(long *)(piVar19 + 4);
      if (lVar17 != 0) {
        lVar14 = (long)*piVar19;
        puVar26 = *(ulong **)(piVar19 + 2);
        plVar1 = param_1 + lVar14 + 0x18;
        do {
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = *plVar1 + lVar17;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        puVar4 = puVar26 + lVar17;
        lVar17 = lVar6 + (long)iVar12 * 0x60 + lVar14 * 0x18;
        plVar1 = param_1 + lVar14 * 4 + 0x10;
        puVar2 = (ulong *)(param_1 + lVar14 * 4 + 0x11);
        plVar3 = (long *)(lVar17 + 0x30);
        do {
          local_a0 = *puVar26;
          uVar7 = *(uint *)(*(long *)(lVar27 + 0x88) + ((long)(local_a0 << 0x20) >> 0x1b) + 0x14);
          if (uVar7 < 0x1001) {
            if ((ulong *)*plVar3 == *(ulong **)(lVar17 + 0x38)) {
              std::__ndk1::
              vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
              ::__push_back_slow_path<v8::internal::wasm::WasmCompilationUnit_const&>
                        ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                          *)(lVar17 + 0x28),(WasmCompilationUnit *)&local_a0);
            }
            else {
              *(ulong *)*plVar3 = local_a0;
              *plVar3 = *plVar3 + 8;
            }
          }
          else {
            if (!bVar11) {
              v8::base::Mutex::Lock((Mutex *)(param_1 + 10));
              bVar11 = true;
              local_e0 = (Mutex *)(param_1 + 10);
            }
            *(undefined1 *)((long)param_1 + lVar14 + 0x78) = 1;
            puVar18 = (ulong *)*puVar2;
            puVar15 = (ulong *)param_1[lVar14 * 4 + 0x12];
            if (puVar18 < puVar15) {
              *puVar18 = (ulong)uVar7;
              puVar18[1] = local_a0;
              puVar15 = (ulong *)(*puVar2 + 0x10);
              *puVar2 = (ulong)puVar15;
            }
            else {
              __src = (void *)*plVar1;
              __n = (long)puVar18 - (long)__src;
              uVar20 = ((long)__n >> 4) + 1;
              if (uVar20 >> 0x3c != 0) {
LAB_015ea070:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar16 = (long)puVar15 - (long)__src;
              uVar24 = lVar16 >> 3;
              if (uVar20 <= uVar24) {
                uVar20 = uVar24;
              }
              if (0x7fffffffffffffe < (ulong)(lVar16 >> 4)) {
                uVar20 = 0xfffffffffffffff;
              }
              if (uVar20 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar20 >> 0x3c != 0) goto LAB_015ea070;
                __dest = operator_new(uVar20 << 4);
              }
              puVar15 = (ulong *)((long)__dest + ((long)__n >> 4) * 0x10);
              *puVar15 = (ulong)uVar7;
              puVar15[1] = local_a0;
              puVar15 = puVar15 + 2;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
                __src = (void *)*plVar1;
              }
              *plVar1 = (long)__dest;
              *puVar2 = (ulong)puVar15;
              param_1[lVar14 * 4 + 0x12] = (long)((long)__dest + uVar20 * 0x10);
              if (__src != (void *)0x0) {
                operator_delete(__src);
                puVar15 = (ulong *)*puVar2;
              }
            }
            lVar16 = *plVar1;
            if (0x10 < (long)puVar15 - lVar16) {
              uVar20 = (ulong)((long)puVar15 - lVar16) >> 4;
              lVar22 = uVar20 - 2;
              lVar23 = uVar20 - 1;
              if (-1 < lVar22) {
                lVar23 = lVar22;
              }
              lVar23 = lVar23 >> 1;
              puVar18 = (ulong *)(lVar16 + lVar23 * 0x10);
              uVar20 = puVar15[-2];
              if (*puVar18 < uVar20) {
                uVar24 = puVar15[-1];
                puVar15 = puVar15 + -2;
                do {
                  puVar25 = puVar18;
                  uVar28 = *puVar25;
                  puVar15[1] = puVar25[1];
                  *puVar15 = uVar28;
                  if (lVar23 == 0) break;
                  if (-1 < lVar23 + -1) {
                    lVar23 = lVar23 + -1;
                  }
                  lVar23 = lVar23 >> 1;
                  puVar18 = (ulong *)(lVar16 + lVar23 * 0x10);
                  puVar15 = puVar25;
                } while (*puVar18 < uVar20);
                *puVar25 = uVar20;
                puVar25[1] = uVar24;
              }
            }
          }
          puVar26 = puVar26 + 1;
        } while (puVar26 != puVar4);
      }
      piVar19 = piVar19 + 6;
    } while (piVar19 != local_68);
    if (bVar11) {
      v8::base::Mutex::Unlock(local_e0);
    }
    v8::base::Mutex::Unlock(this);
  }
  std::__ndk1::
  vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
  ::insert<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*>
            ((vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
              *)(param_1 + 0x1d),param_1[0x1e],param_6,param_6 + param_7 * 0x10);
  FUN_015e84a8(param_1);
  return;
}

