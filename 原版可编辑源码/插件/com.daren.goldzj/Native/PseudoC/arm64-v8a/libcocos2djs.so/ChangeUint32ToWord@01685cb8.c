
/* v8::internal::compiler::CodeAssembler::ChangeUint32ToWord(v8::internal::SloppyTNode<v8::internal::Word32T>)
    */

Node * __thiscall
v8::internal::compiler::CodeAssembler::ChangeUint32ToWord(CodeAssembler *this,Node *param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (this_00[0x30] == (RawMachineAssembler)0x5) {
    pOVar1 = (Operator *)
             MachineOperatorBuilder::ChangeUint32ToUint64
                       ((MachineOperatorBuilder *)(this_00 + 0x20));
    local_28 = param_2;
    param_2 = (Node *)RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  }
  return param_2;
}

