
/* v8::base::SmallVector<v8::internal::compiler::TopLevelLiveRange*, 32ul>::Grow(unsigned long) */

void __thiscall
v8::base::SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>::Grow
          (SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul> *this,ulong param_1)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul> *__src;
  size_t __n;
  
  __n = *(long *)(this + 8) - *(long *)this;
  uVar2 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if (uVar2 <= param_1) {
    uVar2 = param_1;
  }
  lVar1 = bits::RoundUpToPowerOfTwo64(uVar2);
  __dest = malloc(lVar1 << 3);
  __src = *(SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul> **)this;
  memcpy(__dest,__src,__n);
  if (__src != this + 0x18) {
    free(__src);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + ((long)__n >> 3) * 8);
  *(void **)(this + 0x10) = (void *)((long)__dest + lVar1 * 8);
  return;
}

