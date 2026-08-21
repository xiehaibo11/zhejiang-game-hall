
/* v8::internal::compiler::BranchElimination::SimplifyBranchCondition(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::BranchElimination::SimplifyBranchCondition
          (BranchElimination *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  JSGraph *this_00;
  Operator *pOVar3;
  Node *pNVar4;
  Node **ppNVar5;
  undefined4 uVar6;
  Node *pNVar7;
  long *plVar8;
  ulong uVar9;
  Graph *this_01;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  Node *local_98;
  Node **local_90;
  Node **local_88;
  Node **local_80;
  Node *apNStack_78 [2];
  Node *local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(Node **)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetControlInput(param_1,0);
  if (*(short *)(*(long *)pNVar2 + 0x10) == 10) {
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    lVar11 = *(long *)pNVar7;
    local_80 = &local_68;
    this_01 = (Graph *)**(undefined8 **)(this + 0x10);
    pNVar7 = pNVar2 + 0x20;
    uVar10 = (byte)pNVar2[0x17] & 0xf;
    if (uVar10 == 0xf) {
      uVar10 = *(uint *)(*(long *)pNVar7 + 8);
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    ppNVar5 = apNStack_78;
    local_90 = apNStack_78;
    if (uVar10 != 0) {
      uVar12 = 0;
      do {
        local_88 = ppNVar5;
        uVar9 = (ulong)*(uint *)(*(long *)(pNVar7 + uVar12 * 8) + 0x14) & 0xffffff;
        if ((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3) <= uVar9)
        goto LAB_0166a9a8;
        plVar8 = *(long **)(*(long *)(this + 0x18) + uVar9 * 8);
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_0166a9a8;
          if (*plVar8 == lVar11) break;
          plVar8 = (long *)plVar8[3];
        }
        this_00 = *(JSGraph **)(this + 0x10);
        if (*(int *)(this + 0x68) == 0) {
          if ((*(byte *)(plVar8 + 2) & 1) == 0) {
            pNVar4 = (Node *)JSGraph::FalseConstant(this_00);
          }
          else {
            pNVar4 = (Node *)JSGraph::TrueConstant(this_00);
          }
        }
        else {
          pOVar3 = (Operator *)
                   CommonOperatorBuilder::Int32Constant
                             (*(CommonOperatorBuilder **)(this_00 + 8),
                              (uint)((*(byte *)(plVar8 + 2) & 1) != 0));
          local_98 = (Node *)0x0;
          pNVar4 = (Node *)Graph::NewNode(this_01,pOVar3,0,&local_98,false);
        }
        if (local_88 == local_80) {
          local_88 = (Node **)base::SmallVector<v8::internal::compiler::Node*,2ul>::Grow
                                        ((SmallVector<v8::internal::compiler::Node*,2ul> *)&local_90
                                        );
        }
        uVar12 = uVar12 + 1;
        *local_88 = pNVar4;
        ppNVar5 = local_88 + 1;
      } while (uVar12 != uVar10);
      ppNVar5 = local_88 + 1;
      if (local_88 + 1 == local_80) {
        local_88 = local_88 + 1;
        ppNVar5 = (Node **)base::SmallVector<v8::internal::compiler::Node*,2ul>::Grow
                                     ((SmallVector<v8::internal::compiler::Node*,2ul> *)&local_90);
      }
    }
    local_88 = ppNVar5 + 1;
    *ppNVar5 = pNVar2;
    uVar6 = 8;
    if (*(int *)(this + 0x68) != 0) {
      uVar6 = 4;
    }
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Phi
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),uVar6,uVar10);
    pNVar2 = (Node *)Graph::NewNode(this_01,pOVar3,uVar10 + 1,local_90,false);
    NodeProperties::ReplaceValueInput(param_1,pNVar2,0);
LAB_0166a9a8:
    if (local_90 != apNStack_78) {
      free(local_90);
    }
  }
  if (*(Node **)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

