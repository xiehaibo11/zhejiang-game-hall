
/* std::__ndk1::vector<v8::internal::wasm::WasmImport,
   std::__ndk1::allocator<v8::internal::wasm::WasmImport> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmImport,std::__ndk1::allocator<v8::internal::wasm::WasmImport>>::
reserve(vector<v8::internal::wasm::WasmImport,std::__ndk1::allocator<v8::internal::wasm::WasmImport>>
        *this,ulong param_1)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)__src >> 3) * -0x5555555555555555) < param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __n = *(long *)(this + 8) - (long)__src;
    __dest = operator_new(param_1 * 0x18);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(size_t *)(this + 8) = (long)__dest + __n;
    *(void **)(this + 0x10) = (void *)((long)__dest + param_1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

