
/* v8::internal::compiler::DeadCodeElimination::ReduceDeoptimizeOrReturnOrTerminateOrTailCall(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceDeoptimizeOrReturnOrTerminateOrTailCall
          (DeadCodeElimination *this,Node *param_1)

{
  Graph *this_00;
  Node *pNVar1;
  long lVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Node *this_01;
  Node *pNVar5;
  uint uVar6;
  Node *pNVar7;
  long lVar8;
  Use *pUVar9;
  Node *local_60;
  Node *pNStack_58;
  
  pNVar1 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if ((pNVar1 == (Node *)0x0) || (*(short *)(*(long *)pNVar1 + 0x10) != 0x3d)) {
    pNVar1 = param_1 + 0x20;
    uVar6 = (byte)param_1[0x17] & 0xf;
    pNVar3 = pNVar1;
    if (uVar6 == 0xf) {
      uVar6 = *(uint *)(*(long *)pNVar1 + 8);
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    if (uVar6 != 0) {
      lVar8 = (long)(int)uVar6 << 3;
      do {
        pNVar7 = *(Node **)pNVar3;
        if ((*(ushort *)(*(long *)pNVar7 + 0x10) - 0x3b < 3) ||
           (lVar2 = NodeProperties::GetTypeOrAny(pNVar7), lVar2 == 1)) {
          if (pNVar7 != (Node *)0x0) {
            pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
            pNVar7 = (Node *)NodeProperties::GetControlInput(param_1,0);
            if (*(short *)(*(long *)pNVar3 + 0x10) != 0x3b) {
              this_00 = *(Graph **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::Unreachable(*(CommonOperatorBuilder **)(this + 0x18));
              local_60 = pNVar3;
              pNStack_58 = pNVar7;
              pNVar3 = (Node *)Graph::NewNode(this_00,pOVar4,2,&local_60,false);
              *(undefined8 *)(pNVar3 + 8) = 1;
            }
            Node::TrimInputCount(param_1,2);
            pNVar5 = pNVar1;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            this_01 = *(Node **)pNVar5;
            if (this_01 != pNVar3) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar9 = (Use *)(*(long *)pNVar1 + -0x18);
              }
              else {
                pUVar9 = (Use *)(param_1 + -0x18);
              }
              if (this_01 != (Node *)0x0) {
                Node::RemoveUse(this_01,pUVar9);
              }
              *(Node **)pNVar5 = pNVar3;
              if (pNVar3 != (Node *)0x0) {
                Node::AppendUse(pNVar3,pUVar9);
              }
            }
            pNVar3 = pNVar1;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            pNVar5 = *(Node **)(pNVar3 + 8);
            if (pNVar5 != pNVar7) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar9 = (Use *)(*(long *)pNVar1 + -0x30);
              }
              else {
                pUVar9 = (Use *)(param_1 + -0x30);
              }
              if (pNVar5 != (Node *)0x0) {
                Node::RemoveUse(pNVar5,pUVar9);
              }
              *(Node **)(pNVar3 + 8) = pNVar7;
              if (pNVar7 != (Node *)0x0) {
                Node::AppendUse(pNVar7,pUVar9);
              }
            }
            pOVar4 = (Operator *)
                     CommonOperatorBuilder::Throw(*(CommonOperatorBuilder **)(this + 0x18));
            NodeProperties::ChangeOp(param_1,pOVar4);
            return param_1;
          }
          break;
        }
        lVar8 = lVar8 + -8;
        pNVar3 = pNVar3 + 8;
      } while (lVar8 != 0);
    }
    pNVar1 = (Node *)0x0;
  }
  return pNVar1;
}

