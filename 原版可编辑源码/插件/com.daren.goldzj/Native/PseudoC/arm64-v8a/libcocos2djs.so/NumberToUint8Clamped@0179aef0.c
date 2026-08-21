
/* v8::internal::compiler::OperationTyper::NumberToUint8Clamped(v8::internal::compiler::Type) */

long __thiscall
v8::internal::compiler::OperationTyper::NumberToUint8Clamped(OperationTyper *this,long param_2)

{
  ulong uVar1;
  long local_8;
  
  if ((*(long *)(*(long *)(this + 8) + 0x60) != param_2) &&
     (local_8 = param_2, uVar1 = Type::SlowIs((Type *)&local_8), param_2 = local_8, (uVar1 & 1) == 0
     )) {
    param_2 = *(long *)(*(long *)(this + 8) + 0x60);
  }
  return param_2;
}

