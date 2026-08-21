
/* v8::internal::compiler::InstructionSelector::Emit(unsigned int, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*) */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::Emit
          (InstructionSelector *this,uint param_1,ulong param_2,InstructionOperand *param_3,
          ulong param_4,InstructionOperand *param_5,ulong param_6,InstructionOperand *param_7)

{
  long lVar1;
  ulong uVar2;
  Zone *this_00;
  undefined8 uVar3;
  Instruction *this_01;
  
  if (((param_2 < 0xff) && (param_4 < 0xffff)) && (param_6 < 0x3f)) {
    if ((uint)param_4 < 0x10000) {
      lVar1 = param_4 + param_2 + param_6;
      this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
      this_01 = *(Instruction **)(this_00 + 0x10);
      uVar2 = 0x30;
      if (lVar1 != 0) {
        uVar2 = (lVar1 << 0x23) + 0x2800000000 >> 0x20;
      }
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < uVar2) {
        this_01 = (Instruction *)Zone::NewExpand(this_00,uVar2);
      }
      else {
        *(Instruction **)(this_00 + 0x10) = this_01 + uVar2;
      }
      Instruction::Instruction(this_01,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      uVar3 = Emit(this,this_01);
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","InputCountField::is_valid(input_count)");
  }
  this[0x178] = (InstructionSelector)0x1;
  return 0;
}

