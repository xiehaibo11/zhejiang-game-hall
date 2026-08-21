
/* v8::internal::compiler::Typer::Visitor::BinaryNumberOpTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*, v8::internal::compiler::Type
   (*)(v8::internal::compiler::Type, v8::internal::compiler::Type, v8::internal::compiler::Typer*))
    */

undefined8
v8::internal::compiler::Typer::Visitor::BinaryNumberOpTyper
          (undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_48;
  long local_28;
  
  lVar3 = OperationTyper::ToNumeric((OperationTyper *)(param_3 + 0x28),param_1);
  local_28 = lVar3;
  local_48 = OperationTyper::ToNumeric((OperationTyper *)(param_3 + 0x28),param_2);
  if (lVar3 == 0x1c5f) {
    uVar1 = 1;
  }
  else {
    uVar1 = Type::SlowIs((Type *)&local_28,0x1c5f);
  }
  if (((local_48 == 0x1c5f) ||
      (uVar2 = Type::SlowIs((Type *)&local_48,0x1c5f), ((uVar2 ^ 1) & 1) == 0)) &&
     (((uVar1 ^ 1) & 1) == 0)) {
    uVar4 = (*param_4)(local_28,local_48,param_3);
  }
  else if ((uVar1 & 1) == 0) {
    uVar4 = 0x8000001;
    if (local_28 != 0x8000001) {
      uVar5 = Type::SlowIs((Type *)&local_28,0x8000001);
      if ((uVar5 & 1) == 0) {
        uVar4 = 0x8001c5f;
      }
    }
  }
  else {
    uVar4 = 0x1c5f;
  }
  return uVar4;
}

