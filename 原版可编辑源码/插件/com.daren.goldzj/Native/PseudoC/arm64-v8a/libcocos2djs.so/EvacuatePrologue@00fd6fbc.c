
/* v8::internal::MinorMarkCompactCollector::EvacuatePrologue() */

void __thiscall
v8::internal::MinorMarkCompactCollector::EvacuatePrologue(MinorMarkCompactCollector *this)

{
  NewSpace *this_00;
  Page *pPVar1;
  Page *pPVar2;
  Page *local_28;
  
  this_00 = *(NewSpace **)(*(long *)(this + 8) + 0xe8);
  pPVar1 = *(Page **)((*(long *)(this_00 + 0x68) - 4U & 0xfffffffffffc0000) + 0xe0);
  pPVar2 = (Page *)(*(ulong *)(*(long *)(this_00 + 0xf0) + 0x20) & 0xfffffffffffc0000);
  if (pPVar1 != pPVar2) {
    do {
      local_28 = pPVar2;
      if (*(ulong **)(this + 0x40) == *(ulong **)(this + 0x48)) {
        std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
        __push_back_slow_path<v8::internal::Page*const&>
                  ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
                   (this + 0x38),&local_28);
      }
      else {
        **(ulong **)(this + 0x40) = (ulong)pPVar2;
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
      }
      pPVar2 = *(Page **)(pPVar2 + 0xe0);
    } while (pPVar1 != pPVar2);
  }
  NewSpace::Flip(this_00);
  NewSpace::ResetLinearAllocationArea(this_00);
  NewLargeObjectSpace::Flip(*(NewLargeObjectSpace **)(*(long *)(this + 8) + 0x118));
  *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x118) + 0x80) = 0;
  return;
}

