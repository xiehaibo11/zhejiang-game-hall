
/* v8::internal::compiler::JSSpeculativeBinopBuilder::SpeculativeNumberOp(v8::internal::compiler::NumberOperationHint)
    */

void __thiscall
v8::internal::compiler::JSSpeculativeBinopBuilder::SpeculativeNumberOp
          (JSSpeculativeBinopBuilder *this,uint param_2)

{
  switch(*(undefined2 *)(*(long *)(this + 8) + 0x10)) {
  case 0x2b7:
    SimplifiedOperatorBuilder::SpeculativeNumberBitwiseOr
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 0x2b8:
    SimplifiedOperatorBuilder::SpeculativeNumberBitwiseXor
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 0x2b9:
    SimplifiedOperatorBuilder::SpeculativeNumberBitwiseAnd
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 0x2ba:
    SimplifiedOperatorBuilder::SpeculativeNumberShiftLeft
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 699:
    SimplifiedOperatorBuilder::SpeculativeNumberShiftRight
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 700:
    SimplifiedOperatorBuilder::SpeculativeNumberShiftRightLogical
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 0x2bd:
    break;
  case 0x2be:
    if ((param_2 & 0xfd) == 0) {
      SimplifiedOperatorBuilder::SpeculativeSafeIntegerSubtract
                (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
      return;
    }
    SimplifiedOperatorBuilder::SpeculativeNumberSubtract();
    return;
  case 0x2bf:
    SimplifiedOperatorBuilder::SpeculativeNumberMultiply
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 0x2c0:
    SimplifiedOperatorBuilder::SpeculativeNumberDivide
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  case 0x2c1:
    SimplifiedOperatorBuilder::SpeculativeNumberModulus
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if ((param_2 & 0xfd) == 0) {
    SimplifiedOperatorBuilder::SpeculativeSafeIntegerAdd
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 8) + 0x178));
    return;
  }
  SimplifiedOperatorBuilder::SpeculativeNumberAdd();
  return;
}

