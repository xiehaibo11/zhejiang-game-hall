
/* v8::internal::compiler::InstructionSelector::VisitWord64AtomicBinaryOperation(v8::internal::compiler::Node*,
   v8::internal::compiler::ArchOpcode, v8::internal::compiler::ArchOpcode,
   v8::internal::compiler::ArchOpcode, v8::internal::compiler::ArchOpcode) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64AtomicBinaryOperation
          (InstructionSelector *this,undefined8 *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = AtomicOpType((Operator *)*param_1);
  switch(uVar1 & 0xff) {
  case 2:
    if ((uVar1 >> 8 & 0xff) != 3) goto switchD_016263d4_default;
    goto LAB_016263f8;
  case 3:
    param_3 = param_4;
    break;
  case 4:
    param_3 = param_5;
    break;
  case 5:
    param_3 = param_6;
    if ((uVar1 >> 8 & 0xff) == 5) goto LAB_016263f8;
  default:
    goto switchD_016263d4_default;
  }
  if ((uVar1 >> 8 & 0xff) == 3) {
LAB_016263f8:
    FUN_01625e50(this,param_1,param_3);
    return;
  }
switchD_016263d4_default:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

