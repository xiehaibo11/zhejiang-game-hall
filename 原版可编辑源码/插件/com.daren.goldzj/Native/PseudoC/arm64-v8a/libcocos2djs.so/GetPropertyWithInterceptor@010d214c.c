
/* v8::internal::JSObject::GetPropertyWithInterceptor(v8::internal::LookupIterator*, bool*) */

void v8::internal::JSObject::GetPropertyWithInterceptor(LookupIterator *param_1,bool *param_2)

{
  undefined8 uVar1;
  
  uVar1 = LookupIterator::GetInterceptor(param_1);
  FUN_010d217c(param_1,uVar1,param_2);
  return;
}

