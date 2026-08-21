
/* v8::internal::compiler::WasmGraphBuilder::MemoryGrow(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::MemoryGrow(WasmGraphBuilder *this,Node *param_1)

{
  Graph *this_00;
  CallDescriptor *pCVar1;
  Node *pNVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  undefined **local_70;
  undefined8 uStack_68;
  Node *local_60;
  Node *pNStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this[0x61] = (WasmGraphBuilder)0x1;
  uStack_68 = 0x1d2cd78;
  local_70 = &PTR__CallInterfaceDescriptor_01ca1890;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)(this + 8),&local_70,
                      CallDescriptors::call_descriptor_data_._2888_4_ -
                      CallDescriptors::call_descriptor_data_._2880_4_,0,0,1);
  pNVar2 = (Node *)MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0x10,5);
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Call
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],pCVar1);
  uStack_48 = **(undefined8 **)(this + 0x18);
  local_50 = **(undefined8 **)(this + 0x20);
  local_60 = pNVar2;
  pNStack_58 = param_1;
  uVar4 = Graph::NewNode(this_00,pOVar3,4,&local_60,false);
  **(undefined8 **)(this + 0x18) = uVar4;
  **(undefined8 **)(this + 0x20) = uVar4;
  return;
}

