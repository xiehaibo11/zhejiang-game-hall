
void FUN_010a3fb8(ulong *param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  
  uVar4 = *param_1;
  pIVar1 = (Isolate *)(uVar4 & 0xffffffff00000000);
  if ((*(byte *)(((ulong)pIVar1 | 10) + (ulong)*(uint *)(uVar4 - 1)) < 0x30) ||
     ((*(byte *)(((ulong)pIVar1 | 10) + (ulong)*(uint *)(uVar4 - 1)) & 0xf8) == 0x78)) {
    puVar2 = (ulong *)v8::internal::JSObject::NormalizeElements(param_1);
  }
  else {
    uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(uVar4 + 7);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
  }
  puVar3 = (ulong *)v8::internal::
                    Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                    Add((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar2,param_2,param_3,
                        param_4 << 3 | 0xc0,0);
  local_58 = *puVar3;
  v8::internal::NumberDictionary::UpdateMaxNumberKey((NumberDictionary *)&local_58,param_2,param_1);
  if (param_4 != 0) {
    local_58 = *param_1;
    v8::internal::JSObject::RequireSlowElements((JSObject *)&local_58,*puVar3);
  }
  if (puVar2 != puVar3) {
    if ((puVar2 == (ulong *)0x0) || (puVar3 == (ulong *)0x0)) {
      uVar4 = *puVar3;
    }
    else {
      uVar4 = *puVar3;
      if (*puVar2 == uVar4) {
        return;
      }
    }
    uVar6 = *param_1;
    *(int *)(uVar6 + 7) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar6,uVar6 + 7,uVar4);
        uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar6,uVar6 + 7,uVar4);
      }
    }
  }
  return;
}

