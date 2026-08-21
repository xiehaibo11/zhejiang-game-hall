
/* v8::internal::compiler::WasmGraphBuilder::BuildBitCountingCall(v8::internal::compiler::Node*,
   v8::internal::ExternalReference, v8::internal::MachineRepresentation) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildBitCountingCall
          (WasmGraphBuilder *this,undefined8 param_1,undefined8 param_3,uint param_4)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  Graph *pGVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 *local_80;
  undefined4 local_70 [2];
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_28;
  
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  local_28 = param_3;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::StackSlot
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],param_4,0);
  local_68 = (Node *)0x0;
  pNVar2 = (Node *)Graph::NewNode(pGVar5,pOVar1,0,&local_68,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10),param_4 & 0xff);
  pGVar5 = *(Graph **)*(MachineGraph **)(this + 8);
  pNStack_60 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  local_50 = **(undefined8 **)(this + 0x20);
  local_48 = **(undefined8 **)(this + 0x18);
  local_68 = pNVar2;
  local_58 = param_1;
  uVar3 = Graph::NewNode(pGVar5,pOVar1,5,&local_68,false);
  local_80 = local_70;
  **(undefined8 **)(this + 0x20) = uVar3;
  local_70[0] = 0x50204;
  uStack_88 = 1;
  local_90 = 1;
  pGVar5 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],
                      (ExternalReference *)&local_28);
  local_68 = (Node *)0x0;
  local_68 = (Node *)Graph::NewNode(pGVar5,pOVar1,0,&local_68,false);
  local_58 = **(undefined8 **)(this + 0x20);
  local_50 = **(undefined8 **)(this + 0x18);
  pNStack_60 = pNVar2;
  pCVar4 = (CallDescriptor *)
           Linkage::GetSimplifiedCDescriptor(*(undefined8 *)**(undefined8 **)(this + 8),&local_90,0)
  ;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar4);
  uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,4,&local_68,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

