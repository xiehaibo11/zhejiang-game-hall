
void FUN_010a8724(undefined8 param_1,ulong *param_2,undefined4 param_3,undefined8 param_4,
                 int param_5)

{
  CanonicalHandleScope *pCVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong local_48;
  
  pIVar7 = (Isolate *)(*param_2 & 0xffffffff00000000);
  pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8);
  uVar8 = (ulong)pIVar7 | (ulong)*(uint *)(*param_2 + 7);
  if (pCVar1 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar8;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar1,uVar8);
    uVar8 = *puVar2;
  }
  pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8);
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
  if (pCVar1 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar1,uVar8);
    uVar8 = *puVar3;
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x7b) {
    puVar3 = (ulong *)v8::internal::JSObject::NormalizeElements(param_2);
  }
  puVar4 = (ulong *)v8::internal::
                    Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                    Add(pIVar7,puVar3,param_3,param_4,param_5 << 3 | 0xc0,0);
  if (param_5 != 0) {
    local_48 = *param_2;
    v8::internal::JSObject::RequireSlowElements((JSObject *)&local_48,*puVar4);
  }
  uVar8 = *puVar4;
  if ((int)*puVar3 != (int)uVar8) {
    uVar6 = *puVar2;
    *(int *)(uVar6 + 0xb) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar8);
        uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar8);
      }
    }
  }
  return;
}

