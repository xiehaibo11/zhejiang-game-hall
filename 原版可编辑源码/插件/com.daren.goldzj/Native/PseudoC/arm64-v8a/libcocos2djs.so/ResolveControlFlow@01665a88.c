
/* v8::internal::compiler::LiveRangeConnector::ResolveControlFlow(v8::internal::compiler::InstructionBlock
   const*, v8::internal::compiler::InstructionOperand const&,
   v8::internal::compiler::InstructionBlock const*, v8::internal::compiler::InstructionOperand
   const&) */

int __thiscall
v8::internal::compiler::LiveRangeConnector::ResolveControlFlow
          (LiveRangeConnector *this,InstructionBlock *param_1,InstructionOperand *param_2,
          InstructionBlock *param_3,InstructionOperand *param_4)

{
  ulong uVar1;
  bool bVar2;
  ParallelMove *this_00;
  long lVar3;
  int iVar4;
  Zone *this_01;
  long *plVar5;
  
  bVar2 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) != 4;
  if (bVar2) {
    iVar4 = *(int *)(param_3 + 0x74) + -1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x70);
  }
  lVar3 = *(long *)(*(long *)this + 0x10);
  this_01 = *(Zone **)(lVar3 + 8);
  uVar1 = *(long *)(lVar3 + 0xb0) + (long)iVar4;
  plVar5 = (long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8))
                             + (uVar1 & 0x1ff) * 8) + (ulong)bVar2 * 8 + 8);
  this_00 = (ParallelMove *)*plVar5;
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
    *plVar5 = (long)this_00;
  }
  ParallelMove::AddMove(this_00,param_4,param_2,*(Zone **)(this_00 + 0x18));
  return iVar4;
}

