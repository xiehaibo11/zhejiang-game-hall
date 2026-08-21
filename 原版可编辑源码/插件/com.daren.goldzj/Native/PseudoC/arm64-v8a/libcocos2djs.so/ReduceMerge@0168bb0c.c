
/* v8::internal::compiler::CommonOperatorReducer::ReduceMerge(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceMerge
          (CommonOperatorReducer *this,Node *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  Operator *pOVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  Node *pNVar9;
  long *plVar10;
  long lVar11;
  Node *this_00;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 0xf000000;
  if (uVar1 == 0xf000000) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  if (uVar3 == 2) {
    for (plVar6 = *(long **)(param_1 + 0x18); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      plVar7 = plVar6 + (ulong)(*(uint *)(plVar6 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar6 + 2) & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
      if (*(ushort *)(*plVar7 + 0x10) - 0x23 < 2) {
        return 0;
      }
    }
    pNVar9 = param_1 + 0x20;
    if (uVar1 == 0xf000000) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar7 = *(long **)pNVar9;
    bVar4 = *(short *)(*plVar7 + 0x10) != 4;
    plVar6 = plVar7;
    if (bVar4) {
      plVar6 = *(long **)(pNVar9 + 8);
    }
    plVar2 = *(long **)(pNVar9 + 8);
    if (bVar4) {
      plVar2 = plVar7;
    }
    if ((*(short *)(*plVar6 + 0x10) == 4) && (*(short *)(*plVar2 + 0x10) == 5)) {
      plVar7 = plVar6 + 4;
      uVar1 = *(uint *)((long)plVar6 + 0x14) & 0xf000000;
      plVar8 = plVar7;
      if (uVar1 == 0xf000000) {
        plVar8 = (long *)(*plVar7 + 0x10);
      }
      plVar10 = plVar2 + 4;
      if ((~*(uint *)((long)plVar2 + 0x14) & 0xf000000) == 0) {
        plVar10 = (long *)(*plVar10 + 0x10);
      }
      if ((*plVar8 == *plVar10) && (plVar6 = (long *)plVar6[3], plVar6 != (long *)0x0)) {
        pNVar9 = (Node *)(plVar6 + (ulong)(*(uint *)(plVar6 + 2) >> 1) * 3 + 3);
        if ((*(uint *)(plVar6 + 2) & 1) == 0) {
          pNVar9 = *(Node **)pNVar9;
        }
        if (((pNVar9 == param_1) && (*plVar6 == 0)) &&
           (plVar6 = (long *)plVar2[3], plVar6 != (long *)0x0)) {
          pNVar9 = (Node *)(plVar6 + (ulong)(*(uint *)(plVar6 + 2) >> 1) * 3 + 3);
          if ((*(uint *)(plVar6 + 2) & 1) == 0) {
            pNVar9 = *(Node **)pNVar9;
          }
          if ((pNVar9 == param_1) && (*plVar6 == 0)) {
            if (uVar1 == 0xf000000) {
              plVar7 = (long *)(*plVar7 + 0x10);
            }
            this_00 = (Node *)*plVar7;
            pNVar9 = this_00 + 0x20;
            if ((~*(uint *)(this_00 + 0x14) & 0xf000000) == 0) {
              pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            lVar11 = *(long *)(pNVar9 + 8);
            Node::TrimInputCount(this_00,0);
            pOVar5 = (Operator *)
                     CommonOperatorBuilder::Dead(*(CommonOperatorBuilder **)(this + 0x20));
            NodeProperties::ChangeOp(this_00,pOVar5);
            return lVar11;
          }
        }
      }
    }
  }
  return 0;
}

