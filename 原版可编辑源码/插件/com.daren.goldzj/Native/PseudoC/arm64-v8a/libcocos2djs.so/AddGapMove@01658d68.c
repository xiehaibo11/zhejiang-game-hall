
/* v8::internal::compiler::RegisterAllocationData::AddGapMove(int,
   v8::internal::compiler::Instruction::GapPosition, v8::internal::compiler::InstructionOperand
   const&, v8::internal::compiler::InstructionOperand const&) */

void __thiscall
v8::internal::compiler::RegisterAllocationData::AddGapMove
          (RegisterAllocationData *this,int param_1,ulong param_3,InstructionOperand *param_4,
          InstructionOperand *param_5)

{
  ulong uVar1;
  ParallelMove *this_00;
  long lVar2;
  Zone *this_01;
  long *plVar3;
  
  lVar2 = *(long *)(this + 0x10);
  this_01 = *(Zone **)(lVar2 + 8);
  uVar1 = *(long *)(lVar2 + 0xb0) + (long)param_1;
  plVar3 = (long *)(*(long *)(*(long *)(*(long *)(lVar2 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8))
                             + (uVar1 & 0x1ff) * 8) + (param_3 & 0xffffffff) * 8 + 8);
  this_00 = (ParallelMove *)*plVar3;
  if (this_00 == (ParallelMove *)0x0) {
    this_00 = *(ParallelMove **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (ParallelMove *)Zone::NewExpand(this_01,0x20);
    }
    else {
      *(ParallelMove **)(this_01 + 0x10) = this_00 + 0x20;
    }
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(Zone **)(this_00 + 0x18) = this_01;
    *plVar3 = (long)this_00;
  }
  ParallelMove::AddMove(this_00,param_4,param_5,*(Zone **)(this_00 + 0x18));
  return;
}

