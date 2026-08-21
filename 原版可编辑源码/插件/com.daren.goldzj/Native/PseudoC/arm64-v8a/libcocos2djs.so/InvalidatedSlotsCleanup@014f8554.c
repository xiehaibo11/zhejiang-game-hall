
/* v8::internal::InvalidatedSlotsCleanup::InvalidatedSlotsCleanup(v8::internal::MemoryChunk*,
   std::__ndk1::set<v8::internal::HeapObject, v8::internal::Object::Comparer,
   std::__ndk1::allocator<v8::internal::HeapObject> >*) */

void __thiscall
v8::internal::InvalidatedSlotsCleanup::InvalidatedSlotsCleanup
          (InvalidatedSlotsCleanup *this,MemoryChunk *param_1,set *param_2)

{
  InvalidatedSlotsCleanup *pIVar1;
  long lVar2;
  InvalidatedSlotsCleanup *pIVar3;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(InvalidatedSlotsCleanup **)(this + 0x18) = this + 0x20;
  pIVar1 = this + 0x18;
  if (param_2 != (set *)0x0) {
    pIVar1 = (InvalidatedSlotsCleanup *)param_2;
  }
  *(InvalidatedSlotsCleanup **)(this + 0x10) = pIVar1;
  pIVar3 = *(InvalidatedSlotsCleanup **)pIVar1;
  *(InvalidatedSlotsCleanup **)this = pIVar3;
  *(InvalidatedSlotsCleanup **)(this + 8) = pIVar1 + 8;
  lVar2 = *(long *)(param_1 + 0x28);
  *(long *)(this + 0x30) = lVar2;
  if (pIVar3 != pIVar1 + 8) {
    lVar2 = *(long *)(pIVar3 + 0x20) + -1;
  }
  *(long *)(this + 0x38) = lVar2;
  return;
}

