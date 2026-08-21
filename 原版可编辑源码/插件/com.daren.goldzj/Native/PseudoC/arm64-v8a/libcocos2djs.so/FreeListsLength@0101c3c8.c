
/* v8::internal::MemoryChunk::FreeListsLength() */

int __thiscall v8::internal::MemoryChunk::FreeListsLength(MemoryChunk *this)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc) < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(this + 0xf0) + lVar4 * 8);
      if (lVar5 != 0) {
        uVar6 = *(ulong *)(lVar5 + 8);
        if ((int)uVar6 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          do {
            puVar2 = (uint *)(uVar6 + 7);
            iVar7 = iVar7 + 1;
            uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*puVar2;
          } while (*puVar2 != 0);
        }
        iVar3 = iVar7 + iVar3;
      }
      bVar1 = lVar4 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 0xc);
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  return iVar3;
}

