
/* v8::internal::compiler::WasmGraphBuilder::BuildDecodeException64BitValue(v8::internal::compiler::Node*,
   unsigned int*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildDecodeException64BitValue
          (WasmGraphBuilder *this,Node *param_1,uint *param_2)

{
  Node *pNVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *local_50;
  undefined8 uStack_48;
  
  pNVar1 = (Node *)BuildDecodeException32BitValue(this,param_1,param_2);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::ChangeUint32ToUint64
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_50 = pNVar1;
  pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,1,&local_50,false);
  pNVar3 = (Node *)MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0x20);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word64Shl
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  uStack_48 = MaskShiftCount64(this,pNVar3);
  local_50 = pNVar1;
  pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_50,false);
  pNVar3 = (Node *)BuildDecodeException32BitValue(this,param_1,param_2);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::ChangeUint32ToUint64
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_50 = pNVar3;
  uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,1,&local_50,false);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Word64Or
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_50 = pNVar1;
  uStack_48 = uVar4;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,2,&local_50,false);
  return;
}

