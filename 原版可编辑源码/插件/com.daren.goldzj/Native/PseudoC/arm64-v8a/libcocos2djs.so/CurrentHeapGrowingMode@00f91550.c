
/* v8::internal::Heap::CurrentHeapGrowingMode() */

undefined4 __thiscall v8::internal::Heap::CurrentHeapGrowingMode(Heap *this)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = 2;
  if ((((byte)this[0xad4] & 1) == 0) && (FLAG_stress_compaction == '\0')) {
    if (((FLAG_optimize_for_size == '\0') &&
        (((this[0x2e6c] == (Heap)0x0 && (this[0x2e6d] == (Heap)0x0)) && (*(int *)(this + 0xc0) == 0)
         ))) && (uVar2 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3), (uVar2 & 1) != 0
                )) {
      uVar1 = 3;
      if ((*(int *)(*(long *)(this + 0x848) + 0x18) == 0) &&
         (uVar1 = 0, *(int *)(*(long *)(this + 0x848) + 0x1c) < 1)) {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

