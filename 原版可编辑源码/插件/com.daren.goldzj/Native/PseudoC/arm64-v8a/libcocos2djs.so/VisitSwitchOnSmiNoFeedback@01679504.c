
/* v8::internal::compiler::BytecodeGraphBuilder::VisitSwitchOnSmiNoFeedback() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitSwitchOnSmiNoFeedback(BytecodeGraphBuilder *this)

{
  long lVar1;
  Operator *pOVar2;
  long lVar3;
  Node *pNVar4;
  Node *local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PrepareEagerCheckpoint(this);
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3) <=
      (ulong)(long)*(int *)(lVar3 + 0x5c)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pNVar4 = *(Node **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
  local_48 = 0;
  local_40 = 0xffffffff;
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::CheckSmi
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),
                      (FeedbackSource *)&local_48);
  local_50 = pNVar4;
  pNVar4 = (Node *)MakeNode(this,pOVar2,1,&local_50,false);
  BuildSwitchOnSmi(this,pNVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

