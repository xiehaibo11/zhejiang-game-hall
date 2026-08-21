
/* v8::internal::JSReceiver::IsCompatiblePropertyDescriptor(v8::internal::Isolate*, bool,
   v8::internal::PropertyDescriptor*, v8::internal::PropertyDescriptor*,
   v8::internal::Handle<v8::internal::Name>, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSReceiver::IsCompatiblePropertyDescriptor
          (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined2 uVar1;
  
  uVar1 = ValidateAndApplyPropertyDescriptor(param_1,0,param_2 & 1,param_3,param_4,param_6,param_5);
  return uVar1;
}

