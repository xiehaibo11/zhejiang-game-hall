
/* v8::internal::compiler::OperationTyper::ToNumeric(v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::ToNumeric(OperationTyper *this,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar1 = Type::Maybe((Type *)&local_28,0x47f0001);
  if ((uVar1 & 1) != 0) {
    local_28 = Type::Union(local_28,0x8000001,*(undefined8 *)this);
  }
  uVar2 = Type::Intersect(local_28,0x47f7fff,*(undefined8 *)this);
  uVar2 = ToNumber(this,uVar2);
  uVar3 = Type::Intersect(local_28,0x8000001,*(undefined8 *)this);
  Type::Union(uVar2,uVar3,*(undefined8 *)this);
  return;
}

