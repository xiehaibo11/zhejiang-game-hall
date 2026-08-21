
/* v8::internal::compiler::OperationTyper::ToBoolean(v8::internal::compiler::Type) */

long __thiscall v8::internal::compiler::OperationTyper::ToBoolean(OperationTyper *this,long param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  long local_28;
  long local_8;
  
  if (param_2 == 0x201) {
    return 0x201;
  }
  local_28 = param_2;
  uVar1 = Type::SlowIs((Type *)&local_28,0x201);
  if ((uVar1 & 1) != 0) {
    return local_28;
  }
  if ((local_28 == *(long *)(this + 0x68)) ||
     (uVar1 = Type::SlowIs((Type *)&local_28), (uVar1 & 1) != 0)) {
LAB_0179d4f0:
    lVar2 = *(long *)(this + 0x30);
  }
  else {
    if ((local_28 != *(long *)(this + 0x60)) &&
       (uVar1 = Type::SlowIs((Type *)&local_28), (uVar1 & 1) == 0)) {
      if (local_28 == 0x1c5f) {
        local_8 = 0x1c5f;
      }
      else {
        uVar1 = Type::SlowIs((Type *)&local_28,0x1c5f);
        if ((uVar1 & 1) == 0) {
          return 0x201;
        }
        local_8 = local_28;
        if (local_28 == 1) {
          return 1;
        }
      }
      if ((*(long *)(*(long *)(this + 8) + 0x148) == local_8) ||
         (uVar1 = Type::SlowIs((Type *)&local_8), (uVar1 & 1) != 0)) goto LAB_0179d4f0;
      if ((local_8 != 0x45f) && (uVar1 = Type::SlowIs((Type *)&local_8,0x45f), (uVar1 & 1) == 0)) {
        return 0x201;
      }
      dVar3 = (double)Type::Max((Type *)&local_8);
      if ((0.0 <= dVar3) && (dVar3 = (double)Type::Min((Type *)&local_8), dVar3 <= 0.0)) {
        return 0x201;
      }
    }
    lVar2 = *(long *)(this + 0x38);
  }
  return lVar2;
}

