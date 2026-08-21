
/* v8::internal::InvalidatedSlotsFilter::InvalidatedSlotsFilter(v8::internal::MemoryChunk*,
   std::__ndk1::set<v8::internal::HeapObject, v8::internal::Object::Comparer,
   std::__ndk1::allocator<v8::internal::HeapObject> >*) */

void __thiscall
v8::internal::InvalidatedSlotsFilter::InvalidatedSlotsFilter
          (InvalidatedSlotsFilter *this,MemoryChunk *param_1,set *param_2)

{
  undefined8 *puVar1;
  InvalidatedSlotsFilter *pIVar2;
  undefined8 *puVar3;
  long lVar4;
  InvalidatedSlotsFilter *pIVar5;
  long lVar6;
  InvalidatedSlotsFilter *pIVar7;
  InvalidatedSlotsFilter *pIVar8;
  long lVar9;
  
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(InvalidatedSlotsFilter **)(this + 0x30) = this + 0x38;
  pIVar7 = this + 0x30;
  if (param_2 != (set *)0x0) {
    pIVar7 = (InvalidatedSlotsFilter *)param_2;
  }
  pIVar2 = pIVar7 + 8;
  pIVar7 = *(InvalidatedSlotsFilter **)pIVar7;
  *(InvalidatedSlotsFilter **)this = pIVar7;
  *(InvalidatedSlotsFilter **)(this + 8) = pIVar2;
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x28) = 0;
  *(long *)(this + 0x10) = lVar4;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x20);
  if (pIVar7 == pIVar2) {
    *(long *)(this + 0x20) = lVar4;
    lVar6 = lVar4;
  }
  else {
    lVar6 = *(long *)(pIVar7 + 0x20);
    *(long *)(this + 0x20) = lVar6 + -1;
    pIVar5 = *(InvalidatedSlotsFilter **)(pIVar7 + 8);
    if (*(InvalidatedSlotsFilter **)(pIVar7 + 8) == (InvalidatedSlotsFilter *)0x0) {
      pIVar5 = pIVar7 + 0x10;
      pIVar8 = *(InvalidatedSlotsFilter **)pIVar5;
      if (*(InvalidatedSlotsFilter **)pIVar8 != pIVar7) {
        do {
          lVar9 = *(long *)pIVar5;
          pIVar5 = (InvalidatedSlotsFilter *)(lVar9 + 0x10);
          pIVar8 = *(InvalidatedSlotsFilter **)pIVar5;
        } while (*(long *)pIVar8 != lVar9);
      }
    }
    else {
      do {
        pIVar8 = pIVar5;
        pIVar5 = *(InvalidatedSlotsFilter **)pIVar8;
      } while (*(InvalidatedSlotsFilter **)pIVar8 != (InvalidatedSlotsFilter *)0x0);
    }
    *(InvalidatedSlotsFilter **)this = pIVar8;
    pIVar7 = pIVar8;
    lVar6 = lVar6 + -1;
  }
  *(long *)(this + 0x18) = lVar6;
  *(undefined4 *)(this + 0x28) = 0;
  if (pIVar7 == pIVar2) {
    *(long *)(this + 0x20) = lVar4;
    return;
  }
  *(long *)(this + 0x20) = *(long *)(pIVar7 + 0x20) + -1;
  puVar1 = *(undefined8 **)(pIVar7 + 8);
  if (*(undefined8 **)(pIVar7 + 8) == (undefined8 *)0x0) {
    while( true ) {
      puVar3 = *(undefined8 **)(pIVar7 + 0x10);
      if ((InvalidatedSlotsFilter *)*puVar3 == pIVar7) break;
      pIVar7 = *(InvalidatedSlotsFilter **)(pIVar7 + 0x10);
    }
  }
  else {
    do {
      puVar3 = puVar1;
      puVar1 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  *(undefined8 **)this = puVar3;
  return;
}

