
/* v8::internal::compiler::InstructionSelector::VisitWord32AtomicBinaryOperation(v8::internal::compiler::Node*,
   v8::internal::compiler::ArchOpcode, v8::internal::compiler::ArchOpcode,
   v8::internal::compiler::ArchOpcode, v8::internal::compiler::ArchOpcode,
   v8::internal::compiler::ArchOpcode) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32AtomicBinaryOperation
          (InstructionSelector *this,undefined8 *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = AtomicOpType((Operator *)*param_1);
  uVar1 = uVar2 & 0xff;
  if (uVar1 == 4) {
    if ((uVar2 >> 8 & 0xfe) == 2) goto LAB_01625e20;
  }
  else if (((uVar1 == 3) || (param_6 = param_4, param_5 = param_3, uVar1 == 2)) &&
          ((uVar1 = uVar2 >> 8 & 0xff, param_7 = param_5, uVar1 == 2 ||
           (param_7 = param_6, uVar1 == 3)))) {
LAB_01625e20:
    FUN_01625e50(this,param_1,param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

