
/* v8::internal::ValueSerializer::ThrowDataCloneError(v8::internal::MessageTemplate,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::ValueSerializer::ThrowDataCloneError(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  Isolate *pIVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar1 = MessageFormatter::Format(*param_1);
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    pIVar4 = (Isolate *)*param_1;
    uVar6 = *(ulong *)(pIVar4 + 0x2bc8) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar4 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x35f);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
    }
    puVar3 = (undefined8 *)Factory::NewError((Factory *)pIVar4,puVar2,uVar1);
    Isolate::Throw(pIVar4,*puVar3,0);
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,uVar1);
  }
  pIVar4 = (Isolate *)*param_1;
  if (*(int *)(pIVar4 + 0x2c20) == *(int *)(pIVar4 + 0xa8)) {
    return;
  }
  Isolate::PromoteScheduledException(pIVar4);
  return;
}

