
/* v8::internal::TypedSlotSet::ClearInvalidSlots(std::__ndk1::map<unsigned int, unsigned int,
   std::__ndk1::less<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   unsigned int> > > const&) */

void __thiscall v8::internal::TypedSlotSet::ClearInvalidSlots(TypedSlotSet *this,map *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  long *plVar5;
  map *pmVar6;
  map *pmVar7;
  map *pmVar8;
  
  plVar5 = *(long **)(this + 8);
  if (plVar5 != (long *)0x0) {
    do {
      puVar3 = (uint *)plVar5[2];
      for (puVar2 = (uint *)plVar5[1]; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        if ((*puVar2 & 0xe0000000) != 0xa0000000) {
          uVar1 = *puVar2 & 0x1fffffff;
          pmVar6 = param_1 + 8;
          for (pmVar8 = *(map **)(param_1 + 8); pmVar8 != (map *)0x0;
              pmVar8 = *(map **)(pmVar8 + (ulong)(*(uint *)(pmVar8 + 0x1c) <= uVar1) * 8)) {
            pmVar7 = pmVar8;
            if (*(uint *)(pmVar8 + 0x1c) <= uVar1) {
              pmVar7 = pmVar6;
            }
            pmVar6 = pmVar7;
          }
          if (pmVar6 != *(map **)param_1) {
            pmVar8 = *(map **)pmVar6;
            if (*(map **)pmVar6 == (map *)0x0) {
              do {
                pmVar7 = *(map **)(pmVar6 + 0x10);
                bVar4 = *(map **)pmVar7 == pmVar6;
                pmVar6 = pmVar7;
              } while (bVar4);
            }
            else {
              do {
                pmVar7 = pmVar8;
                pmVar8 = *(map **)(pmVar7 + 8);
              } while (*(map **)(pmVar7 + 8) != (map *)0x0);
            }
            if (uVar1 < *(uint *)(pmVar7 + 0x20)) {
              *puVar2 = 0xa0000000;
            }
          }
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}

