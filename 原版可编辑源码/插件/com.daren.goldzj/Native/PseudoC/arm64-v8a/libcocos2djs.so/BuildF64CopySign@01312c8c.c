
/* v8::internal::compiler::WasmGraphBuilder::BuildF64CopySign(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF64CopySign
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastFloat64ToInt64
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = param_1;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,1,&local_40,false);
  uVar3 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0x7fffffffffffffff);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word64And
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar2;
  uStack_38 = uVar3;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastFloat64ToInt64
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = param_2;
  pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,1,&local_40,false);
  uVar3 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),-0x8000000000000000);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word64And
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar4;
  uStack_38 = uVar3;
  uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word64Or
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar2;
  uStack_38 = uVar3;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastInt64ToFloat64
                     (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  local_40 = pNVar2;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,1,&local_40,false);
  return;
}

