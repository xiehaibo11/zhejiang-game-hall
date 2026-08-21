
/* v8::internal::compiler::Typer::Visitor::NumberLessThanTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::NumberLessThanTyper
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = OperationTyper::ToNumber((OperationTyper *)(param_3 + 0x28),param_1);
  uVar3 = OperationTyper::ToNumber((OperationTyper *)(param_3 + 0x28),param_2);
  uVar1 = NumberCompareTyper(uVar2,uVar3);
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else if ((uVar1 & 6) == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0xa8);
  }
  else if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0xa0);
  }
  else {
    uVar2 = 0x201;
  }
  return uVar2;
}

