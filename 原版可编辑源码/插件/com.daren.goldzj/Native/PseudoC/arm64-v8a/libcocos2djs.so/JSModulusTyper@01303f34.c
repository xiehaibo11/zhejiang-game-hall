
/* v8::internal::compiler::Typer::Visitor::JSModulusTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::JSModulusTyper
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  OperationTyper *pOVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_38;
  long local_18;
  
  pOVar1 = (OperationTyper *)(param_3 + 0x28);
  lVar4 = OperationTyper::ToNumeric(pOVar1,param_1);
  local_18 = lVar4;
  local_38 = OperationTyper::ToNumeric(pOVar1,param_2);
  if (lVar4 == 0x1c5f) {
    uVar2 = 1;
  }
  else {
    uVar2 = Type::SlowIs((Type *)&local_18,0x1c5f);
  }
  if (((local_38 == 0x1c5f) ||
      (uVar3 = Type::SlowIs((Type *)&local_38,0x1c5f), ((uVar3 ^ 1) & 1) == 0)) &&
     (((uVar2 ^ 1) & 1) == 0)) {
    uVar5 = OperationTyper::NumberModulus(pOVar1,local_18,local_38);
  }
  else if ((uVar2 & 1) == 0) {
    uVar5 = 0x8000001;
    if (local_18 != 0x8000001) {
      uVar6 = Type::SlowIs((Type *)&local_18,0x8000001);
      if ((uVar6 & 1) == 0) {
        uVar5 = 0x8001c5f;
      }
    }
  }
  else {
    uVar5 = 0x1c5f;
  }
  return uVar5;
}

