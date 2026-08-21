
Node * FUN_013295e8(WasmGraphBuilder *param_1,Node *param_2,long param_3,undefined1 param_4)

{
  uint uVar1;
  MachineOperatorBuilder *this;
  CallDescriptor *pCVar2;
  Node *pNVar3;
  Operator *pOVar4;
  Graph *pGVar5;
  undefined8 uVar6;
  Node *pNVar7;
  CommonOperatorBuilder *pCVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Operator *pOVar11;
  long *plVar12;
  MachineGraph *pMVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  Graph *pGVar18;
  Node *pNVar19;
  Graph *this_00;
  Node *local_e8;
  Node *local_e0;
  Node *pNStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  Node *local_b0;
  CommonOperatorBuilder *pCStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_e8 = param_2;
  switch(param_4) {
  case 2:
    puVar14 = *(undefined8 **)(param_1 + 8);
    pCVar8 = (CommonOperatorBuilder *)puVar14[1];
    if (*(long **)(param_1 + 0x80) == (long *)0x0) {
      plVar12 = operator_new(0x20);
      plVar12[1] = 0;
      *plVar12 = 0;
      plVar12[3] = 0;
      plVar12[2] = 0;
      *(long **)(param_1 + 0x80) = plVar12;
      pCVar2 = (CallDescriptor *)*plVar12;
    }
    else {
      pCVar2 = (CallDescriptor *)**(long **)(param_1 + 0x80);
    }
    if (pCVar2 == (CallDescriptor *)0x0) {
      pNStack_d8 = (Node *)0x1d2c3f0;
      local_e0 = (Node *)&PTR__CallInterfaceDescriptor_01ca19b0;
      pCVar2 = (CallDescriptor *)
               v8::internal::compiler::Linkage::GetStubCallDescriptor
                         (*(undefined8 *)*puVar14,&local_e0,
                          v8::internal::CallDescriptors::call_descriptor_data_._448_4_ -
                          v8::internal::CallDescriptors::call_descriptor_data_._440_4_,0,0,
                          *(undefined4 *)(param_1 + 0x88));
      pCStack_a8 = (CommonOperatorBuilder *)0x1d2c418;
      **(undefined8 **)(param_1 + 0x80) = pCVar2;
      local_b0 = (Node *)&PTR__CallInterfaceDescriptor_01ca19e0;
      uVar10 = v8::internal::compiler::Linkage::GetStubCallDescriptor
                         (*(undefined8 *)**(undefined8 **)(param_1 + 8),&local_b0,
                          v8::internal::CallDescriptors::call_descriptor_data_._488_4_ -
                          v8::internal::CallDescriptors::call_descriptor_data_._480_4_,0,0,
                          *(undefined4 *)(param_1 + 0x88));
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10) = uVar10;
    }
    pOVar4 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Call(pCVar8,pCVar2);
    pMVar13 = *(MachineGraph **)(param_1 + 8);
    if (*(char *)(*(long *)(pMVar13 + 0x10) + 0x10) == '\x05') {
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar10 = 0x1b;
        goto LAB_013298b0;
      }
      pGVar5 = *(Graph **)pMVar13;
      pCVar8 = *(CommonOperatorBuilder **)(pMVar13 + 8);
      uVar16 = 0x800000000000;
LAB_01329e38:
      pOVar11 = (Operator *)
                v8::internal::compiler::CommonOperatorBuilder::NumberConstant
                          (pCVar8,(double)(uVar16 | 0x405b000000000000));
      local_b0 = (Node *)0x0;
      local_b0 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar5,pOVar11,0,&local_b0,false);
    }
    else {
      if (*(int *)(param_1 + 0x88) != 1) {
        pGVar5 = *(Graph **)pMVar13;
        pCVar8 = *(CommonOperatorBuilder **)(pMVar13 + 8);
        uVar16 = 0xc00000000000;
        goto LAB_01329e38;
      }
      uVar10 = 0x1a;
LAB_013298b0:
      local_b0 = (Node *)v8::internal::compiler::MachineGraph::RelocatableIntPtrConstant
                                   (pMVar13,uVar10,5);
    }
    local_98 = **(undefined8 **)(param_1 + 0x20);
    local_90 = **(undefined8 **)(param_1 + 0x18);
    pCStack_a8 = (CommonOperatorBuilder *)param_2;
    local_a0 = param_3;
    param_2 = (Node *)v8::internal::compiler::Graph::NewNode
                                ((Graph *)**(undefined8 **)(param_1 + 8),pOVar4,5,&local_b0,false);
    **(undefined8 **)(param_1 + 0x18) = param_2;
    **(undefined8 **)(param_1 + 0x20) = param_2;
    break;
  default:
    pCStack_a8 = (CommonOperatorBuilder *)0x1d2cc60;
    local_b0 = (Node *)&PTR__CallInterfaceDescriptor_01ca1560;
    pCVar2 = (CallDescriptor *)
             v8::internal::compiler::Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(param_1 + 8),&local_b0,0,0,0,
                        *(undefined4 *)(param_1 + 0x88));
    pMVar13 = *(MachineGraph **)(param_1 + 8);
    if (*(int *)(param_1 + 0x88) == 1) {
      pNVar3 = (Node *)v8::internal::compiler::MachineGraph::RelocatableIntPtrConstant
                                 (pMVar13,0x20,5);
    }
    else {
      pGVar5 = *(Graph **)pMVar13;
      pOVar4 = (Operator *)
               v8::internal::compiler::CommonOperatorBuilder::NumberConstant
                         (*(CommonOperatorBuilder **)(pMVar13 + 8),101.0);
      local_b0 = (Node *)0x0;
      pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar5,pOVar4,0,&local_b0,false);
    }
    pGVar5 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)
             v8::internal::compiler::CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],pCVar2);
    local_98 = **(undefined8 **)(param_1 + 0x20);
    local_90 = **(undefined8 **)(param_1 + 0x18);
    local_b0 = pNVar3;
    pCStack_a8 = (CommonOperatorBuilder *)param_2;
    local_a0 = param_3;
    pGVar5 = (Graph *)v8::internal::compiler::Graph::NewNode(pGVar5,pOVar4,5,&local_b0,false);
    **(undefined8 **)(param_1 + 0x20) = pGVar5;
    if (*(SourcePositionTable **)(param_1 + 0x78) != (SourcePositionTable *)0x0) {
      v8::internal::compiler::SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(param_1 + 0x78),pGVar5,4);
    }
    puVar14 = *(undefined8 **)(param_1 + 8);
    uVar10 = puVar14[1];
    this = (MachineOperatorBuilder *)puVar14[2];
    pGVar18 = (Graph *)*puVar14;
    if (this[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar4 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::Word32And(this);
    }
    else {
      pOVar4 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::Word64And(this);
    }
    pCStack_a8 = (CommonOperatorBuilder *)
                 v8::internal::compiler::MachineGraph::IntPtrConstant
                           (*(MachineGraph **)(param_1 + 8),1);
    local_b0 = (Node *)pGVar5;
    uVar6 = v8::internal::compiler::Graph::NewNode(pGVar18,pOVar4,2,&local_b0,false);
    v8::internal::compiler::Diamond::Diamond
              ((Diamond *)&local_b0,**(undefined8 **)(param_1 + 8),uVar10,uVar6,2);
    pNVar3 = (Node *)**(undefined8 **)(param_1 + 0x18);
    plVar12 = (long *)(local_a0 + 0x20);
    uVar1 = *(uint *)(local_a0 + 0x14) & 0xf000000;
    plVar17 = plVar12;
    if (uVar1 == 0xf000000) {
      plVar17 = (long *)(*plVar12 + 0x10);
    }
    pNVar7 = (Node *)plVar17[1];
    if (pNVar7 != pNVar3) {
      lVar15 = local_a0;
      if (uVar1 == 0xf000000) {
        lVar15 = *plVar12;
      }
      if (pNVar7 != (Node *)0x0) {
        v8::internal::compiler::Node::RemoveUse(pNVar7,(Use *)(lVar15 + -0x30));
      }
      plVar17[1] = (long)pNVar3;
      if (pNVar3 != (Node *)0x0) {
        v8::internal::compiler::Node::AppendUse(pNVar3,(Use *)(lVar15 + -0x30));
      }
    }
    **(undefined8 **)(param_1 + 0x18) = local_98;
    uVar6 = **(undefined8 **)(param_1 + 0x20);
    pCVar8 = (CommonOperatorBuilder *)FUN_0132a264(param_1);
    pGVar18 = (Graph *)**(undefined8 **)(param_1 + 8);
    if (this[0x10] == (MachineOperatorBuilder)0x4) {
      pOVar4 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::Word32Equal(this);
    }
    else {
      pOVar4 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::Word64Equal(this);
    }
    local_e0 = (Node *)pGVar5;
    pNStack_d8 = (Node *)pCVar8;
    uVar9 = v8::internal::compiler::Graph::NewNode(pGVar18,pOVar4,2,&local_e0,false);
    pNVar19 = (Node *)**(undefined8 **)(param_1 + 0x20);
    v8::internal::compiler::Diamond::Diamond
              ((Diamond *)&local_e0,**(undefined8 **)(param_1 + 8),uVar10,uVar9,2);
    v8::internal::compiler::Diamond::Nest((Diamond *)&local_e0,(Diamond *)&local_b0,true);
    **(undefined8 **)(param_1 + 0x18) = local_c0;
    pGVar18 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x60c);
    uStack_78 = v8::internal::compiler::MachineGraph::IntPtrConstant
                          (*(MachineGraph **)(param_1 + 8),3);
    uStack_68 = **(undefined8 **)(param_1 + 0x18);
    local_70 = **(undefined8 **)(param_1 + 0x20);
    local_80 = (Node *)pGVar5;
    uVar10 = v8::internal::compiler::Graph::NewNode(pGVar18,pOVar4,4,&local_80,false);
    **(undefined8 **)(param_1 + 0x20) = uVar10;
    uVar9 = **(undefined8 **)(param_1 + 0x20);
    **(undefined8 **)(param_1 + 0x18) = local_b8;
    pNVar7 = (Node *)v8::internal::compiler::MachineGraph::Float64Constant
                               (*(MachineGraph **)(param_1 + 8),NAN);
    pNVar3 = local_e0;
    pOVar4 = (Operator *)
             v8::internal::compiler::CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)pNStack_d8,0xc,2);
    local_70 = local_b8;
    local_80 = pNVar7;
    uStack_78 = uVar10;
    pNVar7 = (Node *)v8::internal::compiler::Graph::NewNode
                               ((Graph *)pNVar3,pOVar4,3,&local_80,false);
    pNVar3 = local_e0;
    pOVar4 = (Operator *)
             v8::internal::compiler::CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)pNStack_d8,2);
    local_70 = local_b8;
    local_80 = pNVar19;
    uStack_78 = uVar9;
    pNVar19 = (Node *)v8::internal::compiler::Graph::NewNode
                                ((Graph *)pNVar3,pOVar4,3,&local_80,false);
    pGVar18 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::ChangeInt32ToFloat64
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
    this_00 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar11 = (Operator *)
              v8::internal::compiler::MachineOperatorBuilder::TruncateInt64ToInt32
                        ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
    local_80 = (Node *)pGVar5;
    pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(this_00,pOVar11,1,&local_80,false);
    pGVar5 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar11 = (Operator *)
              v8::internal::compiler::MachineOperatorBuilder::Word32Sar
                        ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
    uStack_78 = v8::internal::compiler::MachineGraph::Int32Constant
                          (*(MachineGraph **)(param_1 + 8),1);
    local_80 = pNVar3;
    local_80 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar5,pOVar11,2,&local_80,false);
    uVar10 = v8::internal::compiler::Graph::NewNode(pGVar18,pOVar4,1,&local_80,false);
    pNVar3 = local_b0;
    **(undefined8 **)(param_1 + 0x18) = local_88;
    pOVar4 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::EffectPhi(pCStack_a8,2);
    local_70 = local_88;
    local_80 = pNVar19;
    uStack_78 = uVar6;
    uVar6 = v8::internal::compiler::Graph::NewNode((Graph *)pNVar3,pOVar4,3,&local_80,false);
    pNVar3 = local_b0;
    **(undefined8 **)(param_1 + 0x20) = uVar6;
    pOVar4 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Phi(pCStack_a8,0xc,2);
    local_70 = local_88;
    local_80 = pNVar7;
    uStack_78 = uVar10;
    param_2 = (Node *)v8::internal::compiler::Graph::NewNode
                                ((Graph *)pNVar3,pOVar4,3,&local_80,false);
    switch(param_4) {
    case 1:
      pGVar5 = (Graph *)**(undefined8 **)(param_1 + 8);
      pOVar4 = (Operator *)
               v8::internal::compiler::MachineOperatorBuilder::TruncateFloat64ToWord32
                         ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 3:
      pGVar5 = (Graph *)**(undefined8 **)(param_1 + 8);
      pOVar4 = (Operator *)
               v8::internal::compiler::MachineOperatorBuilder::TruncateFloat64ToFloat32
                         ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
      break;
    case 4:
      goto switchD_01329640_caseD_6;
    }
    local_b0 = param_2;
    param_2 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar5,pOVar4,1,&local_b0,false);
    break;
  case 6:
  case 9:
    break;
  case 7:
    pNVar3 = (Node *)v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntimeWithContext
                               (param_1,0x1d7,param_3,&local_e8,1,*(undefined8 *)(param_1 + 0x20),
                                **(undefined8 **)(param_1 + 0x18));
    **(undefined8 **)(param_1 + 0x20) = pNVar3;
    pGVar5 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::TruncateInt64ToInt32
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
    local_b0 = pNVar3;
    pGVar5 = (Graph *)v8::internal::compiler::Graph::NewNode(pGVar5,pOVar4,1,&local_b0,false);
    pGVar18 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar4 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::Word32Sar
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
    pCStack_a8 = (CommonOperatorBuilder *)
                 v8::internal::compiler::MachineGraph::Int32Constant
                           (*(MachineGraph **)(param_1 + 8),1);
    local_b0 = (Node *)pGVar5;
    uVar10 = v8::internal::compiler::Graph::NewNode(pGVar18,pOVar4,2,&local_b0,false);
    v8::internal::compiler::Diamond::Diamond
              ((Diamond *)&local_b0,**(undefined8 **)(param_1 + 8),
               (*(undefined8 **)(param_1 + 8))[1],uVar10,1);
    pNVar3 = (Node *)**(undefined8 **)(param_1 + 0x18);
    plVar12 = (long *)(local_a0 + 0x20);
    uVar1 = *(uint *)(local_a0 + 0x14) & 0xf000000;
    plVar17 = plVar12;
    if (uVar1 == 0xf000000) {
      plVar17 = (long *)(*plVar12 + 0x10);
    }
    pNVar7 = (Node *)plVar17[1];
    if (pNVar7 != pNVar3) {
      if (uVar1 == 0xf000000) {
        local_a0 = *plVar12;
      }
      if (pNVar7 != (Node *)0x0) {
        v8::internal::compiler::Node::RemoveUse(pNVar7,(Use *)(local_a0 + -0x30));
      }
      plVar17[1] = (long)pNVar3;
      if (pNVar3 != (Node *)0x0) {
        v8::internal::compiler::Node::AppendUse(pNVar3,(Use *)(local_a0 + -0x30));
      }
    }
    local_80 = (Node *)**(undefined8 **)(param_1 + 0x20);
    v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntimeWithContext
              (param_1,0x1cf,param_3,0,0,&local_80,local_90);
    pNVar7 = local_80;
    pNVar3 = local_b0;
    pNVar19 = (Node *)**(undefined8 **)(param_1 + 0x20);
    pOVar4 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::EffectPhi(pCStack_a8,2);
    pNStack_d8 = pNVar7;
    local_d0 = local_88;
    local_e0 = pNVar19;
    uVar10 = v8::internal::compiler::Graph::NewNode((Graph *)pNVar3,pOVar4,3,&local_e0,false);
    **(undefined8 **)(param_1 + 0x20) = uVar10;
    **(undefined8 **)(param_1 + 0x18) = local_88;
  }
switchD_01329640_caseD_6:
  return param_2;
}

