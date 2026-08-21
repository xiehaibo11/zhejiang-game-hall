
/* v8::internal::JSReceiver::DeleteNormalizedProperty(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::InternalIndex) */

void v8::internal::JSReceiver::DeleteNormalizedProperty(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong local_48;
  
  uVar3 = *param_1;
  pIVar5 = (Isolate *)(uVar3 & 0xffffffff00000000);
  uVar6 = (ulong)pIVar5 | (ulong)*(uint *)(uVar3 + 3);
  if (*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xaa) {
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar6;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
    }
    puVar1 = (ulong *)PropertyCell::InvalidateEntry(pIVar5,puVar1,param_2);
    uVar6 = *puVar1;
    uVar3 = *(ulong *)(pIVar5 + 0xa8);
    *(int *)(uVar6 + 0xb) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar3);
        uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar3);
      }
    }
    *(undefined4 *)(*puVar1 + 7) = 0;
  }
  else {
    if ((*(uint *)(uVar3 + 3) & 1) == 0) {
      uVar6 = *(ulong *)(pIVar5 + 0x410);
    }
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar6;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
    }
    puVar2 = (undefined8 *)
             Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::DeleteEntry
                       (pIVar5,puVar1,param_2);
    local_48 = *param_1;
    SetProperties((JSReceiver *)&local_48,*puVar2);
  }
  uVar3 = *param_1;
  if ((*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 0xb) >> 0x14 & 1) == 0
     ) {
    return;
  }
  FUN_010d8b9c(uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1));
  return;
}

