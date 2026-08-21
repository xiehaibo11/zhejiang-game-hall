
/* v8::internal::compiler::Typer::Visitor::BitwiseNot(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

undefined8 v8::internal::compiler::Typer::Visitor::BitwiseNot(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_28;
  
  local_28 = OperationTyper::ToNumeric((OperationTyper *)(param_2 + 0x28),param_1);
  lVar3 = 0x1c5f;
  if ((local_28 == 0x1c5f) ||
     (uVar1 = Type::SlowIs((Type *)&local_28,0x1c5f), lVar3 = local_28, (uVar1 & 1) != 0)) {
    uVar2 = OperationTyper::NumberBitwiseXor
                      ((OperationTyper *)(param_2 + 0x28),lVar3,
                       *(undefined8 *)(*(long *)(param_2 + 0x18) + 0xf8));
  }
  else {
    uVar2 = 0x8001c5f;
  }
  return uVar2;
}

