
/* v8::internal::Factory::NewSlowJSObjectWithPropertiesAndElements(v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::Handle<v8::internal::NameDictionary>,
   v8::internal::Handle<v8::internal::FixedArrayBase>) */

ulong * __thiscall
v8::internal::Factory::NewSlowJSObjectWithPropertiesAndElements
          (Factory *this,int *param_2,ulong *param_3,ulong *param_4)

{
  Factory *pFVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x29f);
  pFVar1 = this + 0x95a0;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  uVar7 = *puVar3;
  if (*(int *)(uVar7 + 0xf) != *param_2) {
    puVar3 = (ulong *)Map::TransitionToPrototype(this,puVar3,param_2);
    uVar7 = *puVar3;
  }
  lVar8 = *(long *)(this + 0x8938);
  uVar7 = (ulong)*(byte *)(uVar7 + 3) * 4;
  lVar2 = *(long *)(lVar8 + 0x68);
  if ((((ulong)(*(long *)(lVar8 + 0x70) - lVar2) < uVar7) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,0,1,0);
  }
  else {
    uVar4 = lVar2 + 1;
    *(ulong *)(lVar8 + 0x68) = lVar2 + uVar7;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar7,1,1);
  }
  *(int *)(uVar4 - 1) = (int)*puVar3;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar1;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  InitializeJSObjectFromMap(this,puVar5,this + 0x168,puVar3);
  uVar4 = *puVar5;
  uVar7 = *param_3;
  *(int *)(uVar4 + 3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 3,uVar7);
      uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 3,uVar7);
    }
  }
  if ((int)*param_4 != *(int *)(this + 0x168)) {
    uVar6 = JSObject::GetElementsTransitionMap(puVar5,0xc);
    JSObject::MigrateToMap(this,puVar5,uVar6,0);
    uVar4 = *puVar5;
    uVar7 = *param_4;
    *(int *)(uVar4 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar7);
        uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar7);
      }
    }
  }
  return puVar5;
}

