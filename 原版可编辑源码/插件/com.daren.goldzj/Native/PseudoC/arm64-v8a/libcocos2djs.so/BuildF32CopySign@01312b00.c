
/* v8::internal::compiler::WasmGraphBuilder::BuildF32CopySign(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF32CopySign
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastFloat32ToInt32
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = param_1;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,1,&local_40,false);
  uVar3 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x7fffffff);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32And
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar2;
  uStack_38 = uVar3;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastFloat32ToInt32
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = param_2;
  pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,1,&local_40,false);
  uVar3 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),-0x80000000);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32And
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar4;
  uStack_38 = uVar3;
  uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Or
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar2;
  uStack_38 = uVar3;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastInt32ToFloat32
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar2;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,1,&local_40,false);
  return;
}

