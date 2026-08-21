
/* v8::internal::compiler::BranchElimination::ReduceDeoptimizeConditional(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::BranchElimination::ReduceDeoptimizeConditional
          (BranchElimination *this,Node *param_1)

{
  long lVar1;
  Graph *this_00;
  byte bVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  long lVar10;
  Operator *pOVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *local_b0;
  Node *local_a8;
  Node *pNStack_a0;
  long local_98;
  undefined8 local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  sVar3 = *(short *)(*(Operator **)param_1 + 0x10);
  puVar6 = (ulong *)DeoptimizeParametersOf(*(Operator **)param_1);
  uStack_88 = puVar6[1];
  local_90 = *puVar6;
  local_78 = puVar6[3];
  uStack_80 = puVar6[2];
  pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar8 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  lVar10 = NodeProperties::GetControlInput(param_1,0);
  uVar14 = (ulong)*(uint *)(lVar10 + 0x14) & 0xffffff;
  if ((uVar14 < *(ulong *)(this + 0x40)) &&
     ((*(ulong *)(*(long *)(this + 0x38) + (uVar14 >> 3 & 0x1ffff8)) >>
       ((ulong)*(uint *)(lVar10 + 0x14) & 0x3f) & 1) != 0)) {
    lVar1 = *(long *)(this + 0x18);
    uVar13 = *(long *)(this + 0x20) - lVar1 >> 3;
    if (uVar14 < uVar13) {
      plVar15 = *(long **)(lVar1 + uVar14 * 8);
      for (plVar16 = plVar15; plVar16 != (long *)0x0; plVar16 = (long *)plVar16[3]) {
        if ((Node *)*plVar16 == pNVar7) {
          pNVar7 = (Node *)plVar16[1];
          bVar2 = *(byte *)(plVar16 + 2);
          uVar12 = IsSafetyCheckOf(*(Operator **)pNVar7);
          uVar5 = CombineSafetyChecks(uVar12,local_78 & 0xff);
          if (((uint)uVar12 & 0xff) != (uVar5 & 0xff)) {
            pOVar11 = (Operator *)
                      CommonOperatorBuilder::MarkAsSafetyCheck
                                (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),
                                 *(undefined8 *)pNVar7,uVar5);
            NodeProperties::ChangeOp(pNVar7,pOVar11);
          }
          if ((sVar3 == 0xd) == (bool)(bVar2 & 1)) {
            (**(code **)(**(long **)(this + 8) + 0x20))
                      (*(long **)(this + 8),param_1,*(undefined8 *)(this + 0x60),pNVar9,lVar10);
            uVar12 = *(undefined8 *)(this + 0x60);
          }
          else {
            this_00 = (Graph *)**(undefined8 **)(this + 0x10);
            pOVar11 = (Operator *)
                      CommonOperatorBuilder::Deoptimize
                                ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                                 local_90 & 0xff,local_90._1_1_,(ulong)&local_90 | 8);
            local_a8 = pNVar8;
            pNStack_a0 = pNVar9;
            local_98 = lVar10;
            pNVar7 = (Node *)Graph::NewNode(this_00,pOVar11,3,&local_a8,false);
            NodeProperties::MergeControlToEnd
                      ((Graph *)**(undefined8 **)(this + 0x10),
                       (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar7);
            (**(code **)(**(long **)(this + 8) + 0x18))
                      (*(long **)(this + 8),*(undefined8 *)(**(long **)(this + 0x10) + 0x10));
            uVar12 = *(undefined8 *)(this + 0x60);
          }
          goto LAB_0166a10c;
        }
      }
    }
    else {
      plVar15 = (long *)0x0;
    }
    if (((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) < uVar13) {
      uVar12 = *(undefined8 *)(lVar1 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8);
    }
    else {
      uVar12 = 0;
    }
    local_98 = CONCAT71(local_98._1_7_,sVar3 == 0xd);
    local_b0 = plVar15;
    local_a8 = pNVar7;
    pNStack_a0 = param_1;
    FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition>::PushFront
              ((FunctionalList<v8::internal::compiler::BranchElimination::BranchCondition> *)
               &local_b0,&local_a8,*(undefined8 *)(this + 0x58),uVar12);
    uVar12 = UpdateConditions(this,param_1,local_b0);
  }
  else {
    uVar12 = 0;
  }
LAB_0166a10c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

