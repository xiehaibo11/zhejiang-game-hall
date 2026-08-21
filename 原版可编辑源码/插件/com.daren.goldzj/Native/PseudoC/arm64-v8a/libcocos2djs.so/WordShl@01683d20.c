
/* v8::internal::compiler::CodeAssembler::WordShl(v8::internal::SloppyTNode<v8::internal::WordT>,
   int) */

undefined8 __thiscall
v8::internal::compiler::CodeAssembler::WordShl(CodeAssembler *this,undefined8 param_2,int param_3)

{
  Operator *pOVar1;
  undefined8 uVar2;
  RawMachineAssembler *this_00;
  
  if (param_3 != 0) {
    this_00 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Int64Constant
                       ((CommonOperatorBuilder *)(this_00 + 0x48),(long)param_3);
    uVar2 = RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
    uVar2 = WordShl(this,param_2,uVar2);
    return uVar2;
  }
  return param_2;
}

