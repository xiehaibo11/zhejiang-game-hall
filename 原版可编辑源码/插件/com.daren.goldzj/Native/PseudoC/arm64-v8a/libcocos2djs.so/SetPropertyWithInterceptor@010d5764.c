
/* v8::internal::JSObject::SetPropertyWithInterceptor(v8::internal::LookupIterator*,
   v8::Maybe<v8::internal::ShouldThrow>, v8::internal::Handle<v8::internal::Object>) */

undefined2
v8::internal::JSObject::SetPropertyWithInterceptor
          (LookupIterator *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = LookupIterator::GetInterceptor(param_1);
  uVar1 = FUN_010d29f8(param_1,uVar2,param_2,param_3);
  return uVar1;
}

