
/* v8::internal::compiler::CodeAssembler::SmiConstant(v8::internal::Smi) */

void __thiscall v8::internal::compiler::CodeAssembler::SmiConstant(CodeAssembler *this,long param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  RawMachineAssembler *pRVar3;
  Node *local_28;
  
  pRVar3 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(pRVar3 + 0x48),param_2);
  pNVar2 = (Node *)RawMachineAssembler::AddNode(pRVar3,pOVar1,0,(Node **)0x0);
  pRVar3 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::BitcastWordToTaggedSigned
                     ((MachineOperatorBuilder *)(pRVar3 + 0x20));
  local_28 = pNVar2;
  RawMachineAssembler::AddNode(pRVar3,pOVar1,1,&local_28);
  return;
}

