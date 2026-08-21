
/* v8::internal::Heap::ShouldOptimizeForMemoryUsage() */

uint __thiscall v8::internal::Heap::ShouldOptimizeForMemoryUsage(Heap *this)

{
  uint uVar1;
  
  if ((((FLAG_optimize_for_size == '\0') && (this[0x2e6c] == (Heap)0x0)) &&
      (this[0x2e6d] == (Heap)0x0)) && (*(int *)(this + 0xc0) == 0)) {
    uVar1 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

