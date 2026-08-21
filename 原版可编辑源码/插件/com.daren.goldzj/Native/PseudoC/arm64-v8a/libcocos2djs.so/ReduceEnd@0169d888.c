
/* v8::internal::compiler::DeadCodeElimination::ReduceEnd(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceEnd(DeadCodeElimination *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  Operator *pOVar2;
  Node *pNVar3;
  uint uVar4;
  uint uVar5;
  Node *this_01;
  Node *pNVar6;
  Node *pNVar7;
  ulong uVar8;
  
  pNVar1 = param_1 + 0x20;
  uVar4 = (byte)param_1[0x17] & 0xf;
  pNVar7 = pNVar1;
  if (uVar4 == 0xf) {
    uVar4 = *(uint *)(*(long *)pNVar1 + 8);
    pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  if (0 < (int)uVar4) {
    uVar8 = 0;
    uVar5 = 0;
    do {
      this_01 = *(Node **)(pNVar7 + uVar8 * 8);
      if (*(short *)(*(long *)this_01 + 0x10) != 0x3d) {
        if (uVar8 != uVar5) {
          pNVar6 = pNVar1;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
          }
          this_00 = *(Node **)(pNVar6 + (long)(int)uVar5 * 8);
          if (this_00 != this_01) {
            pNVar3 = param_1;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar3 = *(Node **)pNVar1;
            }
            if (this_00 != (Node *)0x0) {
              Node::RemoveUse(this_00,(Use *)(pNVar3 + (long)(int)~uVar5 * 0x18));
            }
            *(Node **)(pNVar6 + (long)(int)uVar5 * 8) = this_01;
            if (this_01 != (Node *)0x0) {
              Node::AppendUse(this_01,(Use *)(pNVar3 + (long)(int)~uVar5 * 0x18));
            }
          }
        }
        uVar5 = uVar5 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
    if (uVar5 != 0) {
      if ((int)uVar5 < (int)uVar4) {
        Node::TrimInputCount(param_1,uVar5);
        pOVar2 = (Operator *)
                 CommonOperatorBuilder::End
                           (*(CommonOperatorBuilder **)(this + 0x18),(long)(int)uVar5);
        NodeProperties::ChangeOp(param_1,pOVar2);
        return param_1;
      }
      return (Node *)0x0;
    }
  }
  return *(Node **)(this + 0x20);
}

