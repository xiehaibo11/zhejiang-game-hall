
/* v8::internal::NewSpace::MaximumCommittedMemory() */

long __thiscall v8::internal::NewSpace::MaximumCommittedMemory(NewSpace *this)

{
  return *(long *)(this + 0x128) + *(long *)(this + 0x1c8);
}

