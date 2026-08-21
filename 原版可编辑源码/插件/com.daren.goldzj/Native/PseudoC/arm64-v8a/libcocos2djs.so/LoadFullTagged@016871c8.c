
/* v8::internal::compiler::CodeAssembler::LoadFullTagged(v8::internal::compiler::Node*,
   v8::internal::LoadSensitivity) */

void __thiscall
v8::internal::compiler::CodeAssembler::LoadFullTagged
          (CodeAssembler *this,undefined8 param_1,undefined4 param_3)

{
  Node *pNVar1;
  Operator *pOVar2;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  pNVar1 = (Node *)RawMachineAssembler::Load
                             ((RawMachineAssembler *)**(undefined8 **)this,5,param_1,param_3);
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar2 = (Operator *)
           MachineOperatorBuilder::BitcastWordToTagged((MachineOperatorBuilder *)(this_00 + 0x20));
  local_28 = pNVar1;
  RawMachineAssembler::AddNode(this_00,pOVar2,1,&local_28);
  return;
}

