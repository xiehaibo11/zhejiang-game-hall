
/* v8::internal::compiler::CodeAssembler::UnsafeStoreNoWriteBarrier(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::UnsafeStoreNoWriteBarrier
          (CodeAssembler *this,undefined1 param_2,Node *param_3,undefined8 param_4)

{
  Operator *pOVar1;
  undefined8 uVar2;
  RawMachineAssembler *this_00;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(this_00 + 0x48),0);
  uVar2 = RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store((MachineOperatorBuilder *)(this_00 + 0x20),param_2);
  local_58 = param_3;
  uStack_50 = uVar2;
  local_48 = param_4;
  RawMachineAssembler::AddNode(this_00,pOVar1,3,&local_58);
  return;
}

