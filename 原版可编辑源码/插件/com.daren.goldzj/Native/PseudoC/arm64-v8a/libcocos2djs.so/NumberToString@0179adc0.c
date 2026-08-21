
/* v8::internal::compiler::OperationTyper::NumberToString(v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberToString(OperationTyper *this,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_8;
  
  uVar2 = 1;
  if (param_2 != 1) {
    if ((param_2 == 0x1001) ||
       (local_8 = param_2, uVar1 = Type::SlowIs((Type *)&local_8,0x1001), (uVar1 & 1) != 0)) {
      uVar2 = *(undefined8 *)(this + 0x20);
    }
    else if ((local_8 == *(long *)(*(long *)(this + 8) + 0x100)) ||
            (uVar1 = Type::SlowIs((Type *)&local_8), (uVar1 & 1) != 0)) {
      uVar2 = *(undefined8 *)(this + 0x28);
    }
    else {
      uVar2 = 0x4021;
    }
  }
  return uVar2;
}

