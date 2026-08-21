
/* v8::internal::compiler::CodeAssembler::StoreFullTaggedNoWriteBarrier(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::StoreFullTaggedNoWriteBarrier
          (CodeAssembler *this,Node *param_1,Node *param_2,Node *param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  RawMachineAssembler *pRVar3;
  Node *local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  pRVar3 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastTaggedToWord((MachineOperatorBuilder *)(pRVar3 + 0x20));
  local_58 = param_3;
  uVar2 = RawMachineAssembler::AddNode(pRVar3,pOVar1,1,&local_58);
  pRVar3 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)MachineOperatorBuilder::Store((MachineOperatorBuilder *)(pRVar3 + 0x20),5);
  local_58 = param_1;
  pNStack_50 = param_2;
  local_48 = uVar2;
  RawMachineAssembler::AddNode(pRVar3,pOVar1,3,&local_58);
  return;
}

