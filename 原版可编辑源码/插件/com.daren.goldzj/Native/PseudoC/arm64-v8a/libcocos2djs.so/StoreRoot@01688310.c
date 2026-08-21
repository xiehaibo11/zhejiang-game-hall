
/* v8::internal::compiler::CodeAssembler::StoreRoot(v8::internal::RootIndex,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CodeAssembler::StoreRoot(CodeAssembler *this,ulong param_2,Node *param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RawMachineAssembler *pRVar5;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = (Node *)ExternalReference::isolate_root(*(Isolate **)**(undefined8 **)this);
  pRVar5 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::ExternalConstant
                     ((CommonOperatorBuilder *)(pRVar5 + 0x48),(ExternalReference *)&local_58);
  pNVar2 = (Node *)RawMachineAssembler::AddNode(pRVar5,pOVar1,0,(Node **)0x0);
  pRVar5 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant
                     ((CommonOperatorBuilder *)(pRVar5 + 0x48),(param_2 & 0xffff) * 8 + 0x80);
  uVar3 = RawMachineAssembler::AddNode(pRVar5,pOVar1,0,(Node **)0x0);
  pRVar5 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastTaggedToWord((MachineOperatorBuilder *)(pRVar5 + 0x20));
  local_58 = param_3;
  uVar4 = RawMachineAssembler::AddNode(pRVar5,pOVar1,1,&local_58);
  pRVar5 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)MachineOperatorBuilder::Store((MachineOperatorBuilder *)(pRVar5 + 0x20),5);
  local_58 = pNVar2;
  uStack_50 = uVar3;
  local_48 = uVar4;
  RawMachineAssembler::AddNode(pRVar5,pOVar1,3,&local_58);
  return;
}

