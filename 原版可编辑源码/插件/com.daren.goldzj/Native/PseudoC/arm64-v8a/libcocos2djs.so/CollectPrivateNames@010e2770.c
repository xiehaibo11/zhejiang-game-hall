
/* v8::internal::KeyAccumulator::CollectPrivateNames(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSObject>) */

undefined8 __thiscall
v8::internal::KeyAccumulator::CollectPrivateNames
          (KeyAccumulator *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *param_3;
  uVar5 = uVar4 & 0xffffffff00000000;
  if ((*(uint *)((uVar5 | 0xb) + (ulong)*(uint *)(uVar4 - 1)) >> 0x15 & 1) == 0) {
    uVar1 = *(uint *)((uVar5 | *(uint *)(uVar4 - 1)) + 0xb);
    pIVar2 = *(Isolate **)this;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar4 - 1)) + 0x17);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
    }
    FUN_010e254c(this,puVar3,0,uVar1 >> 10 & 0x3ff);
  }
  else {
    uVar6 = uVar5 | *(uint *)(uVar4 + 3);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0xaa) {
      pIVar2 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
      }
      uVar4 = BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
              ::CollectKeysTo(puVar3,this);
    }
    else {
      if ((*(uint *)(uVar4 + 3) & 1) == 0) {
        uVar6 = *(ulong *)(uVar5 + 0x410);
      }
      pIVar2 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
      }
      uVar4 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
              CollectKeysTo(puVar3,this);
    }
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

