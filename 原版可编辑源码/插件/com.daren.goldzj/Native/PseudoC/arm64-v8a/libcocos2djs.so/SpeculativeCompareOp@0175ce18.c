
/* v8::internal::compiler::JSSpeculativeBinopBuilder::SpeculativeCompareOp(v8::internal::compiler::NumberOperationHint)
    */

void v8::internal::compiler::JSSpeculativeBinopBuilder::SpeculativeCompareOp(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  switch(*(undefined2 *)(param_1[1] + 0x10)) {
  case 0x2b1:
    SimplifiedOperatorBuilder::SpeculativeNumberEqual
              (*(SimplifiedOperatorBuilder **)(*(long *)(*param_1 + 8) + 0x178));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x2b3:
    lVar1 = *param_1;
    break;
  case 0x2b4:
    lVar1 = *param_1;
    auVar2 = NEON_ext(*(undefined1 (*) [16])(param_1 + 2),*(undefined1 (*) [16])(param_1 + 2),8,1);
    param_1[3] = auVar2._8_8_;
    param_1[2] = auVar2._0_8_;
    break;
  case 0x2b5:
    lVar1 = *param_1;
    goto LAB_0175cea0;
  case 0x2b6:
    lVar1 = *param_1;
    auVar2 = NEON_ext(*(undefined1 (*) [16])(param_1 + 2),*(undefined1 (*) [16])(param_1 + 2),8,1);
    param_1[3] = auVar2._8_8_;
    param_1[2] = auVar2._0_8_;
LAB_0175cea0:
    SimplifiedOperatorBuilder::SpeculativeNumberLessThanOrEqual
              (*(SimplifiedOperatorBuilder **)(*(long *)(lVar1 + 8) + 0x178));
    return;
  }
  SimplifiedOperatorBuilder::SpeculativeNumberLessThan
            (*(SimplifiedOperatorBuilder **)(*(long *)(lVar1 + 8) + 0x178));
  return;
}

