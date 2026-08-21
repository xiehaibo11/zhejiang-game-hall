
/* v8::internal::compiler::MachineGraph::Float32Constant(float) */

void __thiscall
v8::internal::compiler::MachineGraph::Float32Constant(MachineGraph *this,float param_1)

{
  Graph *this_00;
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  Node *local_38;
  
  plVar1 = (long *)NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>>::Find
                             ((NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>> *)
                              (this + 0x58),*(Zone **)(this + 0x158),(int)param_1);
  if (*plVar1 == 0) {
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Float32Constant(*(CommonOperatorBuilder **)(this + 8),param_1);
    local_38 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_38,false);
    *plVar1 = lVar3;
  }
  return;
}

