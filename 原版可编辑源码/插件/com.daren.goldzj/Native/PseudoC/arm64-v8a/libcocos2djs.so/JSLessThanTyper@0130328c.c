
/* v8::internal::compiler::Typer::Visitor::JSLessThanTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::JSLessThanTyper
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = JSCompareTyper();
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

