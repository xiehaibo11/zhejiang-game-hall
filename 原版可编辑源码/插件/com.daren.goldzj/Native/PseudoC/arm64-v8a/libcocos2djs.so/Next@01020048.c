
/* v8::internal::SemiSpaceObjectIterator::Next() */

ulong __thiscall v8::internal::SemiSpaceObjectIterator::Next(SemiSpaceObjectIterator *this)

{
  int iVar1;
  uint *puVar2;
  ulong local_8;
  
  puVar2 = *(uint **)(this + 8);
  do {
    if (puVar2 == *(uint **)(this + 0x10)) {
      return 0;
    }
    if (((ulong)puVar2 & 0x3ffff) == 0) {
      puVar2 = *(uint **)(*(long *)(((ulong)(puVar2 + -1) & 0xfffffffffffc0000) + 0xe0) + 0x20);
      *(uint **)(this + 8) = puVar2;
      if (puVar2 == *(uint **)(this + 0x10)) {
        return 0;
      }
    }
    local_8 = (long)puVar2 + 1;
    iVar1 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_8,local_8 & 0xffffffff00000000 | (ulong)*puVar2);
    puVar2 = (uint *)(*(long *)(this + 8) + (long)iVar1);
    *(uint **)(this + 8) = puVar2;
  } while ((*(ushort *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) | 1) ==
           0xa1);
  return local_8;
}

