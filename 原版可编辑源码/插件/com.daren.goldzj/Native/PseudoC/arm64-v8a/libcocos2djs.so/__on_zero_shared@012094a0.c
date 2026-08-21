
/* std::__ndk1::__shared_ptr_emplace<v8::internal::wasm::SignatureMap,
   std::__ndk1::allocator<v8::internal::wasm::SignatureMap> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::wasm::SignatureMap,std::__ndk1::allocator<v8::internal::wasm::SignatureMap>>
::__on_zero_shared(__shared_ptr_emplace<v8::internal::wasm::SignatureMap,std::__ndk1::allocator<v8::internal::wasm::SignatureMap>>
                   *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x30);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

