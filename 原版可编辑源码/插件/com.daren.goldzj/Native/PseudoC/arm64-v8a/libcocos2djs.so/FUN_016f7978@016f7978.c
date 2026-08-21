
void FUN_016f7978(long param_1)

{
  GraphAssembler *this;
  long lVar1;
  Operator *pOVar2;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  Node *pNVar3;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  this = *(GraphAssembler **)(param_1 + 8);
  pNVar3 = (Node *)**(undefined8 **)(param_1 + 0x10);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar1 = v8::internal::compiler::CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar2 = (Operator *)
           v8::internal::compiler::SimplifiedOperatorBuilder::CheckSmi
                     (this_01,(FeedbackSource *)(lVar1 + 8));
  uStack_40 = *(undefined8 *)(this + 0x20);
  local_38 = *(undefined8 *)(this + 0x28);
  local_48 = pNVar3;
  pNVar3 = (Node *)v8::internal::compiler::Graph::NewNode(this_00,pOVar2,3,&local_48,false);
  v8::internal::compiler::GraphAssembler::AddNode(this,pNVar3);
  return;
}

