
/* v8::internal::NewSpace::CommittedMemory() */

long __thiscall v8::internal::NewSpace::CommittedMemory(NewSpace *this)

{
  return *(long *)(this + 0x120) + *(long *)(this + 0x1c0);
}

