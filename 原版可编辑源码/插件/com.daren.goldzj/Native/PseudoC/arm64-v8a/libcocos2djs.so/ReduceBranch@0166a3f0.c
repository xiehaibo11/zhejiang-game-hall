
/* v8::internal::compiler::BranchElimination::ReduceBranch(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::BranchElimination::ReduceBranch(BranchElimination *this,Node *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  Operator *pOVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  Node *pNVar10;
  ulong uVar11;
  long lVar12;
  Node *pNVar13;
  
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  lVar12 = *(long *)pNVar10;
  lVar5 = NodeProperties::GetControlInput(param_1,0);
  uVar11 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  if (uVar11 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3)) {
    for (plVar9 = *(long **)(*(long *)(this + 0x18) + uVar11 * 8); plVar9 != (long *)0x0;
        plVar9 = (long *)plVar9[3]) {
      if (*plVar9 == lVar12) {
        pNVar13 = (Node *)plVar9[1];
        bVar1 = *(byte *)(plVar9 + 2);
        pNVar10 = pNVar13 + 0x20;
        uVar2 = (byte)pNVar13[0x17] & 0xf;
        if (uVar2 == 0xf) {
          uVar2 = *(uint *)(*(long *)pNVar10 + 8);
          pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
        }
        if ((((int)uVar2 < 1) || (*(long *)pNVar10 != 0)) &&
           (*(short *)(*(Operator **)pNVar13 + 0x10) != 0x3d)) {
          uVar2 = IsSafetyCheckOf(*(Operator **)pNVar13);
          uVar3 = IsSafetyCheckOf(*(Operator **)param_1);
          uVar4 = CombineSafetyChecks(uVar2,uVar3);
          if ((uVar2 & 0xff) != (uVar4 & 0xff)) {
            pOVar6 = (Operator *)
                     CommonOperatorBuilder::MarkAsSafetyCheck
                               (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),
                                *(undefined8 *)pNVar13,uVar4);
            NodeProperties::ChangeOp(pNVar13,pOVar6);
          }
        }
        plVar9 = *(long **)(param_1 + 0x18);
        if (plVar9 != (long *)0x0) goto LAB_0166a598;
        goto LAB_0166a5e0;
      }
    }
  }
  SimplifyBranchCondition(this,param_1);
  lVar5 = NodeProperties::GetControlInput(param_1,0);
  uVar11 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  if ((uVar11 < *(ulong *)(this + 0x40)) &&
     ((*(ulong *)(*(long *)(this + 0x38) + (uVar11 >> 3 & 0x1ffff8)) >>
       ((ulong)*(uint *)(lVar5 + 0x14) & 0x3f) & 1) != 0)) {
    if (uVar11 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3)) {
      uVar8 = *(undefined8 *)(*(long *)(this + 0x18) + uVar11 * 8);
    }
    else {
      uVar8 = 0;
    }
    uVar8 = UpdateConditions(this,param_1,uVar8);
    return uVar8;
  }
  return 0;
LAB_0166a598:
  plVar7 = plVar9 + (ulong)(*(uint *)(plVar9 + 2) >> 1) * 3 + 3;
  if ((*(uint *)(plVar9 + 2) & 1) == 0) {
    plVar7 = (long *)*plVar7;
  }
  lVar12 = lVar5;
  if (*(short *)(*plVar7 + 0x10) == 5) {
    if ((bVar1 & 1) != 0) goto LAB_0166a57c;
  }
  else {
    if (*(short *)(*plVar7 + 0x10) != 4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((bVar1 & 1) == 0) {
LAB_0166a57c:
      lVar12 = *(long *)(this + 0x60);
    }
  }
  (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),plVar7,lVar12);
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
LAB_0166a5e0:
    return *(undefined8 *)(this + 0x60);
  }
  goto LAB_0166a598;
}

