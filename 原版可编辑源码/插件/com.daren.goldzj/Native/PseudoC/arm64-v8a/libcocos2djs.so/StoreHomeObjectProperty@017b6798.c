
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreHomeObjectProperty(v8::internal::interpreter::Register,
   int, v8::internal::LanguageMode) */

void v8::internal::interpreter::BytecodeArrayBuilder::StoreHomeObjectProperty
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = ConstantArrayBuilder::InsertHomeObjectSymbol();
  StoreNamedProperty(param_1,param_2,uVar1,param_3,0);
  return;
}

