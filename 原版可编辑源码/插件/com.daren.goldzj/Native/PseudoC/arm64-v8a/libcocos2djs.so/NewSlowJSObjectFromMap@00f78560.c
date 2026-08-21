
/* v8::internal::Factory::NewSlowJSObjectFromMap(v8::internal::Handle<v8::internal::Map>, int,
   v8::internal::AllocationType, v8::internal::Handle<v8::internal::AllocationSite>) */

ulong * __thiscall
v8::internal::Factory::NewSlowJSObjectFromMap
          (Factory *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
          )

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                    ::New(this,param_3,0,0);
  uVar2 = AllocateRawWithAllocationSite(this,param_2,param_4,param_5);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  InitializeJSObjectFromMap(this,puVar3,this + 0x168,param_2);
  uVar5 = *puVar3;
  uVar2 = *puVar1;
  *(int *)(uVar5 + 3) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar2);
      uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar2);
    }
  }
  return puVar3;
}

