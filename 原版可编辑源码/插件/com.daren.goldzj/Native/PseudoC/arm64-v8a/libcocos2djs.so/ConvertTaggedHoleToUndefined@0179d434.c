
/* v8::internal::compiler::OperationTyper::ConvertTaggedHoleToUndefined(v8::internal::compiler::Type)
    */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::ConvertTaggedHoleToUndefined
          (OperationTyper *this,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  uVar1 = Type::Maybe((Type *)&local_8,0x800001);
  if ((uVar1 & 1) != 0) {
    uVar2 = Type::Intersect(local_8,0xc7f7fff,*(undefined8 *)this);
    local_8 = Type::Union(uVar2,0x101,*(undefined8 *)this);
  }
  return local_8;
}

