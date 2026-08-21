
/* v8::internal::compiler::JSGraph::NumberConstant(double) */

void __thiscall v8::internal::compiler::JSGraph::NumberConstant(JSGraph *this,double param_1)

{
  Graph *this_00;
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  Node *local_38;
  
  plVar1 = (long *)NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
                             ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)
                              (this + 0xd8),*(Zone **)(this + 0x158),(long)param_1);
  if (*plVar1 == 0) {
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::NumberConstant(*(CommonOperatorBuilder **)(this + 8),param_1);
    local_38 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_38,false);
    *plVar1 = lVar3;
  }
  return;
}

