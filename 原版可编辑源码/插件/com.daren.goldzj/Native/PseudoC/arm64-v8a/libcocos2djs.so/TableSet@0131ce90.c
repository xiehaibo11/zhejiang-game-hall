
/* v8::internal::compiler::WasmGraphBuilder::TableSet(unsigned int, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::TableSet
          (WasmGraphBuilder *this,uint param_1,Node *param_2,Node *param_3,int param_4)

{
  Graph *this_00;
  char cVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  Operator *pOVar6;
  Graph *pGVar7;
  Node *local_98;
  undefined8 uStack_90;
  Node *local_88;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  Node *pNStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  cVar1 = *(char *)(*(long *)(**(long **)(this + 0x10) + 0xb8) + (ulong)param_1 * 0x10);
  if (cVar1 == '\t' || cVar1 == '\x06') {
    local_98 = (Node *)0x0;
    local_88 = (Node *)0x0;
    GetTableBaseAndOffset(this,param_1,param_2,param_4,&local_98,&local_88);
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Store
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x508);
    pNStack_68 = (Node *)**(undefined8 **)(this + 0x20);
    local_60 = **(undefined8 **)(this + 0x18);
    local_80 = local_98;
    pNStack_78 = local_88;
    local_70 = param_3;
    uVar3 = Graph::NewNode(pGVar7,pOVar2,5,&local_80,false);
  }
  else {
    uStack_90 = 0x1d2cdc8;
    local_98 = (Node *)&PTR__CallInterfaceDescriptor_01ca18f0;
    pCVar4 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_98,
                        CallDescriptors::call_descriptor_data_._2968_4_ -
                        CallDescriptors::call_descriptor_data_._2960_4_,0,0,1);
    pNVar5 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0x12,5);
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar4);
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::NumberConstant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_1);
    local_80 = (Node *)0x0;
    pNStack_78 = (Node *)Graph::NewNode(this_00,pOVar6,0,&local_80,false);
    local_60 = **(undefined8 **)(this + 0x20);
    uStack_58 = **(undefined8 **)(this + 0x18);
    local_80 = pNVar5;
    local_70 = param_2;
    pNStack_68 = param_3;
    uVar3 = Graph::NewNode(pGVar7,pOVar2,6,&local_80,false);
    **(undefined8 **)(this + 0x18) = uVar3;
  }
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

