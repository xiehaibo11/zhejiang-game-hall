
/* v8::internal::SemiSpace::RewindPages(int) */

void __thiscall v8::internal::SemiSpace::RewindPages(SemiSpace *this,int param_1)

{
  MemoryChunk *pMVar1;
  long lVar2;
  long lVar3;
  
  for (; 0 < param_1; param_1 = param_1 + -1) {
    pMVar1 = *(MemoryChunk **)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar1 + 0xe8);
    if (*(MemoryChunk **)(this + 0x20) == pMVar1) {
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(pMVar1 + 0xe0);
    }
    lVar2 = *(long *)(pMVar1 + 0xe0);
    lVar3 = *(long *)(pMVar1 + 0xe8);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0xe8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0xe0) = lVar2;
    }
    *(undefined8 *)(pMVar1 + 0xe0) = 0;
    *(undefined8 *)(pMVar1 + 0xe8) = 0;
    MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
              (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),pMVar1);
  }
  return;
}

