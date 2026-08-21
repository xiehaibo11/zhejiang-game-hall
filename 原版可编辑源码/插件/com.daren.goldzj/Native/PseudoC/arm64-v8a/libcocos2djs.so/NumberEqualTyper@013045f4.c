
/* v8::internal::compiler::Typer::Visitor::NumberEqualTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

void v8::internal::compiler::Typer::Visitor::NumberEqualTyper
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = OperationTyper::ToNumber((OperationTyper *)(param_3 + 0x28),param_1);
  uVar2 = OperationTyper::ToNumber((OperationTyper *)(param_3 + 0x28),param_2);
  JSEqualTyper(uVar1,uVar2,param_3);
  return;
}

