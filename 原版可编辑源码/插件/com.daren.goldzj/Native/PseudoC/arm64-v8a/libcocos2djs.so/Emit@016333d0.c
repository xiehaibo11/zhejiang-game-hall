
/* v8::internal::compiler::InstructionSelector::Emit(unsigned int,
   v8::internal::compiler::InstructionOperand, unsigned long,
   v8::internal::compiler::InstructionOperand*) */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::Emit
          (InstructionSelector *this,uint param_1,ulong param_3,ulong param_4,
          InstructionOperand *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  Zone *this_00;
  Instruction *this_01;
  ulong uVar4;
  ulong local_48;
  
  uVar4 = (ulong)((param_3 & 7) != 0);
  if (param_4 < 0x3f) {
    this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
    lVar1 = uVar4 + param_4;
    this_01 = *(Instruction **)(this_00 + 0x10);
    uVar2 = 0x30;
    if (lVar1 != 0) {
      uVar2 = (lVar1 << 0x23) + 0x2800000000 >> 0x20;
    }
    local_48 = param_3;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < uVar2) {
      this_01 = (Instruction *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(Instruction **)(this_00 + 0x10) = this_01 + uVar2;
    }
    Instruction::Instruction
              (this_01,param_1,uVar4,(InstructionOperand *)&local_48,0,(InstructionOperand *)0x0,
               param_4,param_5);
    uVar3 = Emit(this,this_01);
  }
  else {
    uVar3 = 0;
    this[0x178] = (InstructionSelector)0x1;
  }
  return uVar3;
}

