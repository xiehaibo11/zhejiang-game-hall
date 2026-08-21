
/* v8::internal::compiler::InstructionSelector::Emit(unsigned int,
   v8::internal::compiler::InstructionOperand, v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::InstructionOperand, unsigned long,
   v8::internal::compiler::InstructionOperand*) */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::Emit
          (InstructionSelector *this,uint param_1,ulong param_3,undefined8 param_4,
          undefined8 param_5,ulong param_6,InstructionOperand *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  Zone *this_00;
  Instruction *this_01;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  if (param_6 < 0x3f) {
    this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
    lVar1 = 2;
    if ((param_3 & 7) != 0) {
      lVar1 = 3;
    }
    this_01 = *(Instruction **)(this_00 + 0x10);
    uVar2 = 0x30;
    if (lVar1 + param_6 != 0) {
      uVar2 = (long)((lVar1 + param_6 << 0x23) + 0x2800000000) >> 0x20;
    }
    local_58 = param_4;
    uStack_50 = param_5;
    local_48 = param_3;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < uVar2) {
      this_01 = (Instruction *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(Instruction **)(this_00 + 0x10) = this_01 + uVar2;
    }
    Instruction::Instruction
              (this_01,param_1,(ulong)((param_3 & 7) != 0),(InstructionOperand *)&local_48,2,
               (InstructionOperand *)&local_58,param_6,param_7);
    uVar3 = Emit(this,this_01);
  }
  else {
    uVar3 = 0;
    this[0x178] = (InstructionSelector)0x1;
  }
  return uVar3;
}

