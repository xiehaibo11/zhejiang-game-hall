
/* v8::internal::Heap::UpdateMaximumCommitted() */

void __thiscall v8::internal::Heap::UpdateMaximumCommitted(Heap *this)

{
  ulong uVar1;
  
  if ((*(long *)(this + 0xe8) != 0) &&
     (uVar1 = CommittedMemory(this), *(ulong *)(this + 0x90) < uVar1)) {
    *(ulong *)(this + 0x90) = uVar1;
  }
  return;
}

