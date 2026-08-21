
/* v8::internal::compiler::OperationTyper::Invert(v8::internal::compiler::Type) */

long __thiscall v8::internal::compiler::OperationTyper::Invert(OperationTyper *this,long param_2)

{
  ulong uVar1;
  long lVar2;
  long local_8;
  
  local_8 = param_2;
  if (param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!type.IsNone()");
  }
  if (*(long *)(this + 0x30) == param_2) {
    lVar2 = *(long *)(this + 0x38);
  }
  else {
    uVar1 = Type::SlowIs((Type *)&local_8);
    lVar2 = *(long *)(this + 0x38);
    if (((uVar1 & 1) == 0) &&
       ((local_8 == *(long *)(this + 0x38) ||
        (uVar1 = Type::SlowIs((Type *)&local_8), lVar2 = local_8, (uVar1 & 1) != 0)))) {
      lVar2 = *(long *)(this + 0x30);
    }
  }
  return lVar2;
}

