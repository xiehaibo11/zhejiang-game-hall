
/* v8::internal::LookupIterator::GetRootForNonJSReceiver(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, unsigned long) */

ulong * v8::internal::LookupIterator::GetRootForNonJSReceiver
                  (Isolate *param_1,ulong *param_2,ulong param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_28;
  
  local_28 = *param_2;
  pIVar1 = param_1 + 0x95a0;
  if ((((local_28 & 1) == 0) ||
      (0x3f < *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(local_28 - 1)))) ||
     ((ulong)(long)*(int *)(local_28 + 7) <= param_3)) {
    lVar4 = Object::GetPrototypeChainRootMap((Object *)&local_28,param_1);
    uVar2 = *(uint *)(lVar4 + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = (ulong)(param_1 + uVar2);
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                   (ulong)(param_1 + uVar2));
    }
    if ((int)*puVar3 == *(int *)(param_1 + 0xb0)) {
      Isolate::PushStackTraceAndDie(param_1,(void *)*param_2,(void *)0x0,(void *)0x0,(void *)0x0);
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x30b);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    puVar3 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar3,0);
    uVar7 = *puVar3;
    uVar5 = *param_2;
    *(int *)(uVar7 + 0xb) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar5);
        uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar5);
      }
    }
  }
  return puVar3;
}

