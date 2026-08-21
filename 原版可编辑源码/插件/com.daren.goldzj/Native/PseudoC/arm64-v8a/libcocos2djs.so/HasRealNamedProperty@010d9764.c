
/* v8::internal::JSObject::HasRealNamedProperty(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>) */

undefined2 v8::internal::JSObject::HasRealNamedProperty(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  LookupIterator aLStack_68 [88];
  
  LookupIterator::PropertyOrElement
            (aLStack_68,(ulong)*(uint *)(param_1 + 4) << 0x20,param_1,param_2,0);
  uVar1 = JSReceiver::HasProperty(aLStack_68);
  return uVar1;
}

