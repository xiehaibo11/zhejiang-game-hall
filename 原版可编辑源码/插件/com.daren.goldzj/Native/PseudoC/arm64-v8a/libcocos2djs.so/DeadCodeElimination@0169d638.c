
/* v8::internal::compiler::DeadCodeElimination::DeadCodeElimination(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::Graph*, v8::internal::compiler::CommonOperatorBuilder*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::DeadCodeElimination::DeadCodeElimination
          (DeadCodeElimination *this,Editor *param_1,Graph *param_2,CommonOperatorBuilder *param_3,
          Zone *param_4)

{
  Operator *pOVar1;
  long lVar2;
  Node *local_18;
  
  *(Graph **)(this + 0x10) = param_2;
  *(CommonOperatorBuilder **)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__Reducer_01cccea0;
  *(Editor **)(this + 8) = param_1;
  pOVar1 = (Operator *)CommonOperatorBuilder::Dead(param_3);
  local_18 = (Node *)0x0;
  lVar2 = Graph::NewNode(param_2,pOVar1,0,&local_18,false);
  *(long *)(this + 0x20) = lVar2;
  *(Zone **)(this + 0x28) = param_4;
  *(undefined8 *)(lVar2 + 8) = 1;
  return;
}

