
/* v8::internal::wasm::NativeModule::AddCompiledCode(v8::internal::Vector<v8::internal::wasm::WasmCompilationResult>)
    */

void v8::internal::wasm::NativeModule::AddCompiledCode
               (vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                *param_1,NativeModule *param_2,long param_3,ulong param_4)

{
  int *piVar1;
  Mutex *this;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  WasmCode *pWVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  WasmCode *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar8 = 0;
  if (param_4 != 0) {
    uVar16 = (param_4 * 0x88 - 0x88) / 0x88 + 1;
    if (uVar16 < 2) {
      lVar8 = 0;
      lVar9 = param_3;
    }
    else {
      uVar12 = uVar16 & 0x3fffffffffffffe;
      lVar11 = 0;
      lVar8 = 0;
      lVar9 = param_3 + uVar12 * 0x88;
      piVar13 = (int *)(param_3 + 0x94);
      uVar14 = uVar12;
      do {
        piVar1 = piVar13 + -0x22;
        iVar4 = *piVar13;
        uVar14 = uVar14 - 2;
        piVar13 = piVar13 + 0x44;
        lVar11 = lVar11 + (int)(*piVar1 + 0x1fU & 0xffffffe0);
        lVar8 = lVar8 + (int)(iVar4 + 0x1fU & 0xffffffe0);
      } while (uVar14 != 0);
      lVar8 = lVar8 + lVar11;
      if (uVar16 == uVar12) goto LAB_012033ec;
    }
    do {
      piVar13 = (int *)(lVar9 + 0xc);
      lVar9 = lVar9 + 0x88;
      lVar8 = lVar8 + (int)(*piVar13 + 0x1fU & 0xffffffe0);
    } while (param_3 + param_4 * 0x88 != lVar9);
  }
LAB_012033ec:
  local_88 = (undefined8 *)0x0;
  lVar8 = WasmCodeAllocator::AllocateForCodeInRegion
                    (param_2,param_2,lVar8,0,0xffffffffffffffff,&local_88);
  this = (Mutex *)(param_2 + 0x110);
  base::Mutex::Lock(this);
  if (*(long **)(param_2 + 0x160) != *(long **)(param_2 + 0x168)) {
    plVar10 = *(long **)(param_2 + 0x160) + 2;
    do {
      if (((ulong)(lVar8 - plVar10[-2]) < (ulong)plVar10[-1]) &&
         ((undefined8 *)plVar10[1] != (undefined8 *)0x0)) {
        if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)*plVar10;
        }
        uVar17 = *(undefined8 *)plVar10[1];
        base::Mutex::Unlock(this);
        uVar16 = param_4 * 8;
        local_80 = (undefined8 *)0x0;
        local_78 = (undefined8 *)0x0;
        local_88 = (undefined8 *)0x0;
        local_70 = uVar15;
        uStack_68 = uVar17;
        if (param_4 != 0) {
          if (param_4 >> 0x3d != 0) goto LAB_012036d4;
          local_80 = operator_new(uVar16);
          local_78 = local_80 + param_4;
        }
        local_88 = local_80;
        if (param_4 != 0) {
          lVar8 = 0;
          do {
            lVar11 = param_3 + lVar8;
            uStack_98 = *(undefined8 *)(lVar11 + 0x78);
            local_a0 = *(void **)(lVar11 + 0x70);
            *(undefined8 *)(lVar11 + 0x70) = 0;
            uStack_a8 = *(undefined8 *)(lVar11 + 0x68);
            local_b0 = *(void **)(lVar11 + 0x60);
            *(undefined8 *)(lVar11 + 0x60) = 0;
            *(undefined8 *)(lVar11 + 0x68) = 0;
            if (2 < *(byte *)(lVar11 + 0x86)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code",(ulong)*(uint *)(lVar11 + 0x80),lVar11,
                       (ulong)*(uint *)(lVar11 + 0x58),(ulong)*(uint *)(lVar11 + 0x5c));
            }
            AddCodeWithCodeSpace(&local_90,param_2);
            pWVar5 = local_90;
            if (local_80 < local_78) {
              local_90 = (WasmCode *)0x0;
              *local_80 = pWVar5;
              local_80 = local_80 + 1;
            }
            else {
              std::__ndk1::
              vector<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>
              ::
              __emplace_back_slow_path<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>
                        ((vector<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>
                          *)&local_88,(unique_ptr *)&local_90);
            }
            FUN_012017d0(&local_90);
            pvVar7 = local_b0;
            local_b0 = (void *)0x0;
            if (pvVar7 != (void *)0x0) {
              operator_delete__(pvVar7);
            }
            pvVar7 = local_a0;
            local_a0 = (void *)0x0;
            if (pvVar7 != (void *)0x0) {
              operator_delete__(pvVar7);
            }
            lVar8 = lVar8 + 0x88;
          } while (param_4 * 0x88 - lVar8 != 0);
        }
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (param_4 != 0) {
          if (param_4 >> 0x3d != 0) {
LAB_012036d4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pvVar7 = operator_new(uVar16);
          *(void **)(param_1 + 8) = pvVar7;
          *(void **)param_1 = pvVar7;
          *(void **)(param_1 + 0x10) = (void *)((long)pvVar7 + uVar16);
        }
        base::Mutex::Lock(this);
        puVar6 = local_80;
        for (puVar3 = local_88; puVar3 != puVar6; puVar3 = puVar3 + 1) {
          local_b8 = *puVar3;
          *puVar3 = 0;
          local_90 = (WasmCode *)PublishCodeLocked(param_2,&local_b8);
          if (*(undefined8 **)(param_1 + 8) < *(undefined8 **)(param_1 + 0x10)) {
            **(undefined8 **)(param_1 + 8) = local_90;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
          }
          else {
            std::__ndk1::
            vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
            ::__push_back_slow_path<v8::internal::wasm::WasmCode*>(param_1,&local_90);
          }
          FUN_012017d0(&local_b8);
        }
        base::Mutex::Unlock(this);
        puVar6 = local_88;
        puVar3 = local_80;
        if (local_88 != (undefined8 *)0x0) {
          while (puVar3 != puVar6) {
            FUN_012017d0(puVar3 + -1);
            puVar3 = puVar3 + -1;
          }
          local_80 = puVar6;
          operator_delete(local_88);
        }
        return;
      }
      plVar2 = plVar10 + 2;
      plVar10 = plVar10 + 4;
    } while (plVar2 != *(long **)(param_2 + 0x168));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("code_addr is not part of a code space");
}

