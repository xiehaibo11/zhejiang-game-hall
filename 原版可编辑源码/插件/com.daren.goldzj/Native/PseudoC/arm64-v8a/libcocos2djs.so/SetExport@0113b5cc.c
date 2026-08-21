
/* v8::internal::SyntheticModule::SetExport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SyntheticModule>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8
v8::internal::SyntheticModule::SetExport
          (Isolate *param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_28;
  
  pIVar1 = param_1 + 0x95a0;
  uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    uVar7 = *puVar2;
  }
  local_28 = uVar7;
  uVar7 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
          Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                  *)&local_28,param_3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar7;
    uVar7 = *puVar2;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    uVar7 = *puVar2;
  }
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x99)) {
    puVar3 = (undefined8 *)Factory::NewReferenceError((Factory *)param_1,0x112,param_3,0,0);
    Isolate::Throw(param_1,*puVar3,0);
    uVar4 = 0;
  }
  else {
    uVar6 = *param_4;
    *(int *)(uVar7 + 3) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 3,uVar6);
        uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3,uVar6);
      }
    }
    uVar4 = 0x101;
  }
  return uVar4;
}

