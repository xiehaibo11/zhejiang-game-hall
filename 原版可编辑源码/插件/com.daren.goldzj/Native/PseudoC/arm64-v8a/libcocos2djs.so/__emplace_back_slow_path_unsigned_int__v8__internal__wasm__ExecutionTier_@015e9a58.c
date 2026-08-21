
/* void std::__ndk1::vector<v8::internal::wasm::WasmCompilationUnit,
   std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>
   >::__emplace_back_slow_path<unsigned int&, v8::internal::wasm::ExecutionTier>(unsigned int&,
   v8::internal::wasm::ExecutionTier&&) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
::__emplace_back_slow_path<unsigned_int&,v8::internal::wasm::ExecutionTier>
          (vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
           *this,uint *param_1,ExecutionTier *param_2)

{
  ulong uVar1;
  uint *puVar2;
  undefined1 uVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = *(long *)(this + 0x10) - (long)__src >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0xffffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_015e9b50;
      __dest = operator_new(uVar1 << 3);
    }
    uVar3 = *param_2;
    puVar2 = (uint *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = *param_1;
    *(undefined1 *)(puVar2 + 1) = uVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(uint **)(this + 8) = puVar2 + 2;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_015e9b50:
                    /* WARNING: Subroutine does not return */
  abort();
}

