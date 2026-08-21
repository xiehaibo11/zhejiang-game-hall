
/* v8::internal::compiler::Typer::Visitor::JSShiftRightLogicalTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

void v8::internal::compiler::Typer::Visitor::JSShiftRightLogicalTyper
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  OperationTyper *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pOVar1 = (OperationTyper *)(param_3 + 0x28);
  uVar2 = OperationTyper::ToNumber(pOVar1,param_1);
  uVar3 = OperationTyper::ToNumber(pOVar1,param_2);
  OperationTyper::NumberShiftRightLogical(pOVar1,uVar2,uVar3);
  return;
}

