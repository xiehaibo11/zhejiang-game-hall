
/* v8::internal::compiler::JSTypedLowering::ReduceJSAdd(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSAdd(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  Node *pNVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  Node *pNVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Node *pNVar12;
  Node *pNVar13;
  CallDescriptor *pCVar14;
  uint uVar15;
  SimplifiedOperatorBuilder *this_00;
  undefined1 uVar16;
  Zone *pZVar17;
  undefined4 uVar18;
  Graph *pGVar19;
  undefined **local_b8;
  int *piStack_b0;
  JSTypedLowering *local_a8;
  Node *local_a0;
  undefined1 local_98 [16];
  int *local_88;
  undefined8 uStack_80;
  Node *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar8 = param_1 + 0x20;
  uVar15 = *(uint *)(param_1 + 0x14);
  pNVar5 = pNVar8;
  if ((~uVar15 & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar5 + 8);
  pNVar5 = pNVar8;
  local_a8 = this;
  local_a0 = param_1;
  if ((Node *)local_98._0_8_ == (Node *)0x1c5f) {
LAB_0175d964:
    if ((~uVar15 & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar5 + 8) + 8);
    if (((Node *)local_98._0_8_ != (Node *)0x1c5f) &&
       (uVar4 = Type::SlowIs((Type *)local_98,0x1c5f), (uVar4 & 1) == 0)) goto LAB_0175d9a0;
LAB_0175dd48:
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::NumberAdd
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    if (0 < *(int *)(*(long *)local_a0 + 0x18)) {
      (**(code **)(**(long **)(local_a8 + 8) + 0x20))
                (*(long **)(local_a8 + 8),local_a0,local_a0,0,0);
    }
    NodeProperties::RemoveNonValueInputs(local_a0);
    NodeProperties::ChangeOp(local_a0,pOVar6);
    pNVar8 = local_a0;
    uVar7 = Type::Intersect(*(undefined8 *)(local_a0 + 8),0x1c5f,
                            *(undefined8 *)**(undefined8 **)(local_a8 + 0x10));
    *(undefined8 *)(pNVar8 + 8) = uVar7;
    param_1 = local_a0;
    goto LAB_0175ddc8;
  }
  uVar4 = Type::SlowIs((Type *)local_98,0x1c5f);
  if ((uVar4 & 1) != 0) {
    uVar15 = *(uint *)(local_a0 + 0x14);
    pNVar5 = local_a0 + 0x20;
    goto LAB_0175d964;
  }
LAB_0175d9a0:
  uVar15 = *(uint *)(local_a0 + 0x14);
  pNVar12 = local_a0 + 0x20;
  pNVar5 = pNVar12;
  if ((~uVar15 & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar12 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar5 + 8);
  if ((Node *)local_98._0_8_ == (Node *)0x5fff) {
LAB_0175d9f8:
    if ((~uVar15 & 0xf000000) == 0) {
      pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar12 + 8) + 8);
    if (((Node *)local_98._0_8_ == (Node *)0x5fff) ||
       (uVar4 = Type::SlowIs((Type *)local_98,0x5fff), (uVar4 & 1) != 0)) {
      pNVar5 = local_a0 + 0x20;
      if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
        pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      local_98._0_8_ = *(long *)(*(long *)pNVar5 + 8);
      uVar4 = Type::Maybe((Type *)local_98,0x47f4021);
      if ((uVar4 & 1) == 0) {
        pNVar5 = local_a0 + 0x20;
        if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
          pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        local_b8 = *(undefined ***)(*(long *)(pNVar5 + 8) + 8);
        uVar4 = Type::Maybe((Type *)&local_b8,0x47f4021);
        if ((uVar4 & 1) == 0) {
          JSBinopReduction::ConvertInputsToNumber((JSBinopReduction *)&local_a8);
          goto LAB_0175dd48;
        }
      }
    }
  }
  else {
    uVar4 = Type::SlowIs((Type *)local_98,0x5fff);
    if ((uVar4 & 1) != 0) {
      uVar15 = *(uint *)(local_a0 + 0x14);
      pNVar12 = local_a0 + 0x20;
      goto LAB_0175d9f8;
    }
  }
  pNVar5 = local_a0 + 0x20;
  if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar5 + 8);
  if (((Node *)local_98._0_8_ == (Node *)0x4021) ||
     (uVar4 = Type::SlowIs((Type *)local_98,0x4021), (uVar4 & 1) != 0)) {
    pNVar5 = (Node *)NodeProperties::GetValueInput(local_a0,1);
    pNVar5 = (Node *)ReduceJSToStringInput(this,pNVar5);
    if (pNVar5 != (Node *)0x0) {
      iVar3 = 1;
LAB_0175db24:
      NodeProperties::ReplaceValueInput(param_1,pNVar5,iVar3);
    }
  }
  else {
    pNVar5 = local_a0 + 0x20;
    if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar5 + 8) + 8);
    if (((Node *)local_98._0_8_ == (Node *)0x4021) ||
       (uVar4 = Type::SlowIs((Type *)local_98,0x4021), (uVar4 & 1) != 0)) {
      pNVar5 = (Node *)NodeProperties::GetValueInput(local_a0,0);
      pNVar5 = (Node *)ReduceJSToStringInput(this,pNVar5);
      if (pNVar5 != (Node *)0x0) {
        iVar3 = 0;
        goto LAB_0175db24;
      }
    }
  }
  cVar2 = BinaryOperationHintOf(*(Operator **)param_1);
  if (cVar2 == '\x06') {
    JSBinopReduction::CheckInputsToString((JSBinopReduction *)&local_a8);
  }
  uVar15 = *(uint *)(local_a0 + 0x14);
  pNVar12 = local_a0 + 0x20;
  pNVar5 = pNVar12;
  if ((~uVar15 & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar12 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar5 + 8);
  if ((Node *)local_98._0_8_ == (Node *)0x8007fff) {
LAB_0175dba4:
    if ((~uVar15 & 0xf000000) == 0) {
      pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar12 + 8) + 8);
    if (((Node *)local_98._0_8_ == (Node *)0x8007fff) ||
       (uVar4 = Type::SlowIs((Type *)local_98,0x8007fff), (uVar4 & 1) != 0)) {
      pNVar5 = local_a0 + 0x20;
      if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
        pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
      }
      local_98._0_8_ = *(long *)(*(long *)pNVar5 + 8);
      if (((Node *)local_98._0_8_ == *(Node **)(this + 0x20)) ||
         (uVar4 = Type::SlowIs((Type *)local_98), (uVar4 & 1) != 0)) {
        iVar3 = 1;
      }
      else {
        pNVar5 = local_a0 + 0x20;
        if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
          pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
        }
        local_98._0_8_ = *(long *)(*(long *)(pNVar5 + 8) + 8);
        if (((Node *)local_98._0_8_ != *(Node **)(this + 0x20)) &&
           (uVar4 = Type::SlowIs((Type *)local_98), (uVar4 & 1) == 0)) goto LAB_0175de4c;
        iVar3 = 0;
      }
      pNVar5 = (Node *)NodeProperties::GetValueInput(local_a0,iVar3);
      NodeProperties::ReplaceValueInputs(param_1,pNVar5);
      pOVar6 = (Operator *)
               JSOperatorBuilder::ToString(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
      NodeProperties::ChangeOp(param_1,pOVar6);
      uVar7 = Type::Intersect(*(undefined8 *)(local_a0 + 8),0x4021,
                              *(undefined8 *)**(undefined8 **)(this + 0x10));
      *(undefined8 *)(param_1 + 8) = uVar7;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      pNVar8 = (Node *)ReduceJSToStringInput(this,*(Node **)pNVar8);
      if (pNVar8 != (Node *)0x0) {
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar8,0,0);
        param_1 = pNVar8;
      }
      goto LAB_0175ddc8;
    }
  }
  else {
    uVar4 = Type::SlowIs((Type *)local_98,0x8007fff);
    if ((uVar4 & 1) != 0) {
      uVar15 = *(uint *)(local_a0 + 0x14);
      pNVar12 = local_a0 + 0x20;
      goto LAB_0175dba4;
    }
  }
LAB_0175de4c:
  uVar15 = *(uint *)(local_a0 + 0x14);
  pNVar5 = local_a0 + 0x20;
  pNVar8 = pNVar5;
  if ((~uVar15 & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar8 + 8);
  if ((Node *)local_98._0_8_ == (Node *)0x4021) {
LAB_0175dea4:
    if ((~uVar15 & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar5 + 8) + 8);
    if (((Node *)local_98._0_8_ == (Node *)0x4021) ||
       (uVar4 = Type::SlowIs((Type *)local_98,0x4021), (uVar4 & 1) != 0)) {
      pNVar8 = (Node *)NodeProperties::GetContextInput(param_1);
      uVar7 = NodeProperties::GetFrameStateInput(param_1);
      uVar9 = NodeProperties::GetEffectInput(param_1,0);
      uVar10 = NodeProperties::GetControlInput(param_1,0);
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::StringLength
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_98._0_8_ = NodeProperties::GetValueInput(local_a0,0);
      pNVar5 = (Node *)Graph::NewNode(pGVar19,pOVar6,1,(Node **)local_98,false);
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::StringLength
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_98._0_8_ = NodeProperties::GetValueInput(local_a0,1);
      uVar11 = Graph::NewNode(pGVar19,pOVar6,1,(Node **)local_98,false);
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::NumberAdd
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_98._0_8_ = pNVar5;
      local_98._8_8_ = uVar11;
      pNVar5 = (Node *)Graph::NewNode(pGVar19,pOVar6,2,(Node **)local_98,false);
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_b8,*(undefined8 *)(this + 0x18),
                 *(long *)(*(long *)(this + 0x10) + 0x168) + 0xed0,0);
      uVar4 = ObjectRef::IsPropertyCell((ObjectRef *)&local_b8);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsPropertyCell()");
      }
      local_98 = PropertyCellRef::value((PropertyCellRef *)&local_b8);
      iVar3 = ObjectRef::AsSmi((ObjectRef *)local_98);
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      this_00 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      local_88 = (int *)uVar9;
      if (iVar3 == 1) {
        local_78 = (Node *)0x0;
        local_70 = 0xffffffff;
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckBounds(this_00,(FeedbackSource *)&local_78);
        uVar7 = JSGraph::Constant(*(JSGraph **)(this + 0x10),268435441.0);
        iVar3 = 4;
        local_98._8_8_ = uVar7;
        uStack_80 = uVar10;
      }
      else {
        pOVar6 = (Operator *)SimplifiedOperatorBuilder::NumberLessThanOrEqual(this_00);
        uVar11 = JSGraph::Constant(*(JSGraph **)(this + 0x10),268435440.0);
        local_98._0_8_ = pNVar5;
        local_98._8_8_ = uVar11;
        pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar6,2,(Node **)local_98,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::Branch
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
        local_98._0_8_ = pNVar12;
        local_98._8_8_ = uVar10;
        pNVar12 = (Node *)Graph::NewNode(pGVar19,pOVar6,2,(Node **)local_98,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::IfFalse
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_98._0_8_ = pNVar12;
        uVar10 = Graph::NewNode(pGVar19,pOVar6,1,(Node **)local_98,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 JSOperatorBuilder::CallRuntime
                           ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],0xa9);
        local_98._0_8_ = pNVar8;
        local_98._8_8_ = uVar7;
        uStack_80 = uVar10;
        pNVar13 = (Node *)Graph::NewNode(pGVar19,pOVar6,4,(Node **)local_98,false);
        local_78 = (Node *)0x0;
        uVar4 = NodeProperties::IsExceptionalCall(param_1,&local_78);
        pNVar8 = pNVar13;
        if ((uVar4 & 1) != 0) {
          NodeProperties::ReplaceControlInput(local_78,pNVar13,0);
          NodeProperties::ReplaceEffectInput(local_78,pNVar13,0);
          pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar6 = (Operator *)
                   CommonOperatorBuilder::IfSuccess
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_98._0_8_ = pNVar13;
          pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar6,1,(Node **)local_98,false);
          (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_78);
        }
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::Throw
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_98._0_8_ = pNVar13;
        local_98._8_8_ = pNVar8;
        pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar6,2,(Node **)local_98,false);
        NodeProperties::MergeControlToEnd
                  ((Graph *)**(undefined8 **)(this + 0x10),
                   (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pNVar8);
        (**(code **)(**(long **)(this + 8) + 0x18))
                  (*(long **)(this + 8),*(undefined8 *)(**(long **)(this + 0x10) + 0x10));
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::IfTrue
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_98._0_8_ = pNVar12;
        uVar10 = Graph::NewNode(pGVar19,pOVar6,1,(Node **)local_98,false);
        pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar6 = (Operator *)
                 CommonOperatorBuilder::TypeGuard
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],
                            *(undefined8 *)(*(long *)(this + 0x30) + 0x1e8));
        iVar3 = 3;
        local_98._8_8_ = uVar9;
        local_88 = (int *)uVar10;
      }
      local_98._0_8_ = pNVar5;
      pNVar8 = (Node *)Graph::NewNode(pGVar19,pOVar6,iVar3,(Node **)local_98,false);
      uVar4 = JSBinopReduction::ShouldCreateConsString((JSBinopReduction *)&local_a8);
      if ((uVar4 & 1) == 0) {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::StringConcat
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      }
      else {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::NewConsString
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      }
      pGVar19 = (Graph *)**(undefined8 **)(this + 0x10);
      uVar7 = NodeProperties::GetValueInput(local_a0,0);
      local_88 = (int *)NodeProperties::GetValueInput(local_a0,1);
      local_98._0_8_ = pNVar8;
      local_98._8_8_ = uVar7;
      pNVar5 = (Node *)Graph::NewNode(pGVar19,pOVar6,3,(Node **)local_98,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar5,pNVar8,uVar10)
      ;
      param_1 = pNVar5;
      goto LAB_0175ddc8;
    }
  }
  else {
    uVar4 = Type::SlowIs((Type *)local_98,0x4021);
    if ((uVar4 & 1) != 0) {
      uVar15 = *(uint *)(local_a0 + 0x14);
      pNVar5 = local_a0 + 0x20;
      goto LAB_0175dea4;
    }
  }
  pNVar8 = local_a0 + 0x20;
  if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar8 + 8);
  if (((Node *)local_98._0_8_ != (Node *)0x4021) &&
     (uVar4 = Type::SlowIs((Type *)local_98,0x4021), (uVar4 & 1) == 0)) {
    pNVar8 = local_a0 + 0x20;
    if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar8 + 8) + 8);
    if (((Node *)local_98._0_8_ != (Node *)0x4021) &&
       (uVar4 = Type::SlowIs((Type *)local_98,0x4021), (uVar4 & 1) == 0)) {
      param_1 = (Node *)0x0;
      goto LAB_0175ddc8;
    }
  }
  uVar15 = *(uint *)(local_a0 + 0x14);
  pNVar5 = local_a0 + 0x20;
  pNVar8 = pNVar5;
  if ((~uVar15 & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar8 + 8);
  if ((Node *)local_98._0_8_ == (Node *)0x4021) {
LAB_0175e15c:
    if ((~uVar15 & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    local_98._0_8_ = *(long *)(*(long *)(pNVar5 + 8) + 8);
    if (((Node *)local_98._0_8_ == (Node *)0x4021) ||
       (uVar4 = Type::SlowIs((Type *)local_98,0x4021), (uVar4 & 1) != 0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = 2;
    }
  }
  else {
    uVar4 = Type::SlowIs((Type *)local_98,0x4021);
    if ((uVar4 & 1) != 0) {
      uVar15 = *(uint *)(local_a0 + 0x14);
      pNVar5 = local_a0 + 0x20;
      goto LAB_0175e15c;
    }
    uVar18 = 1;
  }
  uVar16 = *(undefined1 *)(*(long *)param_1 + 0x12);
  pNVar8 = local_a0 + 0x20;
  if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  local_98._0_8_ = *(long *)(*(long *)pNVar8 + 8);
  uVar4 = Type::Maybe((Type *)local_98,0x47f0001);
  if ((uVar4 & 1) == 0) {
    pNVar8 = local_a0 + 0x20;
    if ((~*(uint *)(local_a0 + 0x14) & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    local_b8 = *(undefined ***)(*(long *)(pNVar8 + 8) + 8);
    uVar4 = Type::Maybe((Type *)&local_b8,0x47f0001);
    if ((uVar4 & 1) == 0) {
      uVar16 = 0x50;
    }
  }
  CodeFactory::StringAdd(local_98,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),uVar18);
  local_b8 = &PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_b0 = local_88;
  pCVar14 = (CallDescriptor *)
            Linkage::GetStubCallDescriptor
                      (*(undefined8 *)**(undefined8 **)(this + 0x10),&local_b8,
                       local_88[2] - *local_88,1,uVar16,0);
  pZVar17 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar8 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_98._0_8_);
  Node::InsertInput(param_1,pZVar17,0,pNVar8);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar14);
  NodeProperties::ChangeOp(param_1,pOVar6);
LAB_0175ddc8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

