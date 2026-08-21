
/* v8::internal::ReadOnlyHeapObjectIterator::Next() */

ulong __thiscall v8::internal::ReadOnlyHeapObjectIterator::Next(ReadOnlyHeapObjectIterator *this)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong local_8;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 == 0) {
LAB_00fff874:
    local_8 = 0;
  }
  else {
    puVar3 = *(uint **)(this + 0x10);
    while( true ) {
      while( true ) {
        puVar4 = puVar3;
        if (puVar3 == *(uint **)(lVar2 + 0x28)) {
          lVar2 = *(long *)(lVar2 + 0xe0);
          *(long *)(this + 8) = lVar2;
          if (lVar2 == 0) goto LAB_00fff874;
          puVar4 = *(uint **)(lVar2 + 0x20);
          *(uint **)(this + 0x10) = puVar4;
        }
        if ((puVar4 != *(uint **)(*(long *)this + 0x68)) ||
           (puVar3 = *(uint **)(*(long *)this + 0x70), puVar4 == puVar3)) break;
        *(uint **)(this + 0x10) = puVar3;
      }
      local_8 = (long)puVar4 + 1;
      iVar1 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_8,local_8 & 0xffffffff00000000 | (ulong)*puVar4);
      puVar3 = (uint *)(*(long *)(this + 0x10) + (long)iVar1);
      *(uint **)(this + 0x10) = puVar3;
      if ((*(ushort *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) | 1) !=
          0xa1) break;
      lVar2 = *(long *)(this + 8);
    }
  }
  return local_8;
}

