
/* v8::internal::Factory::NewOneClosureCell(v8::internal::Handle<v8::internal::HeapObject>) */

ulong * __thiscall v8::internal::Factory::NewOneClosureCell(Factory *this,ulong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(undefined4 *)(this + 0x220);
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,1,1,0);
  *(undefined4 *)(uVar3 - 1) = uVar2;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  uVar6 = *param_2;
  *(int *)(uVar3 + 3) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 3,uVar6);
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 3,uVar6);
    }
  }
  puVar1 = &FLAG_interrupt_budget;
  if (FLAG_lazy_feedback_allocation != '\0') {
    puVar1 = &FLAG_budget_for_feedback_vector_allocation;
  }
  *(undefined4 *)(*puVar4 + 7) = *puVar1;
  return puVar4;
}

