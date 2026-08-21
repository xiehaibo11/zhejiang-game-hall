
Node * FUN_0132afe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  CommonOperatorBuilder *this;
  MachineOperatorBuilder *pMVar1;
  MachineGraph *pMVar2;
  Node *pNVar3;
  CallDescriptor *pCVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Graph *pGVar7;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  pMVar2 = *(MachineGraph **)(param_1 + 8);
  this = *(CommonOperatorBuilder **)(pMVar2 + 8);
  pMVar1 = *(MachineOperatorBuilder **)(pMVar2 + 0x10);
  if (*(int *)(param_1 + 0x88) == 1) {
    pNVar3 = (Node *)v8::internal::compiler::MachineGraph::RelocatableIntPtrConstant(pMVar2,0x18,5);
  }
  else {
    pGVar7 = *(Graph **)pMVar2;
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::NumberConstant(this,388.0);
    local_68 = (Node *)0x0;
    pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(pGVar7,pOVar6,0,&local_68,false);
  }
  pOVar6 = *(Operator **)(param_1 + 0x98);
  if (pOVar6 == (Operator *)0x0) {
    uStack_60 = 0x1d2c288;
    local_68 = (Node *)&PTR__CallInterfaceDescriptor_01cbd300;
    pCVar4 = (CallDescriptor *)
             v8::internal::compiler::Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(param_1 + 8),&local_68,0,0,0x20,
                        *(undefined4 *)(param_1 + 0x88));
    pOVar6 = (Operator *)v8::internal::compiler::CommonOperatorBuilder::Call(this,pCVar4);
    *(Operator **)(param_1 + 0x98) = pOVar6;
  }
  uStack_60 = **(undefined8 **)(param_1 + 0x20);
  local_68 = pNVar3;
  local_58 = param_3;
  pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode
                             ((Graph *)**(undefined8 **)(param_1 + 8),pOVar6,3,&local_68,false);
  pGVar7 = (Graph *)**(undefined8 **)(param_1 + 8);
  pOVar6 = (Operator *)v8::internal::compiler::MachineOperatorBuilder::Store(pMVar1,0xc);
  uStack_60 = v8::internal::compiler::MachineGraph::IntPtrConstant
                        (*(MachineGraph **)(param_1 + 8),3);
  local_68 = pNVar3;
  local_58 = param_2;
  pNStack_50 = pNVar3;
  local_48 = param_3;
  uVar5 = v8::internal::compiler::Graph::NewNode(pGVar7,pOVar6,5,&local_68,false);
  **(undefined8 **)(param_1 + 0x20) = uVar5;
  return pNVar3;
}

