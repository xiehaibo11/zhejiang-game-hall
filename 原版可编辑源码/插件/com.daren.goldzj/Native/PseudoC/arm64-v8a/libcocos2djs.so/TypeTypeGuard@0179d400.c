
/* v8::internal::compiler::OperationTyper::TypeTypeGuard(v8::internal::compiler::Operator const*,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::TypeTypeGuard
          (OperationTyper *this,Operator *param_1,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = TypeGuardTypeOf(param_1);
  Type::Intersect(param_3,uVar1,*(undefined8 *)this);
  return;
}

