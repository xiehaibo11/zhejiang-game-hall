
/* v8::internal::compiler::Int64Lowering::GetIndexNodes(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::Int64Lowering::GetIndexNodes
          (Int64Lowering *this,Node *param_1,Node **param_2,Node **param_3)

{
  Graph *this_00;
  Operator *pOVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *this_01;
  Node *local_50;
  undefined8 uStack_48;
  
  *param_2 = param_1;
  this_00 = *(Graph **)(this + 8);
  pOVar1 = (Operator *)MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(this + 0x10));
  this_01 = *(Graph **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),4);
  local_50 = (Node *)0x0;
  uStack_48 = Graph::NewNode(this_01,pOVar2,0,&local_50,false);
  local_50 = param_1;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar1,2,&local_50,false);
  *param_3 = pNVar3;
  return;
}

