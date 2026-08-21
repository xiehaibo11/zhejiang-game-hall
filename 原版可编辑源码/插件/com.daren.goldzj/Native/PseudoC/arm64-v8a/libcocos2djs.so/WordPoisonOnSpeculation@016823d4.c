
/* v8::internal::compiler::CodeAssembler::WordPoisonOnSpeculation(v8::internal::SloppyTNode<v8::internal::WordT>)
    */

Node * __thiscall
v8::internal::compiler::CodeAssembler::WordPoisonOnSpeculation(CodeAssembler *this,Node *param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_28;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  if (*(int *)(this_00 + 0xa0) != 1) {
    if (this_00[0x30] == (RawMachineAssembler)0x4) {
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word32PoisonOnSpeculation
                         ((MachineOperatorBuilder *)(this_00 + 0x20));
    }
    else {
      pOVar1 = (Operator *)
               MachineOperatorBuilder::Word64PoisonOnSpeculation
                         ((MachineOperatorBuilder *)(this_00 + 0x20));
    }
    local_28 = param_2;
    param_2 = (Node *)RawMachineAssembler::AddNode(this_00,pOVar1,1,&local_28);
  }
  return param_2;
}

