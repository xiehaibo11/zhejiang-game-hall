
/* v8::internal::compiler::OperationTyper::ToNumberConvertBigInt(v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::ToNumberConvertBigInt
          (OperationTyper *this,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar1 = Type::Maybe((Type *)&local_28,0x8000001);
  if ((uVar1 & 1) == 0) {
    uVar1 = Type::Maybe((Type *)&local_28,0x47f0001);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  uVar2 = Type::Intersect(local_28,0x47f7fff,*(undefined8 *)this);
  local_28 = ToNumber(this,uVar2);
  if ((uVar1 & 1) != 0) {
    Type::Union(local_28,*(undefined8 *)(*(long *)(this + 8) + 0x150),*(undefined8 *)this);
  }
  return;
}

