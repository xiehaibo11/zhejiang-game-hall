
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::PrepareForLoopExit(v8::internal::compiler::Node*,
   v8::internal::compiler::BytecodeLoopAssignments const&,
   v8::internal::compiler::BytecodeLivenessState const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::PrepareForLoopExit
          (Environment *this,Node *param_1,BytecodeLoopAssignments *param_2,
          BytecodeLivenessState *param_3)

{
  uint uVar1;
  Graph *pGVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  BytecodeLivenessState *pBVar8;
  uint uVar9;
  long lVar10;
  Node *pNVar11;
  Node *local_60;
  Node *pNStack_58;
  
  pNVar11 = *(Node **)(this + 0x18);
  pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::LoopExit
                     ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
  local_60 = pNVar11;
  pNStack_58 = param_1;
  uVar4 = Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
  *(undefined8 *)(this + 0x18) = uVar4;
  pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::LoopExitEffect
                     ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
  local_60 = *(Node **)(this + 0x20);
  pNStack_58 = (Node *)uVar4;
  uVar5 = Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
  *(undefined8 *)(this + 0x20) = uVar5;
  if (0 < *(int *)(this + 0xc)) {
    lVar10 = 0;
    do {
      uVar6 = BytecodeLoopAssignments::ContainsParameter(param_2,(int)lVar10);
      if ((uVar6 & 1) != 0) {
        pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::LoopExitValue
                           ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
        local_60 = *(Node **)(*(long *)(this + 0x28) + lVar10 * 8);
        pNStack_58 = (Node *)uVar4;
        uVar5 = Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
        *(undefined8 *)(*(long *)(this + 0x28) + lVar10 * 8) = uVar5;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(this + 0xc));
  }
  if (0 < *(int *)(this + 8)) {
    uVar6 = 0;
    do {
      uVar9 = (uint)uVar6;
      uVar7 = BytecodeLoopAssignments::ContainsLocal(param_2,uVar9);
      if ((uVar7 & 1) != 0) {
        if (param_3 != (BytecodeLivenessState *)0x0) {
          pBVar8 = param_3 + 0x10;
          if (*(int *)(param_3 + 0xc) != 1) {
            pBVar8 = (BytecodeLivenessState *)(*(long *)(param_3 + 0x10) + (ulong)(uVar9 >> 6) * 8);
          }
          if ((*(ulong *)pBVar8 >> (uVar6 & 0x3f) & 1) == 0) goto LAB_01670628;
        }
        pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::LoopExitValue
                           ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
        local_60 = *(Node **)(*(long *)(this + 0x28) +
                             (long)(int)(uVar9 + *(int *)(this + 0x58)) * 8);
        pNStack_58 = (Node *)uVar4;
        uVar5 = Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
        *(undefined8 *)(*(long *)(this + 0x28) + (long)(int)(uVar9 + *(int *)(this + 0x58)) * 8) =
             uVar5;
      }
LAB_01670628:
      uVar6 = (ulong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < *(int *)(this + 8));
  }
  if (param_3 != (BytecodeLivenessState *)0x0) {
    uVar9 = *(int *)(param_3 + 8) - 1;
    pBVar8 = param_3 + 0x10;
    if (*(int *)(param_3 + 0xc) != 1) {
      uVar1 = *(int *)(param_3 + 8) + 0x3e;
      if (-1 < (int)uVar9) {
        uVar1 = uVar9;
      }
      pBVar8 = (BytecodeLivenessState *)(*(long *)pBVar8 + (long)((int)uVar1 >> 6) * 8);
    }
    if ((*(ulong *)pBVar8 >> ((ulong)uVar9 & 0x3f) & 1) == 0) goto LAB_01670700;
  }
  pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::LoopExitValue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
  local_60 = *(Node **)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x5c) * 8);
  pNStack_58 = (Node *)uVar4;
  uVar5 = Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
  *(undefined8 *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x5c) * 8) = uVar5;
LAB_01670700:
  if (*(long *)(this + 0x50) != 0) {
    pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::LoopExitValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
    local_60 = *(Node **)(this + 0x50);
    pNStack_58 = (Node *)uVar4;
    uVar4 = Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
    *(undefined8 *)(this + 0x50) = uVar4;
  }
  return;
}

