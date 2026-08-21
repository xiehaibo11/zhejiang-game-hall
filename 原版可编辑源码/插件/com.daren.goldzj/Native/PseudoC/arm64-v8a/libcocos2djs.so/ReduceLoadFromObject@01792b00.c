
/* v8::internal::compiler::MemoryLowering::ReduceLoadFromObject(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceLoadFromObject(MemoryLowering *this,Node *param_1)

{
  undefined2 *puVar1;
  Operator *pOVar2;
  
  puVar1 = (undefined2 *)ObjectAccessOf(*(Operator **)param_1);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(this + 0x30),*puVar1);
  NodeProperties::ChangeOp(param_1,pOVar2);
  return param_1;
}

