
/* v8::internal::compiler::CodeAssembler::Float64NotEqual(v8::internal::SloppyTNode<v8::internal::Float64T>,
   v8::internal::SloppyTNode<v8::internal::Float64T>) */

void __thiscall
v8::internal::compiler::CodeAssembler::Float64NotEqual
          (CodeAssembler *this,Node *param_2,undefined8 param_3)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  RawMachineAssembler *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Float64Equal((MachineOperatorBuilder *)(this_00 + 0x20));
  local_40 = param_2;
  uStack_38 = param_3;
  pNVar2 = (Node *)RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int32Constant((CommonOperatorBuilder *)(this_00 + 0x48),0);
  uVar3 = RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Word32Equal((MachineOperatorBuilder *)(this_00 + 0x20));
  local_40 = pNVar2;
  uStack_38 = uVar3;
  RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  return;
}

