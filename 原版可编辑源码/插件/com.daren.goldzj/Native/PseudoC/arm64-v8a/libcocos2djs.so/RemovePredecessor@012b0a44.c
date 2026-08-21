
/* v8::internal::compiler::BasicBlock::RemovePredecessor(unsigned long) */

void __thiscall
v8::internal::compiler::BasicBlock::RemovePredecessor(BasicBlock *this,ulong param_1)

{
  void *__dest;
  size_t __n;
  
  __dest = (void *)(*(long *)(this + 0x80) + param_1 * 8);
  __n = *(long *)(this + 0x88) - ((long)__dest + 8);
  if (__n != 0) {
    memmove(__dest,(void *)((long)__dest + 8),__n);
  }
  *(void **)(this + 0x88) = (void *)((long)__dest + ((long)__n >> 3) * 8);
  return;
}

