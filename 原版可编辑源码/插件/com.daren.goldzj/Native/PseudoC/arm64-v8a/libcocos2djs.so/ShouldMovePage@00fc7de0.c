
/* v8::internal::MarkCompactCollectorBase::ShouldMovePage(v8::internal::Page*, long) */

undefined8 __thiscall
v8::internal::MarkCompactCollectorBase::ShouldMovePage
          (MarkCompactCollectorBase *this,Page *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (((*(byte *)(*(long *)(this + 8) + 0xad4) & 1) == 0) && (-1 < (char)param_1[8])) {
    uVar4 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x1f0);
    if (FLAG_page_promotion == '\0') {
      lVar1 = MemoryChunkLayout::AllocatableMemoryInDataPage();
      uVar3 = lVar1 + 4;
    }
    else {
      lVar5 = (long)FLAG_page_promotion_threshold;
      lVar1 = MemoryChunkLayout::AllocatableMemoryInDataPage();
      uVar3 = (ulong)(lVar1 * lVar5) / 100;
    }
    if (((long)uVar3 < param_2) &&
       ((uVar4 < *(ulong *)(param_1 + 0x20) || (*(ulong *)(param_1 + 0x28) <= uVar4)))) {
      uVar2 = Heap::CanExpandOldGeneration(*(Heap **)(this + 8),param_2);
      return uVar2;
    }
  }
  return 0;
}

