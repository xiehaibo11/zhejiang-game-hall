
/* v8::internal::JSReceiver::OrdinaryDefineOwnProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSReceiver::OrdinaryDefineOwnProperty
          (Isolate *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined2 uVar1;
  ulong uVar2;
  LookupIterator aLStack_88 [4];
  int local_84;
  undefined8 local_50;
  
  LookupIterator::PropertyOrElement(aLStack_88);
  if (local_84 == 0) {
    uVar2 = LookupIterator::HasAccess(aLStack_88);
    if ((uVar2 & 1) == 0) {
      Isolate::ReportFailedAccessCheck(param_1,local_50);
      if (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8)) {
        return 0x101;
      }
      Isolate::PromoteScheduledException(param_1);
      return 0;
    }
    LookupIterator::Next(aLStack_88);
  }
  uVar1 = OrdinaryDefineOwnProperty(aLStack_88,param_4,param_5);
  return uVar1;
}

