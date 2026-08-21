
/* v8::internal::compiler::BytecodeGraphBuilder::BuildReturn(v8::internal::compiler::BytecodeLivenessState
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildReturn
          (BytecodeGraphBuilder *this,BytecodeLivenessState *param_1)

{
  Node *pNVar1;
  Operator *pOVar2;
  long lVar3;
  Node *local_30;
  undefined8 uStack_28;
  
  BuildLoopExitsUntilLoop(this,-1,param_1);
  pNVar1 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Return(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),1);
  lVar3 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar3 + 0x5c) <
      (ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3)) {
    uStack_28 = *(undefined8 *)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x5c) * 8);
    local_30 = pNVar1;
    pNVar1 = (Node *)MakeNode(this,pOVar2,2,&local_30,false);
    MergeControlToLeaveFunction(this,pNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

