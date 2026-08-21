
/* v8::internal::compiler::OperationTyper::ConvertReceiver(v8::internal::compiler::Type) */

long __thiscall
v8::internal::compiler::OperationTyper::ConvertReceiver(OperationTyper *this,long param_2)

{
  ulong uVar1;
  long local_28;
  
  local_28 = 0x47f0001;
  if ((param_2 != 0x47f0001) &&
     (local_28 = param_2, uVar1 = Type::SlowIs((Type *)&local_28,0x47f0001), (uVar1 & 1) == 0)) {
    uVar1 = Type::Maybe((Type *)&local_28,0x8007fff);
    local_28 = Type::Intersect(local_28,0x47f0001,*(undefined8 *)this);
    if ((uVar1 & 1) != 0) {
      local_28 = Type::Union(local_28,0x20001,*(undefined8 *)this);
    }
  }
  return local_28;
}

