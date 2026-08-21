
/* v8::internal::compiler::OperationTyper::SpeculativeNumberBitwiseXor(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::SpeculativeNumberBitwiseXor
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = Type::Intersect(param_2,0x801fdf,*(undefined8 *)this);
  uVar1 = ToNumber(this,uVar1);
  uVar2 = Type::Intersect(param_3,0x801fdf,*(undefined8 *)this);
  uVar2 = ToNumber(this,uVar2);
  NumberBitwiseXor(this,uVar1,uVar2);
  return;
}

