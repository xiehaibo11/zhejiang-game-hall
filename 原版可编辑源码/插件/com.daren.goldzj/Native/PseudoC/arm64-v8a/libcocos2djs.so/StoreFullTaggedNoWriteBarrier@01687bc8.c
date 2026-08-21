
/* v8::internal::compiler::CodeAssembler::StoreFullTaggedNoWriteBarrier(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::StoreFullTaggedNoWriteBarrier
          (CodeAssembler *this,Node *param_1,Node *param_2)

{
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RawMachineAssembler *pRVar4;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pRVar4 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastTaggedToWord((MachineOperatorBuilder *)(pRVar4 + 0x20));
  local_48 = param_2;
  uVar2 = RawMachineAssembler::AddNode(pRVar4,pOVar1,1,&local_48);
  pRVar4 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(pRVar4 + 0x48),0);
  uVar3 = RawMachineAssembler::AddNode(pRVar4,pOVar1,0,(Node **)0x0);
  pOVar1 = (Operator *)MachineOperatorBuilder::Store((MachineOperatorBuilder *)(pRVar4 + 0x20),5);
  local_48 = param_1;
  uStack_40 = uVar3;
  local_38 = uVar2;
  RawMachineAssembler::AddNode(pRVar4,pOVar1,3,&local_48);
  return;
}

