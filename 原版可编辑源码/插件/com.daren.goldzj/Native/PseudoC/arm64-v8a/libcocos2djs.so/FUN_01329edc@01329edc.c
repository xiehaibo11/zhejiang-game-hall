
void FUN_01329edc(WasmGraphBuilder *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  Node *pNVar5;
  long lVar6;
  Graph *pGVar7;
  Graph *pGVar8;
  Node *pNVar9;
  Node *pNVar10;
  long *plVar11;
  double dVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  Node *local_88;
  CommonOperatorBuilder *pCStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    pGVar7 = *(Graph **)(param_1 + 0x50);
    if (pGVar7 == (Graph *)0x0) {
      pGVar7 = (Graph *)**(undefined8 **)(param_1 + 8);
      pOVar3 = (Operator *)
               v8::internal::compiler::MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
      pNVar10 = *(Node **)(param_1 + 0x30);
      pCStack_80 = (CommonOperatorBuilder *)
                   v8::internal::compiler::MachineGraph::Int32Constant
                             (*(MachineGraph **)(param_1 + 8),0x5f);
      uStack_70 = **(undefined8 **)(param_1 + 0x18);
      local_78 = **(undefined8 **)(param_1 + 0x20);
      local_88 = pNVar10;
      pGVar7 = (Graph *)v8::internal::compiler::Graph::NewNode(pGVar7,pOVar3,4,&local_88,false);
      **(long **)(param_1 + 0x20) = (long)pGVar7;
    }
    pGVar8 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar3 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
    pCStack_80 = (CommonOperatorBuilder *)
                 v8::internal::compiler::MachineGraph::Int32Constant
                           (*(MachineGraph **)(param_1 + 8),0x2c70);
    uStack_70 = **(undefined8 **)(param_1 + 0x18);
    local_78 = **(long **)(param_1 + 0x20);
    local_88 = (Node *)pGVar7;
    pNVar10 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar8,pOVar3,4,&local_88,false);
    **(undefined8 **)(param_1 + 0x20) = pNVar10;
    if (v8::internal::FLAG_debug_code != '\0') {
      pGVar7 = (Graph *)**(undefined8 **)(param_1 + 8);
      pOVar3 = (Operator *)
               v8::internal::compiler::MachineOperatorBuilder::Load
                         ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
      pCStack_80 = (CommonOperatorBuilder *)
                   v8::internal::compiler::MachineGraph::Int32Constant
                             (*(MachineGraph **)(param_1 + 8),0);
      uStack_70 = **(undefined8 **)(param_1 + 0x18);
      local_78 = **(long **)(param_1 + 0x20);
      local_88 = pNVar10;
      pGVar7 = (Graph *)v8::internal::compiler::Graph::NewNode(pGVar7,pOVar3,4,&local_88,false);
      **(undefined8 **)(param_1 + 0x20) = pGVar7;
      pGVar8 = (Graph *)**(undefined8 **)(param_1 + 8);
      pOVar3 = (Operator *)
               v8::internal::compiler::MachineOperatorBuilder::Word32Equal
                         ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2]);
      pCStack_80 = (CommonOperatorBuilder *)
                   v8::internal::compiler::MachineGraph::Int32Constant
                             (*(MachineGraph **)(param_1 + 8),~param_2 & 1);
      local_88 = (Node *)pGVar7;
      uVar4 = v8::internal::compiler::Graph::NewNode(pGVar8,pOVar3,2,&local_88,false);
      v8::internal::compiler::Diamond::Diamond
                ((Diamond *)&local_88,**(undefined8 **)(param_1 + 8),
                 (*(undefined8 **)(param_1 + 8))[1],uVar4,1);
      pNVar9 = (Node *)**(undefined8 **)(param_1 + 0x18);
      plVar1 = (long *)(local_78 + 0x20);
      uVar2 = *(uint *)(local_78 + 0x14) & 0xf000000;
      plVar11 = plVar1;
      if (uVar2 == 0xf000000) {
        plVar11 = (long *)(*plVar1 + 0x10);
      }
      pNVar5 = (Node *)plVar11[1];
      if (pNVar5 != pNVar9) {
        lVar6 = local_78;
        if (uVar2 == 0xf000000) {
          lVar6 = *plVar1;
        }
        if (pNVar5 != (Node *)0x0) {
          v8::internal::compiler::Node::RemoveUse(pNVar5,(Use *)(lVar6 + -0x30));
        }
        plVar11[1] = (long)pNVar9;
        if (pNVar9 != (Node *)0x0) {
          v8::internal::compiler::Node::AppendUse(pNVar9,(Use *)(lVar6 + -0x30));
        }
      }
      pGVar7 = (Graph *)**(undefined8 **)(param_1 + 8);
      dVar12 = 54.0;
      if ((param_2 & 1) == 0) {
        dVar12 = 55.0;
      }
      pOVar3 = (Operator *)
               v8::internal::compiler::CommonOperatorBuilder::NumberConstant
                         ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],dVar12);
      local_58 = (Node *)0x0;
      uStack_90 = v8::internal::compiler::Graph::NewNode(pGVar7,pOVar3,0,&local_58,false);
      local_98 = **(undefined8 **)(param_1 + 0x20);
      uVar4 = v8::internal::compiler::MachineGraph::IntPtrConstant
                        (*(MachineGraph **)(param_1 + 8),0);
      v8::internal::compiler::WasmGraphBuilder::BuildCallToRuntimeWithContext
                (param_1,0x15f,uVar4,&uStack_90,1,&local_98,local_68);
      pNVar9 = local_88;
      uVar4 = local_98;
      pNVar5 = (Node *)**(undefined8 **)(param_1 + 0x20);
      pOVar3 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::EffectPhi(pCStack_80,2);
      uStack_50 = uVar4;
      local_48 = local_60;
      local_58 = pNVar5;
      uVar4 = v8::internal::compiler::Graph::NewNode((Graph *)pNVar9,pOVar3,3,&local_58,false);
      **(undefined8 **)(param_1 + 0x20) = uVar4;
      **(undefined8 **)(param_1 + 0x18) = local_60;
    }
    pGVar7 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar3 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::Store
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],4);
    uVar4 = v8::internal::compiler::MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0);
    local_78 = v8::internal::compiler::MachineGraph::Int32Constant
                         (*(MachineGraph **)(param_1 + 8),param_2 & 1);
    uStack_70 = **(undefined8 **)(param_1 + 0x20);
    local_68 = **(undefined8 **)(param_1 + 0x18);
    local_88 = pNVar10;
    pCStack_80 = (CommonOperatorBuilder *)uVar4;
    uVar4 = v8::internal::compiler::Graph::NewNode(pGVar7,pOVar3,5,&local_88,false);
    **(undefined8 **)(param_1 + 0x20) = uVar4;
  }
  return;
}

