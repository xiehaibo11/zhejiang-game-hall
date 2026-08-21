
/* void std::__ndk1::vector<v8::internal::wasm::ThreadImpl,
   std::__ndk1::allocator<v8::internal::wasm::ThreadImpl>
   >::__emplace_back_slow_path<v8::internal::Zone*&, v8::internal::wasm::CodeMap*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>&>(v8::internal::Zone*&,
   v8::internal::wasm::CodeMap*&&, v8::internal::Handle<v8::internal::WasmInstanceObject>&) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::ThreadImpl,std::__ndk1::allocator<v8::internal::wasm::ThreadImpl>>::
__emplace_back_slow_path<v8::internal::Zone*&,v8::internal::wasm::CodeMap*,v8::internal::Handle<v8::internal::WasmInstanceObject>&>
          (vector<v8::internal::wasm::ThreadImpl,std::__ndk1::allocator<v8::internal::wasm::ThreadImpl>>
           *this,Zone **param_1,CodeMap **param_2,Handle *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  Zone *pZVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  pvVar13 = *(void **)this;
  pvVar11 = *(void **)(this + 8);
  lVar6 = (long)pvVar11 - (long)pvVar13 >> 3;
  uVar1 = lVar6 * -0x79435e50d79435e5 + 1;
  if (uVar1 < 0x1af286bca1af287) {
    lVar8 = *(long *)(this + 0x10) - (long)pvVar13 >> 3;
    uVar9 = lVar8 * 0xd79435e50d79436;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0xd79435e50d7942 < (ulong)(lVar8 * -0x79435e50d79435e5)) {
      uVar1 = 0x1af286bca1af286;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x1af286bca1af286 < uVar1) goto LAB_01242c64;
      pvVar4 = operator_new(uVar1 * 0x98);
    }
    lVar8 = *(long *)param_3;
    puVar5 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
    pZVar7 = *param_1;
    *puVar5 = *param_2;
    uVar3 = *(uint *)(lVar8 + 4);
    puVar5[9] = 0;
    puVar5[10] = pZVar7;
    puVar5[0x12] = pZVar7;
    puVar5[1] = (ulong)uVar3 << 0x20;
    puVar5[2] = lVar8;
    puVar2 = puVar5 + 0x13;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    puVar5[0xc] = 0x80000000;
    *(undefined4 *)(puVar5 + 0xd) = 0xc;
    *(undefined2 *)((long)puVar5 + 0x6c) = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    if (pvVar11 != pvVar13) {
      lVar6 = 0;
      do {
        uVar14 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x90);
        uVar10 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x98);
        lVar8 = lVar6 + -0x98;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x88) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x88);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x90) = uVar14;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x98) = uVar10;
        uVar10 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x80);
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x80) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x80) = uVar10;
        uVar15 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x70);
        uVar14 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x78);
        uVar10 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x68);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x58) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x50) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x70) = uVar15;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x78) = uVar14;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x68) = uVar10;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x60) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x48) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x48);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x60) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x60);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x58) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x58);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x50) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x50);
        uVar14 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x38);
        uVar10 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x40);
        uVar16 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x28);
        uVar15 = *(undefined8 *)((long)pvVar11 + lVar6 + -0x30);
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x60) = 0;
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x58) = 0;
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x50) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x38) = uVar14;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x40) = uVar10;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x28) = uVar16;
        *(undefined8 *)((long)puVar5 + lVar6 + -0x30) = uVar15;
        *(undefined8 *)((long)puVar5 + lVar6 + -8) = *(undefined8 *)((long)pvVar11 + lVar6 + -8);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x20) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x20);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x18) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x18);
        *(undefined8 *)((long)puVar5 + lVar6 + -0x10) =
             *(undefined8 *)((long)pvVar11 + lVar6 + -0x10);
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)pvVar11 + lVar6 + -0x10) = 0;
        lVar6 = lVar8;
      } while ((long)pvVar13 - (long)pvVar11 != lVar8);
      pvVar11 = *(void **)this;
      pvVar13 = *(void **)(this + 8);
      puVar5 = (undefined8 *)((long)puVar5 + lVar8);
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x98);
    while (pvVar13 != pvVar11) {
      if (*(long *)((long)pvVar13 + -0x20) != 0) {
        *(long *)((long)pvVar13 + -0x18) = *(long *)((long)pvVar13 + -0x20);
      }
      if (*(long *)((long)pvVar13 + -0x60) != 0) {
        *(long *)((long)pvVar13 + -0x58) = *(long *)((long)pvVar13 + -0x60);
      }
      pvVar4 = *(void **)((long)pvVar13 + -0x80);
      pvVar12 = (void *)((long)pvVar13 + -0x98);
      *(undefined8 *)((long)pvVar13 + -0x80) = 0;
      pvVar13 = pvVar12;
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
LAB_01242c64:
                    /* WARNING: Subroutine does not return */
  abort();
}

