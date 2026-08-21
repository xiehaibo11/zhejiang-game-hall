
/* v8::internal::compiler::InstructionSelector::VisitDeoptimize(v8::internal::DeoptimizeKind,
   v8::internal::DeoptimizeReason, v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitDeoptimize
          (InstructionSelector *this,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulong uVar1;
  InstructionOperand *pIVar2;
  Zone *this_00;
  Instruction *this_01;
  ulong uVar3;
  InstructionOperand *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(*(long *)(this + 0x10) + 8);
  local_50 = (InstructionOperand *)0x0;
  local_48 = 0;
  local_40 = 0;
  AppendDeoptimizeArguments(this,&local_50,param_2,param_3,param_4,param_5);
  pIVar2 = local_50;
  uVar3 = local_48 - (long)local_50;
  if ((ulong)((long)uVar3 >> 3) < 0xffff) {
    if (0xffff < (uint)(uVar3 >> 3)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","InputCountField::is_valid(input_count)");
    }
    this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
    this_01 = *(Instruction **)(this_00 + 0x10);
    uVar1 = 0x30;
    if (uVar3 != 0) {
      uVar1 = (long)((int)uVar3 + 0x28);
    }
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < uVar1) {
      this_01 = (Instruction *)Zone::NewExpand(this_00,uVar1);
    }
    else {
      *(Instruction **)(this_00 + 0x10) = this_01 + uVar1;
    }
    Instruction::Instruction
              (this_01,0x16,0,(InstructionOperand *)0x0,(long)uVar3 >> 3,pIVar2,0,
               (InstructionOperand *)0x0);
    Emit(this,this_01);
  }
  else {
    this[0x178] = (InstructionSelector)0x1;
  }
  return;
}

