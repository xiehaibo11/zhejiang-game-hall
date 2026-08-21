
/* v8::internal::compiler::WasmGraphBuilder::TableGet(unsigned int, v8::internal::compiler::Node*,
   int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::TableGet
          (WasmGraphBuilder *this,uint param_1,Node *param_2,int param_3)

{
  Graph *this_00;
  char cVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  Operator *pOVar6;
  Graph *pGVar7;
  Node *local_88;
  undefined8 uStack_80;
  Node *local_78;
  Node *pNStack_70;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  Node *local_38;
  
  cVar1 = *(char *)(*(long *)(**(long **)(this + 0x10) + 0xb8) + (ulong)param_1 * 0x10);
  if (cVar1 == '\t' || cVar1 == '\x06') {
    local_88 = (Node *)0x0;
    local_38 = (Node *)0x0;
    GetTableBaseAndOffset(this,param_1,param_2,param_3,&local_88,&local_38);
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],0x708);
    uStack_60 = **(undefined8 **)(this + 0x18);
    local_68 = (Node *)**(undefined8 **)(this + 0x20);
    local_78 = local_88;
    pNStack_70 = local_38;
    uVar3 = Graph::NewNode(pGVar7,pOVar2,4,&local_78,false);
  }
  else {
    uStack_80 = 0x1d2cda0;
    local_88 = (Node *)&PTR__CallInterfaceDescriptor_01ca18c0;
    pCVar4 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)(this + 8),&local_88,
                        CallDescriptors::call_descriptor_data_._2928_4_ -
                        CallDescriptors::call_descriptor_data_._2920_4_,0,0,1);
    pNVar5 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0x11,5);
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Call
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar4);
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::NumberConstant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],(double)param_1);
    local_78 = (Node *)0x0;
    pNStack_70 = (Node *)Graph::NewNode(this_00,pOVar6,0,&local_78,false);
    uStack_60 = **(undefined8 **)(this + 0x20);
    local_58 = **(undefined8 **)(this + 0x18);
    local_78 = pNVar5;
    local_68 = param_2;
    uVar3 = Graph::NewNode(pGVar7,pOVar2,5,&local_78,false);
    **(undefined8 **)(this + 0x18) = uVar3;
  }
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

