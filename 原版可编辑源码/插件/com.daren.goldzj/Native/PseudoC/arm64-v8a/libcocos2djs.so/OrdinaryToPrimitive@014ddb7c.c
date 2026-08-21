
/* v8::internal::CodeFactory::OrdinaryToPrimitive(v8::internal::Isolate*,
   v8::internal::OrdinaryToPrimitiveHint) */

void v8::internal::CodeFactory::OrdinaryToPrimitive(undefined8 *param_1_00,long param_1)

{
  undefined8 uVar1;
  
  uVar1 = Builtins::OrdinaryToPrimitive((Builtins *)(param_1 + 0x9e00));
  *param_1_00 = uVar1;
  param_1_00[1] = &PTR__CallInterfaceDescriptor_01ca0fc8;
  param_1_00[2] = 0x1d2cc60;
  return;
}

