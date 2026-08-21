
/* v8::internal::compiler::BytecodeGraphBuilder::BuildSwitchOnSmi(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildSwitchOnSmi
          (BytecodeGraphBuilder *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  Operator *pOVar3;
  ulong uVar4;
  undefined8 uVar5;
  iterator aiStack_a0 [32];
  Node *local_80 [4];
  JumpTableTargetOffsets aJStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets();
  iVar2 = interpreter::JumpTableTargetOffsets::size(aJStack_60);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Switch
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),(long)(iVar2 + 1));
  local_80[0] = param_1;
  MakeNode(this,pOVar3,1,local_80,false);
  interpreter::JumpTableTargetOffsets::begin();
  interpreter::JumpTableTargetOffsets::end();
  while (uVar4 = interpreter::JumpTableTargetOffsets::iterator::operator!=
                           ((iterator *)local_80,aiStack_a0), (uVar4 & 1) != 0) {
    uVar4 = interpreter::JumpTableTargetOffsets::iterator::operator*((iterator *)local_80);
    uVar5 = Environment::Copy(*(Environment **)(this + 0xa8));
    pOVar3 = (Operator *)
             CommonOperatorBuilder::IfValue
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),uVar4 & 0xffffffff,0
                        ,0);
    MakeNode(this,pOVar3,0,(Node **)0x0,false);
    MergeIntoSuccessorEnvironment(this,(int)(uVar4 >> 0x20));
    *(undefined8 *)(this + 0xa8) = uVar5;
    interpreter::JumpTableTargetOffsets::iterator::operator++((iterator *)local_80);
  }
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfDefault
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0);
  MakeNode(this,pOVar3,0,(Node **)0x0,false);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

