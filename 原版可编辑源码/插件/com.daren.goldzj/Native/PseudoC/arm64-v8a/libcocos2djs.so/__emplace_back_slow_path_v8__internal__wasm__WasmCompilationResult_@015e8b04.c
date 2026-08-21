
/* void std::__ndk1::vector<v8::internal::wasm::WasmCompilationResult,
   std::__ndk1::allocator<v8::internal::wasm::WasmCompilationResult>
   >::__emplace_back_slow_path<v8::internal::wasm::WasmCompilationResult>(v8::internal::wasm::WasmCompilationResult&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCompilationResult,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationResult>>
::__emplace_back_slow_path<v8::internal::wasm::WasmCompilationResult>
          (vector<v8::internal::wasm::WasmCompilationResult,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationResult>>
           *this,WasmCompilationResult *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 * -0xf0f0f0f0f0f0f0f + 1;
  if (uVar1 < 0x1e1e1e1e1e1e1e2) {
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * -0x1e1e1e1e1e1e1e1e;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xf0f0f0f0f0f0ef < (ulong)(lVar6 * -0xf0f0f0f0f0f0f0f)) {
      uVar1 = 0x1e1e1e1e1e1e1e1;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x1e1e1e1e1e1e1e1 < uVar1) goto LAB_015e8d18;
      pvVar4 = operator_new(uVar1 * 0x88);
    }
    uVar9 = *(undefined8 *)param_1;
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = (undefined8 *)((long)pvVar4 + lVar8 * 8);
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    *puVar5 = uVar9;
    puVar5[3] = uVar14;
    puVar5[2] = uVar13;
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    puVar5[7] = *(undefined8 *)(param_1 + 0x38);
    puVar5[6] = uVar9;
    puVar5[9] = uVar14;
    puVar5[8] = uVar13;
    puVar5[5] = uVar16;
    puVar5[4] = uVar15;
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    puVar5[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar5[10] = uVar9;
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    puVar5[0xd] = *(undefined8 *)(param_1 + 0x68);
    puVar5[0xc] = uVar9;
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    puVar5[0xf] = *(undefined8 *)(param_1 + 0x78);
    puVar5[0xe] = uVar9;
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)((long)puVar5 + 0x83) = *(undefined4 *)(param_1 + 0x83);
    *(undefined4 *)(puVar5 + 0x10) = uVar3;
    pvVar11 = *(void **)this;
    pvVar10 = *(void **)(this + 8);
    puVar2 = puVar5 + 0x11;
    pvVar12 = pvVar11;
    if (pvVar10 != pvVar11) {
      lVar8 = 0;
      do {
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x88);
        lVar6 = lVar8 + -0x88;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x80) =
             *(undefined8 *)((long)pvVar10 + lVar8 + -0x80);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x88) = uVar9;
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x48);
        uVar14 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x50);
        uVar13 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x58);
        uVar16 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x60);
        uVar15 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x68);
        uVar18 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x70);
        uVar17 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x78);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x40) =
             *(undefined8 *)((long)pvVar10 + lVar8 + -0x40);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x48) = uVar9;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x50) = uVar14;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x58) = uVar13;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x60) = uVar16;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x68) = uVar15;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x70) = uVar18;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x78) = uVar17;
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x38);
        *(undefined8 *)((long)pvVar10 + lVar8 + -0x38) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x38) = uVar9;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x30) =
             *(undefined8 *)((long)pvVar10 + lVar8 + -0x30);
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x28);
        *(undefined8 *)((long)pvVar10 + lVar8 + -0x28) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x28) = uVar9;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x20) =
             *(undefined8 *)((long)pvVar10 + lVar8 + -0x20);
        uVar9 = *(undefined8 *)((long)pvVar10 + lVar8 + -0x18);
        *(undefined8 *)((long)pvVar10 + lVar8 + -0x18) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x18) = uVar9;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x10) =
             *(undefined8 *)((long)pvVar10 + lVar8 + -0x10);
        uVar3 = *(undefined4 *)((long)pvVar10 + lVar8 + -8);
        *(undefined4 *)((long)puVar5 + lVar8 + -5) = *(undefined4 *)((long)pvVar10 + lVar8 + -5);
        *(undefined4 *)((long)puVar5 + lVar8 + -8) = uVar3;
        lVar8 = lVar6;
      } while ((long)pvVar11 - (long)pvVar10 != lVar6);
      pvVar11 = *(void **)this;
      puVar5 = (undefined8 *)((long)puVar5 + lVar6);
      pvVar12 = *(void **)(this + 8);
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x88);
    while (pvVar12 != pvVar11) {
      pvVar4 = *(void **)((long)pvVar12 + -0x18);
      *(undefined8 *)((long)pvVar12 + -0x18) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
      }
      pvVar4 = *(void **)((long)pvVar12 + -0x28);
      *(undefined8 *)((long)pvVar12 + -0x28) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
      }
      pvVar4 = *(void **)((long)pvVar12 + -0x38);
      pvVar10 = (void *)((long)pvVar12 + -0x88);
      *(undefined8 *)((long)pvVar12 + -0x38) = 0;
      pvVar12 = pvVar10;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
      }
    }
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
      return;
    }
    return;
  }
LAB_015e8d18:
                    /* WARNING: Subroutine does not return */
  abort();
}

