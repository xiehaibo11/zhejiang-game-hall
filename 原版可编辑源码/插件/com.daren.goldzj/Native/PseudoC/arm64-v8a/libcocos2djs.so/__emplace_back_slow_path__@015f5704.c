
/* void std::__ndk1::vector<v8::internal::wasm::WasmDataSegment,
   std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment> >::__emplace_back_slow_path<>() */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmDataSegment,std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment>>
::__emplace_back_slow_path<>
          (vector<v8::internal::wasm::WasmDataSegment,std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment>>
           *this)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar3 = *(long *)(this + 0x10) - (long)__src >> 4;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x3fffffffffffffe < (ulong)(*(long *)(this + 0x10) - (long)__src >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) goto LAB_015f57e4;
      __dest = operator_new(uVar1 << 5);
    }
    puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 5) * 0x20);
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined4 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_015f57e4:
                    /* WARNING: Subroutine does not return */
  abort();
}

