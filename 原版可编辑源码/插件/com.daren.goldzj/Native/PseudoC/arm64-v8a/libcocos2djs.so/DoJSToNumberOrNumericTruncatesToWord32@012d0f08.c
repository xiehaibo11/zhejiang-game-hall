
/* v8::internal::compiler::SimplifiedLowering::DoJSToNumberOrNumericTruncatesToWord32(v8::internal::compiler::Node*,
   v8::internal::compiler::RepresentationSelector*) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoJSToNumberOrNumericTruncatesToWord32
          (SimplifiedLowering *this,Node *param_1,RepresentationSelector *param_2)

{
  Use *pUVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  Use *pUVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  CallDescriptor *pCVar10;
  ulong uVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node *pNVar14;
  AccessBuilder *this_00;
  undefined8 uVar15;
  undefined8 uVar16;
  Node *pNVar17;
  Use *pUVar18;
  undefined8 uVar19;
  Graph *pGVar20;
  SimplifiedOperatorBuilder *this_01;
  Use *pUVar21;
  Node *local_c0;
  Node *local_b8;
  Node *pNStack_b0;
  AccessBuilder *local_a8;
  Node *local_a0;
  Node *pNStack_98;
  Node *local_90;
  undefined8 uStack_88;
  Node *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pNVar17 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar17 = (Node *)(*(long *)pNVar17 + 0x10);
  }
  pNVar12 = *(Node **)pNVar17;
  uVar16 = *(undefined8 *)(pNVar17 + 8);
  uVar19 = *(undefined8 *)(pNVar17 + 0x20);
  uVar15 = *(undefined8 *)(pNVar17 + 0x10);
  pNVar17 = *(Node **)(pNVar17 + 0x18);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsSmi
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f]);
  local_a0 = pNVar12;
  pNVar7 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],1,1);
  local_a0 = pNVar7;
  pNStack_98 = (Node *)uVar19;
  pNVar7 = (Node *)Graph::NewNode(pGVar20,pOVar6,2,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
  local_a0 = pNVar7;
  pNVar8 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::ChangeTaggedSignedToInt32
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f]);
  local_a0 = pNVar12;
  pNVar9 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
  local_a0 = pNVar7;
  uVar19 = Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  if (*(short *)(*(long *)param_1 + 0x10) == 0x2c8) {
    pOVar6 = *(Operator **)(this + 0x38);
    if (pOVar6 == (Operator *)0x0) {
      Builtins::CallableFor((Builtins *)&local_a0,*(undefined8 *)(*(long *)this + 0x168),0x65);
      local_b8 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
      pNStack_b0 = local_90;
      pCVar10 = (CallDescriptor *)
                Linkage::GetStubCallDescriptor
                          (*(undefined8 *)**(undefined8 **)this,&local_b8,
                           *(int *)((long)local_90 + 8) - *(int *)local_90,1,0,0);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)this + 8),pCVar10);
      *(Operator **)(this + 0x38) = pOVar6;
    }
  }
  else {
    pOVar6 = *(Operator **)(this + 0x48);
    if (pOVar6 == (Operator *)0x0) {
      Builtins::CallableFor((Builtins *)&local_a0,*(undefined8 *)(*(long *)this + 0x168),0x67);
      local_b8 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
      pNStack_b0 = local_90;
      pCVar10 = (CallDescriptor *)
                Linkage::GetStubCallDescriptor
                          (*(undefined8 *)**(undefined8 **)this,&local_b8,
                           *(int *)((long)local_90 + 8) - *(int *)local_90,1,0,0);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)this + 8),pCVar10);
      *(Operator **)(this + 0x48) = pOVar6;
    }
  }
  if (*(short *)(*(long *)param_1 + 0x10) == 0x2c9) {
    pNVar7 = *(Node **)(this + 0x28);
    if (pNVar7 == (Node *)0x0) {
      Builtins::CallableFor((Builtins *)&local_a0,*(undefined8 *)(*(long *)this + 0x168),0x66);
      pNVar7 = (Node *)JSGraph::HeapConstant(*(JSGraph **)this,local_a0);
      *(Node **)(this + 0x28) = pNVar7;
    }
  }
  else if (*(short *)(*(long *)param_1 + 0x10) == 0x2c8) {
    pNVar7 = *(Node **)(this + 0x20);
    if (pNVar7 == (Node *)0x0) {
      Builtins::CallableFor((Builtins *)&local_a0,*(undefined8 *)(*(long *)this + 0x168),0x65);
      pNVar7 = (Node *)JSGraph::HeapConstant(*(JSGraph **)this,local_a0);
      *(Node **)(this + 0x20) = pNVar7;
    }
  }
  else {
    pNVar7 = *(Node **)(this + 0x30);
    if (pNVar7 == (Node *)0x0) {
      Builtins::CallableFor((Builtins *)&local_a0,*(undefined8 *)(*(long *)this + 0x168),0x67);
      pNVar7 = (Node *)JSGraph::HeapConstant(*(JSGraph **)this,local_a0);
      *(Node **)(this + 0x30) = pNVar7;
    }
  }
  local_a0 = pNVar7;
  pNStack_98 = pNVar12;
  local_90 = (Node *)uVar16;
  uStack_88 = uVar15;
  local_80 = pNVar17;
  uStack_78 = uVar19;
  pNVar7 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,pOVar6,6,&local_a0,false);
  local_c0 = (Node *)0x0;
  uVar11 = NodeProperties::IsExceptionalCall(param_1,&local_c0);
  pNVar12 = pNVar7;
  if ((uVar11 & 1) != 0) {
    NodeProperties::ReplaceControlInput(local_c0,pNVar7,0);
    NodeProperties::ReplaceEffectInput(local_c0,pNVar7,0);
    pGVar20 = (Graph *)**(undefined8 **)this;
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfSuccess((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
    local_a0 = pNVar7;
    pNVar12 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  }
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::ObjectIsSmi
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f]);
  local_a0 = pNVar7;
  pNVar13 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Branch((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,1);
  local_a0 = pNVar13;
  pNStack_98 = pNVar12;
  pNVar12 = (Node *)Graph::NewNode(pGVar20,pOVar6,2,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::IfTrue((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
  local_a0 = pNVar12;
  pNVar13 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::ChangeTaggedSignedToInt32
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f]);
  local_a0 = pNVar7;
  pNVar14 = (Node *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::IfFalse((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
  local_a0 = pNVar12;
  this_00 = (AccessBuilder *)Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f];
  AccessBuilder::ForHeapNumberValue(this_00);
  pOVar6 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)&local_a0);
  local_b8 = pNVar7;
  pNStack_b0 = pNVar7;
  local_a8 = this_00;
  pNVar12 = (Node *)Graph::NewNode(pGVar20,pOVar6,3,&local_b8,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           MachineOperatorBuilder::TruncateFloat64ToWord32
                     ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
  local_a0 = pNVar12;
  uVar15 = Graph::NewNode(pGVar20,pOVar6,1,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Merge((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2);
  local_a0 = pNVar13;
  pNStack_98 = (Node *)this_00;
  uVar16 = Graph::NewNode(pGVar20,pOVar6,2,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::EffectPhi((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2);
  local_a0 = pNVar7;
  pNStack_98 = pNVar12;
  local_90 = (Node *)uVar16;
  uVar19 = Graph::NewNode(pGVar20,pOVar6,3,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(*(undefined8 **)this)[1],4,2);
  local_a0 = pNVar14;
  pNStack_98 = (Node *)uVar15;
  local_90 = (Node *)uVar16;
  uVar15 = Graph::NewNode(pGVar20,pOVar6,3,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Merge((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2);
  local_a0 = pNVar8;
  pNStack_98 = (Node *)uVar16;
  pNVar12 = (Node *)Graph::NewNode(pGVar20,pOVar6,2,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::EffectPhi((CommonOperatorBuilder *)(*(undefined8 **)this)[1],2);
  local_a0 = pNVar17;
  pNStack_98 = (Node *)uVar19;
  local_90 = pNVar12;
  pNVar17 = (Node *)Graph::NewNode(pGVar20,pOVar6,3,&local_a0,false);
  pGVar20 = (Graph *)**(undefined8 **)this;
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Phi((CommonOperatorBuilder *)(*(undefined8 **)this)[1],4,2);
  local_a0 = pNVar9;
  pNStack_98 = (Node *)uVar15;
  local_90 = pNVar12;
  pNVar7 = (Node *)Graph::NewNode(pGVar20,pOVar6,3,&local_a0,false);
  pUVar21 = *(Use **)(param_1 + 0x18);
joined_r0x012d157c:
  do {
    while( true ) {
      pUVar5 = pUVar21;
      if (pUVar5 == (Use *)0x0) {
        RepresentationSelector::DeferReplacement(param_2,param_1,pNVar7);
        if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      pUVar21 = *(Use **)pUVar5;
      lVar2 = 0x10;
      if ((*(uint *)(pUVar5 + 0x10) & 1) != 0) {
        lVar2 = 0x20;
      }
      pUVar1 = pUVar5 + lVar2 + (ulong)(*(uint *)(pUVar5 + 0x10) >> 1) * 0x20 + 0x18;
      uVar11 = NodeProperties::IsControlEdge(pUVar5,pUVar1);
      if ((uVar11 & 1) != 0) break;
      uVar11 = NodeProperties::IsEffectEdge(pUVar5,pUVar1);
      if (((uVar11 & 1) != 0) && (pNVar8 = *(Node **)pUVar1, pNVar8 != pNVar17)) {
        if (pNVar8 != (Node *)0x0) {
          Node::RemoveUse(pNVar8,pUVar5);
        }
        *(Node **)pUVar1 = pNVar17;
        pNVar8 = pNVar17;
joined_r0x012d1608:
        if (pNVar8 != (Node *)0x0) {
          Node::AppendUse(pNVar8,pUVar5);
        }
      }
    }
    uVar3 = *(uint *)(pUVar5 + 0x10);
    pNVar8 = (Node *)(pUVar5 + (ulong)(uVar3 >> 1) * 0x18 + 0x18);
    pUVar18 = (Use *)pNVar8;
    if ((uVar3 & 1) == 0) {
      pUVar18 = *(Use **)pNVar8;
    }
    if (*(short *)(*(long *)pUVar18 + 0x10) != 6) {
      pNVar8 = *(Node **)pUVar1;
      if (pNVar8 != pNVar12) {
        if (pNVar8 != (Node *)0x0) {
          Node::RemoveUse(pNVar8,pUVar5);
        }
        *(Node **)pUVar1 = pNVar12;
        pNVar8 = pNVar12;
        goto joined_r0x012d1608;
      }
      goto joined_r0x012d157c;
    }
    if ((uVar3 & 1) == 0) {
      pNVar8 = *(Node **)pNVar8;
    }
    Node::ReplaceUses(pNVar8,pNVar12);
    pNVar8 = (Node *)(pUVar5 + (ulong)(*(uint *)(pUVar5 + 0x10) >> 1) * 0x18 + 0x18);
    if ((*(uint *)(pUVar5 + 0x10) & 1) == 0) {
      pNVar8 = *(Node **)pNVar8;
    }
    Node::Kill(pNVar8);
  } while( true );
}

