
/* v8::internal::compiler::TypedOptimization::NumberComparisonFor(v8::internal::compiler::Operator
   const*) */

void __thiscall
v8::internal::compiler::TypedOptimization::NumberComparisonFor
          (TypedOptimization *this,Operator *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x10);
  if (sVar1 == 0x7b) {
    SimplifiedOperatorBuilder::NumberLessThanOrEqual
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
    return;
  }
  if (sVar1 != 0x7a) {
    if (sVar1 == 0x79) {
      SimplifiedOperatorBuilder::NumberEqual
                (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  SimplifiedOperatorBuilder::NumberLessThan
            (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
  return;
}

