
/* v8::internal::compiler::JSBinopReduction::NumberOp() */

void __thiscall v8::internal::compiler::JSBinopReduction::NumberOp(JSBinopReduction *this)

{
  switch(*(undefined2 *)(**(long **)(this + 8) + 0x10)) {
  case 0x2b7:
    SimplifiedOperatorBuilder::NumberBitwiseOr
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2b8:
    SimplifiedOperatorBuilder::NumberBitwiseXor
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2b9:
    SimplifiedOperatorBuilder::NumberBitwiseAnd
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2ba:
    SimplifiedOperatorBuilder::NumberShiftLeft
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 699:
    SimplifiedOperatorBuilder::NumberShiftRight
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 700:
    SimplifiedOperatorBuilder::NumberShiftRightLogical
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2bd:
    SimplifiedOperatorBuilder::NumberAdd
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2be:
    SimplifiedOperatorBuilder::NumberSubtract
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2bf:
    SimplifiedOperatorBuilder::NumberMultiply
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2c0:
    SimplifiedOperatorBuilder::NumberDivide
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2c1:
    SimplifiedOperatorBuilder::NumberModulus
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  case 0x2c2:
    SimplifiedOperatorBuilder::NumberPow
              (*(SimplifiedOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 0x178));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

