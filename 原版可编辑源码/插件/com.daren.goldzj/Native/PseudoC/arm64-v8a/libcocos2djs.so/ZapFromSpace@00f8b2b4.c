
/* v8::internal::Heap::ZapFromSpace() */

void __thiscall v8::internal::Heap::ZapFromSpace(Heap *this)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(char *)(*(long *)(this + 0xe8) + 0x1f8) != '\0') &&
     (lVar2 = *(long *)(*(long *)(this + 0xe8) + 400), lVar2 != 0)) {
    do {
      uVar1 = 0xdeadbeedbeadbeef;
      if (FLAG_clear_free_memory != '\0') {
        uVar1 = 0;
      }
      MemoryAllocator::ZapBlock
                (*(MemoryAllocator **)(this + 0x820),*(ulong *)(lVar2 + 0x20),
                 (*(long *)(lVar2 + 0x98) + lVar2) - *(long *)(lVar2 + 0x20),uVar1);
      lVar2 = *(long *)(lVar2 + 0xe0);
    } while (lVar2 != 0);
  }
  return;
}

