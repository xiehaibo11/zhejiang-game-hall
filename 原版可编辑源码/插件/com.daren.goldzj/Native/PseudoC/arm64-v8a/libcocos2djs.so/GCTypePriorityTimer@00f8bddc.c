
/* v8::internal::Heap::GCTypePriorityTimer(v8::internal::GarbageCollector) */

long __thiscall v8::internal::Heap::GCTypePriorityTimer(Heap *this,uint param_2)

{
  char cVar1;
  long lVar2;
  
  if ((param_2 & 0xfffffffd) == 0) {
    lVar2 = *(long *)(*(long *)(this + 0x30) + 0x9520);
    if (*(char *)(*(long *)(this + 0x30) + 0xb6bc) != '\0') {
      return lVar2 + 0xdf0;
    }
    return lVar2 + 0xe20;
  }
  if (*(int *)(*(long *)(this + 0x828) + 0x58) == 0) {
    lVar2 = *(long *)(*(long *)(this + 0x30) + 0x9520);
    if (*(char *)(*(long *)(this + 0x30) + 0xb6bc) != '\0') {
      return lVar2 + 0xc40;
    }
    return lVar2 + 0xc70;
  }
  cVar1 = *(char *)(*(long *)(this + 0x30) + 0xb6bc);
  lVar2 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  if (((byte)this[0xad4] & 1) != 0) {
    if (cVar1 != '\0') {
      return lVar2 + 0xd60;
    }
    return lVar2 + 0xd90;
  }
  if (cVar1 != '\0') {
    return lVar2 + 0xcd0;
  }
  return lVar2 + 0xd00;
}

