
/* v8::internal::Heap::GCTypeTimer(v8::internal::GarbageCollector) */

long __thiscall v8::internal::Heap::GCTypeTimer(Heap *this,uint param_2)

{
  if ((param_2 & 0xfffffffd) == 0) {
    return *(long *)(*(long *)(this + 0x30) + 0x9520) + 0xdc0;
  }
  if (*(int *)(*(long *)(this + 0x828) + 0x58) != 0) {
    if (((byte)this[0xad4] & 1) == 0) {
      return *(long *)(*(long *)(this + 0x30) + 0x9520) + 0xca0;
    }
    return *(long *)(*(long *)(this + 0x30) + 0x9520) + 0xd30;
  }
  return *(long *)(*(long *)(this + 0x30) + 0x9520) + 0xc10;
}

