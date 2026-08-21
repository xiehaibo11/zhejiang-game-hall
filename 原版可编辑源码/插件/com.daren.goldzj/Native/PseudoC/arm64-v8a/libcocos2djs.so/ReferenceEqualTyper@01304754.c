
/* v8::internal::compiler::Typer::Visitor::ReferenceEqualTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::ReferenceEqualTyper(int *param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int *local_8;
  
  if (((((ulong)param_1 & 1) == 0) && (*param_1 == 0)) &&
     ((param_2 == param_1 ||
      (local_8 = param_2, uVar2 = Type::SlowIs((Type *)&local_8,param_1), (uVar2 & 1) != 0)))) {
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
  }
  else {
    uVar1 = 0x201;
  }
  return uVar1;
}

