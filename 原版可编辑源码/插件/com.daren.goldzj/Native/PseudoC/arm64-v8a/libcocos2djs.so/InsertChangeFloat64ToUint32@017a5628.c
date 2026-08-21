
/* v8::internal::compiler::RepresentationChanger::InsertChangeFloat64ToUint32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::InsertChangeFloat64ToUint32
          (RepresentationChanger *this,Node *param_1)

{
  Operator *pOVar1;
  Graph *this_00;
  Node *local_28;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::ChangeFloat64ToUint32
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  local_28 = param_1;
  Graph::NewNode(this_00,pOVar1,1,&local_28,false);
  return;
}

