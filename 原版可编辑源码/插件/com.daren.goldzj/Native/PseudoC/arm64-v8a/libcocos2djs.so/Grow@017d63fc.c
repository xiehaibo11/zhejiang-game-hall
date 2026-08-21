
/* v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState, 8ul>::Grow(unsigned long)
    */

void __thiscall
v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
          (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this,ulong param_1)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *__src;
  size_t __n;
  
  __n = *(long *)(this + 8) - *(long *)this;
  uVar2 = (*(long *)(this + 0x10) - *(long *)this >> 2) * 0x5555555555555556;
  if (uVar2 < param_1 || uVar2 - param_1 == 0) {
    uVar2 = param_1;
  }
  lVar1 = bits::RoundUpToPowerOfTwo64(uVar2);
  __dest = malloc(lVar1 * 0xc);
  __src = *(SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> **)this;
  memcpy(__dest,__src,__n);
  if (__src != this + 0x18) {
    free(__src);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + ((long)__n >> 2) * 4);
  *(void **)(this + 0x10) = (void *)((long)__dest + lVar1 * 0xc);
  return;
}

