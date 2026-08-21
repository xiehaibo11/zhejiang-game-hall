
/* void std::__ndk1::vector<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> > >
   >::__emplace_back_slow_path<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> >
   >(std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>
::
__emplace_back_slow_path<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>
          (vector<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>
           *this,unique_ptr *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar10 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3d == 0) {
    lVar3 = *(long *)(this + 0x10) - *(long *)this;
    uVar6 = lVar3 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_01204b54;
      pvVar2 = operator_new(uVar1 << 3);
    }
    uVar7 = *(undefined8 *)param_1;
    puVar4 = (undefined8 *)((long)pvVar2 + lVar10 * 8);
    *(undefined8 *)param_1 = 0;
    puVar5 = puVar4 + 1;
    *puVar4 = uVar7;
    puVar9 = *(undefined8 **)this;
    puVar8 = *(undefined8 **)(this + 8);
    puVar11 = puVar9;
    if (puVar8 != puVar9) {
      do {
        puVar8 = puVar8 + -1;
        uVar7 = *puVar8;
        *puVar8 = 0;
        puVar4 = puVar4 + -1;
        *puVar4 = uVar7;
      } while (puVar9 != puVar8);
      puVar9 = *(undefined8 **)(this + 8);
      puVar11 = *(undefined8 **)this;
    }
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar5;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 8);
    while (puVar9 != puVar11) {
      puVar9 = puVar9 + -1;
      FUN_012017d0(puVar9);
    }
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
      return;
    }
    return;
  }
LAB_01204b54:
                    /* WARNING: Subroutine does not return */
  abort();
}

