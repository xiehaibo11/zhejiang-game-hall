
/* void std::__ndk1::vector<v8::internal::wasm::WasmCompilationHint,
   std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>
   >::__push_back_slow_path<v8::internal::wasm::WasmCompilationHint>(v8::internal::wasm::WasmCompilationHint&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCompilationHint,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>>
::__push_back_slow_path<v8::internal::wasm::WasmCompilationHint>
          (vector<v8::internal::wasm::WasmCompilationHint,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationHint>>
           *this,WasmCompilationHint *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = __n * -0x5555555555555555 + 1;
  if (uVar1 < 0x5555555555555556) {
    uVar5 = (*(long *)(this + 0x10) - (long)__src) * 0x5555555555555556;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)((*(long *)(this + 0x10) - (long)__src) * -0x5555555555555555))
    {
      uVar1 = 0x5555555555555555;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x5555555555555555 < uVar1) goto LAB_015f59b8;
      pvVar4 = operator_new(uVar1 * 3);
    }
    uVar3 = *(undefined2 *)param_1;
    puVar2 = (undefined2 *)((long)pvVar4 + __n);
    *(WasmCompilationHint *)(puVar2 + 1) = param_1[2];
    *puVar2 = uVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar2 - __n);
    *(long *)(this + 8) = (long)puVar2 + 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 3);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_015f59b8:
                    /* WARNING: Subroutine does not return */
  abort();
}

