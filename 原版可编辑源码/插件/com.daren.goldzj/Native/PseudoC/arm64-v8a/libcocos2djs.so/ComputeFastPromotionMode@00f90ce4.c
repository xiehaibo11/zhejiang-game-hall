
/* v8::internal::Heap::ComputeFastPromotionMode() */

void __thiscall v8::internal::Heap::ComputeFastPromotionMode(Heap *this)

{
  char *pcVar1;
  long lVar2;
  Heap HVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(this + 0xb0);
  uVar4 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
  lVar2 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  uVar6 = (uVar4 >> 0x12) * lVar2;
  HVar3 = (Heap)0x0;
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = (ulong)(lVar5 * 100) / uVar6;
  }
  if ((FLAG_optimize_for_size == '\0') && (FLAG_fast_promotion_new_space != '\0')) {
    if ((((byte)this[0xad4] & 1) == 0) &&
       (*(long *)(*(long *)(this + 0xe8) + 0x138) == *(long *)(*(long *)(this + 0xe8) + 0x140))) {
      HVar3 = (Heap)(0x59 < uVar4);
    }
    else {
      HVar3 = (Heap)0x0;
    }
  }
  this[0xb45] = HVar3;
  if ((FLAG_trace_gc_verbose != '\0') && (FLAG_trace_gc_ignore_scavenger == '\0')) {
    pcVar1 = "false";
    if (HVar3 != (Heap)0x0) {
      pcVar1 = "true";
    }
    PrintIsolate(this + -0x8850,"Fast promotion mode: %s survival rate: %zu%%\n",pcVar1);
    return;
  }
  return;
}

