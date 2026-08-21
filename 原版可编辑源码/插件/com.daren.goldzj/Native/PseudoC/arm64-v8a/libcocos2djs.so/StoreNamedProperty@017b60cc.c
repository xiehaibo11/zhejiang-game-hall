
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreNamedProperty(v8::internal::interpreter::Register,
   v8::internal::AstRawString const*, int, v8::internal::LanguageMode) */

void v8::internal::interpreter::BytecodeArrayBuilder::StoreNamedProperty
               (long param_1,undefined4 param_2,AstRawString *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ConstantArrayBuilder::Insert((ConstantArrayBuilder *)(param_1 + 0x18),param_3);
  StoreNamedProperty(param_1,param_2,uVar1,param_4,0);
  return;
}

