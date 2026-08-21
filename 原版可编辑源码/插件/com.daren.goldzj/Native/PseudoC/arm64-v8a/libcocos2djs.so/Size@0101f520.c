
/* v8::internal::NewSpace::Size() */

long __thiscall v8::internal::NewSpace::Size(NewSpace *this)

{
  return (*(long *)(this + 0x68) + (long)*(int *)(this + 0x168) * 0x3fee8) -
         *(long *)(*(long *)(this + 0x160) + 0x20);
}

