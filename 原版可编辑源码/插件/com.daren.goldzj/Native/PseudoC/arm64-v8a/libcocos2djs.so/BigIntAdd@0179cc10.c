
/* v8::internal::compiler::OperationTyper::BigIntAdd(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::BigIntAdd(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x8000001;
  if (param_3 == 1 || param_2 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}

