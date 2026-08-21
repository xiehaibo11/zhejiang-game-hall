
void FUN_0132b15c(long param_1,Node *param_2,Node *param_3,Node *param_4)

{
  Operator *pOVar1;
  Node *pNVar2;
  CommonOperatorBuilder *pCVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Graph *pGVar6;
  Node *pNVar7;
  Node *local_90;
  CommonOperatorBuilder *pCStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar1 = (Operator *)
           v8::internal::compiler::MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  pCStack_88 = (CommonOperatorBuilder *)
               v8::internal::compiler::MachineGraph::Int32Constant
                         (*(MachineGraph **)(param_1 + 8),0xb);
  uStack_78 = **(undefined8 **)(param_1 + 0x18);
  local_80 = **(undefined8 **)(param_1 + 0x20);
  local_90 = param_2;
  pNVar2 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar6,pOVar1,4,&local_90,false);
  **(undefined8 **)(param_1 + 0x20) = pNVar2;
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar1 = (Operator *)
           v8::internal::compiler::MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x204);
  pCStack_88 = (CommonOperatorBuilder *)
               v8::internal::compiler::MachineGraph::Int32Constant
                         (*(MachineGraph **)(param_1 + 8),0x1b);
  uStack_78 = **(undefined8 **)(param_1 + 0x18);
  local_80 = **(undefined8 **)(param_1 + 0x20);
  local_90 = pNVar2;
  pGVar6 = (Graph *)v8::internal::compiler::Graph::NewNode(pGVar6,pOVar1,4,&local_90,false);
  **(undefined8 **)(param_1 + 0x20) = pGVar6;
  pCVar3 = (CommonOperatorBuilder *)
           v8::internal::compiler::MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0x60)
  ;
  pOVar1 = (Operator *)
           v8::internal::compiler::MachineOperatorBuilder::Word32And
                     (*(MachineOperatorBuilder **)(*(long *)(param_1 + 8) + 0x10));
  local_90 = (Node *)pGVar6;
  pCStack_88 = pCVar3;
  uVar4 = v8::internal::compiler::Graph::NewNode
                    ((Graph *)**(undefined8 **)(param_1 + 8),pOVar1,2,&local_90,false);
  v8::internal::compiler::Diamond::Diamond
            ((Diamond *)&local_90,**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[1],
             uVar4,0);
  pNVar7 = (Node *)**(undefined8 **)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x18) = local_70;
  pGVar6 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar1 = (Operator *)
           v8::internal::compiler::MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
  uStack_58 = v8::internal::compiler::MachineGraph::Int32Constant
                        (*(MachineGraph **)(param_1 + 8),0x13);
  uStack_48 = **(undefined8 **)(param_1 + 0x18);
  local_50 = **(undefined8 **)(param_1 + 0x20);
  local_60 = param_3;
  uVar4 = v8::internal::compiler::Graph::NewNode(pGVar6,pOVar1,4,&local_60,false);
  pNVar2 = local_90;
  **(undefined8 **)(param_1 + 0x20) = uVar4;
  pOVar1 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::EffectPhi(pCStack_88,2);
  local_50 = local_68;
  local_60 = pNVar7;
  uStack_58 = uVar4;
  uVar5 = v8::internal::compiler::Graph::NewNode((Graph *)pNVar2,pOVar1,3,&local_60,false);
  pNVar2 = local_90;
  **(undefined8 **)(param_1 + 0x20) = uVar5;
  **(undefined8 **)(param_1 + 0x18) = local_68;
  pOVar1 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Phi(pCStack_88,8,2);
  local_50 = local_68;
  local_60 = param_4;
  uStack_58 = uVar4;
  v8::internal::compiler::Graph::NewNode((Graph *)pNVar2,pOVar1,3,&local_60,false);
  return;
}

