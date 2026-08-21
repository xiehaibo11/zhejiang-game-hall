
/* v8::internal::compiler::CommonOperatorReducer::ReduceBranch(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceBranch
          (CommonOperatorReducer *this,Node *param_1)

{
  bool bVar1;
  uint uVar2;
  Operator *pOVar3;
  Node *this_00;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  CommonOperatorBuilder *pCVar10;
  Node *pNVar11;
  Node *this_01;
  Use *pUVar12;
  Node *pNVar13;
  long *plVar14;
  long *plVar15;
  ObjectRef local_60 [16];
  
  pNVar13 = param_1 + 0x20;
  pNVar11 = pNVar13;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar11 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  plVar14 = *(long **)pNVar11;
  if (*(short *)(*plVar14 + 0x10) == 199) goto LAB_0168b5f0;
  if (*(short *)(*plVar14 + 0x10) == 0x22) {
    uVar2 = *(uint *)((long)plVar14 + 0x14);
    uVar5 = *(undefined8 *)(this + 0x18);
    plVar15 = plVar14 + 4;
    plVar8 = plVar15;
    if ((~uVar2 & 0xf000000) == 0) {
      plVar8 = (long *)(*plVar15 + 0x10);
    }
    lVar9 = *(long *)plVar8[1];
    if (*(short *)(lVar9 + 0x10) == 0x1e) {
      ObjectRef::ObjectRef(local_60,uVar5,*(undefined8 *)(lVar9 + 0x30),0);
      uVar4 = ObjectRef::IsHeapObject(local_60);
      if ((uVar4 & 1) == 0) goto LAB_0168b898;
      uVar4 = ObjectRef::BooleanValue(local_60);
      if ((uVar4 & 1) == 0) {
        uVar5 = *(undefined8 *)(this + 0x18);
        uVar2 = *(uint *)((long)plVar14 + 0x14);
        goto LAB_0168b5b8;
      }
    }
    else if ((*(short *)(lVar9 + 0x10) == 0x17) && (*(int *)(lVar9 + 0x2c) == 0)) {
LAB_0168b5b8:
      if ((~uVar2 & 0xf000000) == 0) {
        plVar15 = (long *)(*plVar15 + 0x10);
      }
      lVar9 = *(long *)plVar15[2];
      if (*(short *)(lVar9 + 0x10) == 0x1e) {
        ObjectRef::ObjectRef(local_60,uVar5,*(undefined8 *)(lVar9 + 0x30),0);
        uVar4 = ObjectRef::IsHeapObject(local_60);
        if ((uVar4 & 1) == 0) goto LAB_0168b898;
        uVar4 = ObjectRef::BooleanValue(local_60);
        if ((uVar4 & 1) != 0) goto LAB_0168b5f0;
      }
      else if ((*(short *)(lVar9 + 0x10) == 0x17) && (*(int *)(lVar9 + 0x2c) != 0)) {
LAB_0168b5f0:
        for (plVar15 = *(long **)(param_1 + 0x18); plVar15 != (long *)0x0;
            plVar15 = (long *)*plVar15) {
          pNVar11 = (Node *)(plVar15 + (ulong)(*(uint *)(plVar15 + 2) >> 1) * 3 + 3);
          if ((*(uint *)(plVar15 + 2) & 1) == 0) {
            pNVar11 = *(Node **)pNVar11;
          }
          if (*(short *)(*(long *)pNVar11 + 0x10) == 5) {
            pOVar3 = (Operator *)
                     CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(this + 0x20));
          }
          else {
            if (*(short *)(*(long *)pNVar11 + 0x10) != 4) goto LAB_0168b88c;
            pOVar3 = (Operator *)
                     CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(this + 0x20));
          }
          NodeProperties::ChangeOp(pNVar11,pOVar3);
        }
        plVar15 = plVar14 + 4;
        if ((~*(uint *)((long)plVar14 + 0x14) & 0xf000000) == 0) {
          plVar15 = (long *)(*plVar15 + 0x10);
        }
        this_01 = (Node *)*plVar15;
        pNVar11 = pNVar13;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar11 = (Node *)(*(long *)pNVar13 + 0x10);
        }
        this_00 = *(Node **)pNVar11;
        if (this_00 != this_01) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar12 = (Use *)(*(long *)pNVar13 + -0x18);
          }
          else {
            pUVar12 = (Use *)(param_1 + -0x18);
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,pUVar12);
          }
          *(Node **)pNVar11 = this_01;
          if (this_01 != (Node *)0x0) {
            Node::AppendUse(this_01,pUVar12);
          }
        }
        pCVar10 = *(CommonOperatorBuilder **)(this + 0x20);
        uVar2 = BranchHintOf(*(Operator **)param_1);
        if ((uVar2 & 0xff) < 3) {
          pOVar3 = (Operator *)
                   CommonOperatorBuilder::Branch(pCVar10,0x10200 >> (ulong)((uVar2 & 3) << 3),1);
          NodeProperties::ChangeOp(param_1,pOVar3);
          return param_1;
        }
LAB_0168b88c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
  }
  lVar9 = *plVar14;
  if (*(short *)(lVar9 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef(local_60,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar9 + 0x30),0);
    uVar4 = ObjectRef::IsHeapObject(local_60);
    if ((uVar4 & 1) == 0) {
LAB_0168b898:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar4 = ObjectRef::BooleanValue(local_60);
    bVar1 = (uVar4 & 1) == 0;
  }
  else {
    if (*(short *)(lVar9 + 0x10) != 0x17) {
      return (Node *)0x0;
    }
    bVar1 = *(int *)(lVar9 + 0x2c) == 0;
  }
  iVar7 = 1;
  if (bVar1) {
    iVar7 = 2;
  }
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar13 = (Node *)(*(long *)pNVar13 + 0x10);
  }
  plVar14 = *(long **)(param_1 + 0x18);
  if (plVar14 != (long *)0x0) {
    uVar5 = *(undefined8 *)(pNVar13 + 8);
    do {
      plVar15 = plVar14 + (ulong)(*(uint *)(plVar14 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar14 + 2) & 1) == 0) {
        plVar15 = (long *)*plVar15;
      }
      uVar6 = uVar5;
      if (*(short *)(*plVar15 + 0x10) == 5) {
        if (iVar7 != 2) goto LAB_0168b858;
      }
      else {
        if (*(short *)(*plVar15 + 0x10) != 4) goto LAB_0168b88c;
        if (iVar7 != 1) {
LAB_0168b858:
          uVar6 = *(undefined8 *)(this + 0x30);
        }
      }
      (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),plVar15,uVar6);
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  return *(Node **)(this + 0x30);
}

