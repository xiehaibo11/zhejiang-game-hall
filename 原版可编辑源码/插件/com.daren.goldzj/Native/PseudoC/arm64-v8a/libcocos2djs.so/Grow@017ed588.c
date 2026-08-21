
/* v8::base::SmallVector<v8::internal::wasm::LiftoffRegister, 8ul>::Grow(unsigned long) */

void __thiscall
v8::base::SmallVector<v8::internal::wasm::LiftoffRegister,8ul>::Grow
          (SmallVector<v8::internal::wasm::LiftoffRegister,8ul> *this,ulong param_1)

{
  size_t __size;
  void *__dest;
  ulong uVar1;
  size_t __n;
  SmallVector<v8::internal::wasm::LiftoffRegister,8ul> *__src;
  
  __n = *(long *)(this + 8) - *(long *)this;
  uVar1 = (*(long *)(this + 0x10) - *(long *)this) * 2;
  if (uVar1 < param_1 || uVar1 - param_1 == 0) {
    uVar1 = param_1;
  }
  __size = bits::RoundUpToPowerOfTwo64(uVar1);
  __dest = malloc(__size);
  __src = *(SmallVector<v8::internal::wasm::LiftoffRegister,8ul> **)this;
  memcpy(__dest,__src,__n);
  if (__src != this + 0x18) {
    free(__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = (long)__dest + __n;
  *(size_t *)(this + 0x10) = (long)__dest + __size;
  return;
}

