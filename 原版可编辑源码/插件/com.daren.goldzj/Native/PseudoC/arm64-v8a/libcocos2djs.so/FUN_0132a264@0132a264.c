
void FUN_0132a264(long param_1)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Graph *pGVar3;
  Node *pNVar4;
  Node *local_50;
  undefined8 uStack_48;
  Node *local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    pGVar3 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar1 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],5);
    pNVar4 = *(Node **)(param_1 + 0x30);
    uStack_48 = v8::internal::compiler::MachineGraph::Int32Constant
                          (*(MachineGraph **)(param_1 + 8),0x5f);
    local_40 = *(Node **)(**(long **)(param_1 + 8) + 8);
    local_50 = pNVar4;
    uStack_38 = local_40;
    pNVar4 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar3,pOVar1,4,&local_50,false);
    pGVar3 = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar1 = (Operator *)
             v8::internal::compiler::MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[2],0x707);
    uStack_48 = v8::internal::compiler::MachineGraph::Int32Constant
                          (*(MachineGraph **)(param_1 + 8),0xa0);
    uStack_38 = *(undefined8 *)(**(long **)(param_1 + 8) + 8);
    local_50 = pNVar4;
    local_40 = pNVar4;
    uVar2 = v8::internal::compiler::Graph::NewNode(pGVar3,pOVar1,4,&local_50,false);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
  }
  return;
}

