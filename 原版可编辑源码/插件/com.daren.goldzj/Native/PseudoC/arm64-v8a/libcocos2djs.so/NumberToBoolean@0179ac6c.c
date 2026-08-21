
/* v8::internal::compiler::OperationTyper::NumberToBoolean(v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberToBoolean(OperationTyper *this,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  long local_8;
  
  if (param_2 == 1) {
    uVar1 = 1;
  }
  else if ((*(long *)(*(long *)(this + 8) + 0x148) == param_2) ||
          (local_8 = param_2, uVar2 = Type::SlowIs((Type *)&local_8), (uVar2 & 1) != 0)) {
    uVar1 = *(undefined8 *)(this + 0x30);
  }
  else if (((local_8 != 0x45f) && (uVar2 = Type::SlowIs((Type *)&local_8,0x45f), (uVar2 & 1) == 0))
          || ((dVar3 = (double)Type::Max((Type *)&local_8), 0.0 <= dVar3 &&
              (dVar3 = (double)Type::Min((Type *)&local_8), dVar3 <= 0.0)))) {
    uVar1 = 0x201;
  }
  else {
    uVar1 = *(undefined8 *)(this + 0x38);
  }
  return uVar1;
}

