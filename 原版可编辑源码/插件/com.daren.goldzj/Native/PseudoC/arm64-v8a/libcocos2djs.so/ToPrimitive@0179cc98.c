
/* v8::internal::compiler::OperationTyper::ToPrimitive(v8::internal::compiler::Type) */

long __thiscall v8::internal::compiler::OperationTyper::ToPrimitive(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long local_8;
  
  if (param_2 == 0x8007fff) {
    local_8 = 0x8007fff;
  }
  else {
    local_8 = param_2;
    uVar1 = Type::SlowIs((Type *)&local_8,0x8007fff);
    if ((uVar1 & 1) == 0) {
      local_8 = 0x8007fff;
    }
  }
  return local_8;
}

