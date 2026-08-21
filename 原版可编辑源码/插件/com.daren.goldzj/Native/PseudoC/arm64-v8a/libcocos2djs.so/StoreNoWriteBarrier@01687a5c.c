
/* v8::internal::compiler::CodeAssembler::StoreNoWriteBarrier(v8::internal::MachineRepresentation,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::StoreNoWriteBarrier
          (CodeAssembler *this,char param_2,Node *param_3,undefined8 param_4,undefined8 param_5)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Store
                     ((MachineOperatorBuilder *)(this_00 + 0x20),
                      CONCAT11((byte)(param_2 - 7U) < 2,param_2));
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_5;
  RawMachineAssembler::AddNode(this_00,pOVar1,3,&local_48);
  return;
}

