
/* v8::internal::PagedSpaceObjectIterator::Next() */

ulong __thiscall v8::internal::PagedSpaceObjectIterator::Next(PagedSpaceObjectIterator *this)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong local_8;
  
  puVar4 = *(uint **)(this + 0x10);
  puVar3 = *(uint **)(this + 8);
  if (*(uint **)(this + 8) != puVar4) goto LAB_01017fbc;
LAB_01018038:
  do {
    do {
      lVar1 = *(long *)(this + 0x38);
      if (*(long *)(this + 0x30) == lVar1) {
        return 0;
      }
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar1 + 0xe0);
      puVar3 = *(uint **)(lVar1 + 0x20);
      *(uint **)(this + 8) = puVar3;
      puVar4 = *(uint **)(lVar1 + 0x28);
      *(uint **)(this + 0x10) = puVar4;
    } while (puVar3 == puVar4);
LAB_01017fbc:
    do {
      while ((puVar3 != *(uint **)(*(long *)(this + 0x20) + 0x68) ||
             (puVar5 = *(uint **)(*(long *)(this + 0x20) + 0x70), puVar3 == puVar5))) {
        local_8 = (long)puVar3 + 1;
        iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_8,local_8 & 0xffffffff00000000 | (ulong)*puVar3);
        puVar3 = (uint *)(*(long *)(this + 8) + (long)iVar2);
        *(uint **)(this + 8) = puVar3;
        if ((*(ushort *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) | 1) !=
            0xa1) {
          if ((int)local_8 != 0) {
            return local_8;
          }
          goto LAB_01018038;
        }
        puVar4 = *(uint **)(this + 0x10);
        if (puVar3 == puVar4) goto LAB_01018038;
      }
      *(uint **)(this + 8) = puVar5;
      puVar3 = puVar5;
    } while (puVar5 != puVar4);
  } while( true );
}

