
/* v8::internal::compiler::DeoptimizationLiteral::Reify(v8::internal::Isolate*) const */

undefined8 __thiscall
v8::internal::compiler::DeoptimizationLiteral::Reify(DeoptimizationLiteral *this,Isolate *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    uVar2 = StringConstantBase::AllocateStringConstant
                      (*(StringConstantBase **)(this + 0x18),param_1);
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      return *(undefined8 *)(this + 8);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar2 = Factory::NewNumber<(v8::internal::AllocationType)0>
                    ((Factory *)param_1,*(double *)(this + 0x10));
  return uVar2;
}

