
/* v8::internal::compiler::OperationTyper::SpeculativeToNumber(v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::SpeculativeToNumber(OperationTyper *this,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = Type::Intersect(param_2,0x801fdf,*(undefined8 *)this);
  ToNumber(this,uVar1);
  return;
}

