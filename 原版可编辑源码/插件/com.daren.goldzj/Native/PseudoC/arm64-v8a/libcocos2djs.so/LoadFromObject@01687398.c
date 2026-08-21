
/* v8::internal::compiler::CodeAssembler::LoadFromObject(v8::internal::MachineType,
   v8::internal::TNode<v8::internal::HeapObject>, v8::internal::TNode<v8::internal::IntPtrT>) */

void __thiscall
v8::internal::compiler::CodeAssembler::LoadFromObject
          (CodeAssembler *this,undefined2 param_2,Node *param_3,undefined8 param_4)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_40;
  undefined8 uStack_38;
  undefined2 local_18;
  undefined1 local_16;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  local_16 = 0;
  local_18 = param_2;
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::LoadFromObject
                     ((SimplifiedOperatorBuilder *)(this_00 + 0x58),(ObjectAccess *)&local_18);
  local_40 = param_3;
  uStack_38 = param_4;
  RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_40);
  return;
}

