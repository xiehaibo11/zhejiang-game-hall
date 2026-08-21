
/* v8::internal::compiler::CodeAssembler::UntypedHeapConstant(v8::internal::Handle<v8::internal::HeapObject>)
    */

void __thiscall
v8::internal::compiler::CodeAssembler::UntypedHeapConstant(CodeAssembler *this,undefined8 param_2)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  undefined8 local_8;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  local_8 = param_2;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::HeapConstant
                     ((CommonOperatorBuilder *)(this_00 + 0x48),(Handle *)&local_8);
  RawMachineAssembler::AddNode(this_00,pOVar1,0,(Node **)0x0);
  return;
}

