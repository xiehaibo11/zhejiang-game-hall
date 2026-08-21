
void FUN_012fe9dc(SimplifiedOperatorBuilder *param_1,long param_2)

{
  switch(*(undefined2 *)(param_2 + 0x10)) {
  case 0x72:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberEqual(param_1);
    return;
  case 0x73:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberLessThan(param_1);
    return;
  case 0x74:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberLessThanOrEqual(param_1);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x8f:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberSubtract(param_1);
    return;
  case 0x90:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberMultiply(param_1);
    return;
  case 0x91:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberDivide(param_1);
    return;
  case 0x92:
    v8::internal::compiler::SimplifiedOperatorBuilder::NumberModulus(param_1);
    return;
  }
}

