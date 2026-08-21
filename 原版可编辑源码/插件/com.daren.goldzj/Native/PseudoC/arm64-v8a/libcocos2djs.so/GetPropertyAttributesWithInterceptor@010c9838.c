
/* v8::internal::JSObject::GetPropertyAttributesWithInterceptor(v8::internal::LookupIterator*) */

void v8::internal::JSObject::GetPropertyAttributesWithInterceptor(LookupIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = LookupIterator::GetInterceptor(param_1);
  FUN_010d248c(param_1,uVar1);
  return;
}

