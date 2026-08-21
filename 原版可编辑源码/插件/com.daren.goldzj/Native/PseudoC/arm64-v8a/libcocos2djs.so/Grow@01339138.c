
/* v8::base::SmallVector<v8::internal::wasm::ValueBase, 8ul>::Grow(unsigned long) */

void __thiscall
v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
          (SmallVector<v8::internal::wasm::ValueBase,8ul> *this,ulong param_1)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  SmallVector<v8::internal::wasm::ValueBase,8ul> *__src;
  size_t __n;
  
  __n = *(long *)(this + 8) - *(long *)this;
  uVar2 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if (uVar2 <= param_1) {
    uVar2 = param_1;
  }
  lVar1 = bits::RoundUpToPowerOfTwo64(uVar2);
  __dest = malloc(lVar1 << 4);
  __src = *(SmallVector<v8::internal::wasm::ValueBase,8ul> **)this;
  memcpy(__dest,__src,__n);
  if (__src != this + 0x18) {
    free(__src);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + ((long)__n >> 4) * 0x10);
  *(void **)(this + 0x10) = (void *)((long)__dest + lVar1 * 0x10);
  return;
}

