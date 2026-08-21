
/* v8::internal::JSObject::HasRealNamedCallbackProperty(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>) */

undefined8 v8::internal::JSObject::HasRealNamedCallbackProperty(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  LookupIterator aLStack_68 [4];
  int local_64;
  
  LookupIterator::PropertyOrElement
            (aLStack_68,(ulong)*(uint *)(param_1 + 4) << 0x20,param_1,param_2,0);
  cVar3 = JSReceiver::GetPropertyAttributes(aLStack_68);
  uVar2 = 0x101;
  if (local_64 != 5) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}

