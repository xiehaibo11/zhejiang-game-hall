
/* v8::internal::Accessors::FunctionNameGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::FunctionNameGetter(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Isolate *pIVar5;
  
  pIVar5 = *(Isolate **)(*param_2 + 0x10);
  uVar2 = *(undefined8 *)(pIVar5 + 0x95a0);
  lVar3 = *(long *)(pIVar5 + 0x95a8);
  *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + 1;
  puVar4 = (undefined8 *)JSFunction::GetName(pIVar5,*param_2 + 8);
  puVar1 = (undefined8 *)(*param_2 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = puVar4;
  }
  *(undefined8 *)(*param_2 + 0x20) = *puVar1;
  if (pIVar5 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar5 + 0x95a0) = uVar2;
    *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
    if (*(long *)(pIVar5 + 0x95a8) != lVar3) {
      *(long *)(pIVar5 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar5);
      return;
    }
  }
  return;
}

