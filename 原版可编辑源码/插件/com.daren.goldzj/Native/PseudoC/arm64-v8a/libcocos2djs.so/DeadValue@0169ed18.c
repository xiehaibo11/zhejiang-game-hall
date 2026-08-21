
/* v8::internal::compiler::DeadCodeElimination::DeadValue(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation) */

Node * __thiscall
v8::internal::compiler::DeadCodeElimination::DeadValue
          (DeadCodeElimination *this,Node *param_1,uint param_3)

{
  Graph *this_00;
  uint uVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *local_38;
  
  if (*(short *)(*(Operator **)param_1 + 0x10) == 0x3c) {
    uVar1 = DeadValueRepresentationOf(*(Operator **)param_1);
    if ((uVar1 & 0xff) == (param_3 & 0xff)) {
      return param_1;
    }
    param_1 = (Node *)NodeProperties::GetValueInput(param_1,0);
  }
  this_00 = *(Graph **)(this + 0x10);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::DeadValue(*(CommonOperatorBuilder **)(this + 0x18),param_3);
  local_38 = param_1;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,1,&local_38,false);
  *(undefined8 *)(pNVar3 + 8) = 1;
  return pNVar3;
}

