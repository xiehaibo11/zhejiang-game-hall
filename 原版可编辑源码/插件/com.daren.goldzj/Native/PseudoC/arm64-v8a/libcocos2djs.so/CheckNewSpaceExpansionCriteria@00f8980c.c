
/* v8::internal::Heap::CheckNewSpaceExpansionCriteria() */

void __thiscall v8::internal::Heap::CheckNewSpaceExpansionCriteria(Heap *this)

{
  ulong uVar1;
  NewSpace *this_00;
  long lVar2;
  ulong uVar3;
  NewLargeObjectSpace *this_01;
  
  this_00 = *(NewSpace **)(this + 0xe8);
  uVar3 = *(ulong *)(this_00 + 0x138);
  if (FLAG_experimental_new_space_growth_heuristic == '\0') {
    if ((*(ulong *)(this_00 + 0x140) <= uVar3) || (*(ulong *)(this + 0xa8) <= uVar3))
    goto LAB_00f89870;
  }
  else {
    if (*(ulong *)(this_00 + 0x140) <= uVar3) goto LAB_00f89870;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = (ulong)(*(long *)(this + 0xb0) * 100) / uVar3;
    }
    if (uVar1 < 10) goto LAB_00f89870;
  }
  NewSpace::Grow(this_00);
  *(undefined8 *)(this + 0xa8) = 0;
LAB_00f89870:
  this_01 = *(NewLargeObjectSpace **)(this + 0x118);
  uVar3 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
  lVar2 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  NewLargeObjectSpace::SetCapacity(this_01,(uVar3 >> 0x12) * lVar2);
  return;
}

