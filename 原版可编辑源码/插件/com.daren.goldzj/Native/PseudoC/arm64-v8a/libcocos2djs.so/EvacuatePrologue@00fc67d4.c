
/* v8::internal::MarkCompactCollector::EvacuatePrologue() */

void __thiscall v8::internal::MarkCompactCollector::EvacuatePrologue(MarkCompactCollector *this)

{
  void *pvVar1;
  NewSpace *this_00;
  Page *pPVar2;
  Page *pPVar3;
  Page *local_28;
  
  this_00 = *(NewSpace **)(*(long *)(this + 8) + 0xe8);
  pPVar2 = *(Page **)((*(long *)(this_00 + 0x68) - 4U & 0xfffffffffffc0000) + 0xe0);
  pPVar3 = (Page *)(*(ulong *)(*(long *)(this_00 + 0xf0) + 0x20) & 0xfffffffffffc0000);
  if (pPVar2 != pPVar3) {
    do {
      local_28 = pPVar3;
      if (*(ulong **)(this + 0x26d0) == *(ulong **)(this + 0x26d8)) {
        std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
        __push_back_slow_path<v8::internal::Page*const&>
                  ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
                   (this + 0x26c8),&local_28);
      }
      else {
        **(ulong **)(this + 0x26d0) = (ulong)pPVar3;
        *(long *)(this + 0x26d0) = *(long *)(this + 0x26d0) + 8;
      }
      pPVar3 = *(Page **)(pPVar3 + 0xe0);
    } while (pPVar2 != pPVar3);
  }
  NewSpace::Flip(this_00);
  NewSpace::ResetLinearAllocationArea(this_00);
  NewLargeObjectSpace::Flip(*(NewLargeObjectSpace **)(*(long *)(this + 8) + 0x118));
  *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x118) + 0x80) = 0;
  pvVar1 = *(void **)(this + 0x26b0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x26b8) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)(this + 0x26b0) = 0;
    *(undefined8 *)(this + 0x26b8) = 0;
    *(undefined8 *)(this + 0x26c0) = 0;
  }
  *(undefined8 *)(this + 0x26b8) = *(undefined8 *)(this + 0x26a0);
  *(undefined8 *)(this + 0x26b0) = *(undefined8 *)(this + 0x2698);
  *(undefined8 *)(this + 0x26c0) = *(undefined8 *)(this + 0x26a8);
  *(undefined8 *)(this + 0x2698) = 0;
  *(undefined8 *)(this + 0x26a0) = 0;
  *(undefined8 *)(this + 0x26a8) = 0;
  return;
}

