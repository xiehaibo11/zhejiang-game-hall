
/* v8::internal::JSReceiver::GetOwnPropertyDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDescriptor*) */

undefined2 v8::internal::JSReceiver::GetOwnPropertyDescriptor(void)

{
  undefined2 uVar1;
  PropertyDescriptor *in_x3;
  LookupIterator aLStack_78 [88];
  
  LookupIterator::PropertyOrElement(aLStack_78);
  uVar1 = GetOwnPropertyDescriptor(aLStack_78,in_x3);
  return uVar1;
}

