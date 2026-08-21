
/* v8::internal::Heap::EnableInlineAllocation() */

void __thiscall v8::internal::Heap::EnableInlineAllocation(Heap *this)

{
  if (this[0x5e0] != (Heap)0x0) {
    this[0x5e0] = (Heap)0x0;
                    /* WARNING: Could not recover jumptable at 0x00f88684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xe8) + 0x88))(*(long **)(this + 0xe8),0);
    return;
  }
  return;
}

