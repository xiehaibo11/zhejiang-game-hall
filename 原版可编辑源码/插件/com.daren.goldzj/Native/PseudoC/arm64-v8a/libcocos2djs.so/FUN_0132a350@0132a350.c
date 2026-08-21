
Node * FUN_0132a350(long param_1,Node *param_2,undefined1 param_3)

{
  MachineOperatorBuilder *this;
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  MachineGraph *pMVar9;
  double dVar10;
  CommonOperatorBuilder *pCVar11;
  Graph *pGVar12;
  CallDescriptor *pCVar13;
  undefined8 *puVar14;
  Node *pNVar15;
  undefined8 uVar16;
  Node *local_90;
  Node *pNStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70;
  undefined8 uStack_68;
  
  switch(param_3) {
  case 1:
    puVar5 = *(undefined8 **)(param_1 + 8);
    pCVar11 = (CommonOperatorBuilder *)puVar5[1];
    this = (MachineOperatorBuilder *)puVar5[2];
    pGVar12 = (Graph *)*puVar5;
    uVar16 = **(undefined8 **)(param_1 + 0x20);
    uVar7 = **(undefined8 **)(param_1 + 0x18);
    pOVar6 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::Int32AddWithOverflow(this);
    local_80 = *(undefined8 *)(**(long **)(param_1 + 8) + 8);
    local_90 = param_2;
    pNStack_88 = param_2;
    pNVar1 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,3,&local_90,false);
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Projection(pCVar11,1);
    pNStack_88 = *(Node **)(**(long **)(param_1 + 8) + 8);
    local_90 = pNVar1;
    pNVar2 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,2,&local_90,false);
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Branch(pCVar11,2,1);
    local_90 = pNVar2;
    pNStack_88 = (Node *)uVar7;
    pNVar2 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,2,&local_90,false);
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::IfTrue(pCVar11);
    local_90 = pNVar2;
    pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,1,&local_90,false);
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::ChangeInt32ToFloat64(this);
    local_90 = param_2;
    uVar7 = v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,1,&local_90,false);
    pNVar4 = (Node *)FUN_0132afe4(param_1,uVar7,pNVar3);
    pNVar15 = (Node *)**(undefined8 **)(param_1 + 0x20);
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::IfFalse(pCVar11);
    local_90 = pNVar2;
    uVar7 = v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,1,&local_90,false);
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Projection(pCVar11,0);
    local_90 = pNVar1;
    pNStack_88 = (Node *)uVar7;
    pNVar1 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,2,&local_90,false);
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (((MachineOperatorBuilder *)puVar5[2])[0x10] == (MachineOperatorBuilder)0x5) {
      pGVar12 = (Graph *)*puVar5;
      pOVar6 = (Operator *)
               v8::internal::compiler::MachineOperatorBuilder::ChangeInt32ToInt64
                         ((MachineOperatorBuilder *)puVar5[2]);
      local_90 = pNVar1;
      pNVar1 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,1,&local_90,false);
      puVar5 = *(undefined8 **)(param_1 + 8);
    }
    pGVar12 = (Graph *)*puVar5;
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Merge(pCVar11,2);
    local_90 = pNVar3;
    pNStack_88 = (Node *)uVar7;
    uVar7 = v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,2,&local_90,false);
    **(undefined8 **)(param_1 + 0x18) = uVar7;
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::EffectPhi(pCVar11,2);
    local_90 = pNVar15;
    pNStack_88 = (Node *)uVar16;
    local_80 = uVar7;
    uVar16 = v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,3,&local_90,false);
    **(undefined8 **)(param_1 + 0x20) = uVar16;
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Phi(pCVar11,8,2);
    local_90 = pNVar4;
    pNStack_88 = pNVar1;
    local_80 = uVar7;
    param_2 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,3,&local_90,false);
    break;
  case 2:
    puVar14 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(param_1 + 0x80);
    pCVar11 = (CommonOperatorBuilder *)puVar14[1];
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = operator_new(0x20);
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *(undefined8 **)(param_1 + 0x80) = puVar5;
    }
    pCVar13 = (CallDescriptor *)puVar5[1];
    if (pCVar13 == (CallDescriptor *)0x0) {
      uStack_68 = 0x1d2c440;
      local_70 = &PTR__CallInterfaceDescriptor_01ca1950;
      pCVar13 = (CallDescriptor *)
                v8::internal::compiler::Linkage::GetStubCallDescriptor
                          (*(undefined8 *)*puVar14,&local_70,
                           v8::internal::CallDescriptors::call_descriptor_data_._528_4_ -
                           v8::internal::CallDescriptors::call_descriptor_data_._520_4_,0,0,
                           *(undefined4 *)(param_1 + 0x88));
      pNStack_88 = (Node *)0x1d2c468;
      *(CallDescriptor **)(*(long *)(param_1 + 0x80) + 8) = pCVar13;
      local_90 = (Node *)&PTR__CallInterfaceDescriptor_01ca1980;
      uVar7 = v8::internal::compiler::Linkage::GetStubCallDescriptor
                        (*(undefined8 *)**(undefined8 **)(param_1 + 8),&local_90,
                         v8::internal::CallDescriptors::call_descriptor_data_._568_4_ -
                         v8::internal::CallDescriptors::call_descriptor_data_._560_4_,0,0,
                         *(undefined4 *)(param_1 + 0x88));
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18) = uVar7;
    }
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Call(pCVar11,pCVar13);
    pMVar9 = *(MachineGraph **)(param_1 + 8);
    if (*(char *)(*(long *)(pMVar9 + 0x10) + 0x10) == '\x05') {
      if (*(int *)(param_1 + 0x88) == 1) {
        uVar7 = 0x1e;
        goto LAB_0132a7a8;
      }
      pGVar12 = *(Graph **)pMVar9;
      pCVar11 = *(CommonOperatorBuilder **)(pMVar9 + 8);
      dVar10 = 112.0;
LAB_0132a7d0:
      pOVar8 = (Operator *)
               v8::internal::compiler::CommonOperatorBuilder::NumberConstant(pCVar11,dVar10);
      local_90 = (Node *)0x0;
      local_90 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar12,pOVar8,0,&local_90,false);
    }
    else {
      if (*(int *)(param_1 + 0x88) != 1) {
        pGVar12 = *(Graph **)pMVar9;
        pCVar11 = *(CommonOperatorBuilder **)(pMVar9 + 8);
        dVar10 = 113.0;
        goto LAB_0132a7d0;
      }
      uVar7 = 0x1d;
LAB_0132a7a8:
      local_90 = (Node *)v8::internal::compiler::MachineGraph::RelocatableIntPtrConstant
                                   (pMVar9,uVar7,5);
    }
    uStack_78 = **(undefined8 **)(param_1 + 0x18);
    local_80 = **(undefined8 **)(param_1 + 0x20);
    pNStack_88 = param_2;
    param_2 = (Node *)v8::internal::compiler::Graph::NewNode
                                ((Graph *)**(undefined8 **)(param_1 + 8),pOVar6,4,&local_90,false);
    **(undefined8 **)(param_1 + 0x18) = param_2;
    **(undefined8 **)(param_1 + 0x20) = param_2;
    break;
  case 3:
    pGVar12 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar6 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::ChangeFloat32ToFloat64
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
    local_90 = param_2;
    uVar7 = v8::internal::compiler::Graph::NewNode(pGVar12,pOVar6,1,&local_90,false);
    param_2 = (Node *)FUN_0132a994(param_1,uVar7);
    break;
  case 4:
    uVar7 = FUN_0132a994(param_1,param_2);
    return (Node *)uVar7;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 6:
  case 7:
  case 9:
    break;
  }
  return param_2;
}

