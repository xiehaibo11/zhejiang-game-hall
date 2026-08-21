
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreClassFieldsInitializer(v8::internal::interpreter::Register,
   int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StoreClassFieldsInitializer
          (BytecodeArrayBuilder *this,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = ConstantArrayBuilder::InsertClassFieldsSymbol();
  StoreNamedProperty(this,param_2,uVar1,param_3,0);
  return;
}

