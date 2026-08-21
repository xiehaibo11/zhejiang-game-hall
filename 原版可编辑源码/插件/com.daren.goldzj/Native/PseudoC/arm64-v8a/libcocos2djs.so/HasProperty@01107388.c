
/* v8::internal::JSProxy::HasProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSProxy>, v8::internal::Handle<v8::internal::Name>) */

undefined2 v8::internal::JSProxy::HasProperty(Isolate *param_1,ulong *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 local_a0;
  ulong *local_98;
  undefined8 uStack_90;
  
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
  }
  else {
    pIVar1 = param_1 + 0x95a0;
    uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    uVar9 = *param_2;
    uVar4 = uVar9 & 0xffffffff00000000;
    if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar9 + 0xb)) - 1)) < 0xa9) {
      puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x90,param_1 + 0x730,0,0);
      Isolate::Throw(param_1,*puVar6,0);
    }
    else {
      uVar4 = uVar4 | *(uint *)(uVar9 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar4;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
      puVar8 = (ulong *)Object::GetMethod(puVar5,param_1 + 0x730);
      if (puVar8 == (ulong *)0x0) {
        return 0;
      }
      if (((*puVar8 & 1) != 0) && ((int)*puVar8 == *(int *)(param_1 + 0xa0))) {
        LookupIterator::PropertyOrElement
                  ((LookupIterator *)&local_98,(ulong)*(uint *)((long)puVar7 + 4) << 0x20,puVar7,
                   param_3,puVar7,3);
        uVar3 = JSReceiver::HasProperty((LookupIterator *)&local_98);
        return uVar3;
      }
      local_98 = puVar7;
      uStack_90 = param_3;
      puVar6 = (undefined8 *)Execution::Call(param_1,puVar8,puVar5,2,&local_98);
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      local_a0 = *puVar6;
      uVar4 = Object::BooleanValue((Object *)&local_a0,param_1);
      if (((uVar4 & 1) != 0) || (cVar2 = CheckHasTrap(param_1,param_3,puVar7), cVar2 != '\0')) {
        if ((uVar4 & 1) != 0) {
          return 0x101;
        }
        return 1;
      }
    }
  }
  return 0;
}

