
/* v8::internal::JSObject::DefineAccessor(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void v8::internal::JSObject::DefineAccessor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  LookupIterator aLStack_88 [88];
  
  LookupIterator::PropertyOrElement
            (aLStack_88,(ulong)*(uint *)(param_1 + 4) << 0x20,param_1,param_2,0);
  DefineAccessor(aLStack_88,param_3,param_4,param_5);
  return;
}

