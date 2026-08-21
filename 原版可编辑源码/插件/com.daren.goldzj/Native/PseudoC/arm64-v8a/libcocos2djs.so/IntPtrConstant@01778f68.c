
/* v8::internal::compiler::MachineGraph::IntPtrConstant(long) */

void __thiscall
v8::internal::compiler::MachineGraph::IntPtrConstant(MachineGraph *this,long param_1)

{
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  Graph *this_00;
  Node *local_38;
  
  if (*(char *)(*(long *)(this + 0x10) + 0x10) == '\x04') {
    plVar1 = (long *)NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>>::Find
                               ((NodeCache<int,v8::base::hash<int>,std::__ndk1::equal_to<int>> *)
                                (this + 0x18),*(Zone **)(this + 0x158),(int)param_1);
    if (*plVar1 != 0) {
      return;
    }
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Int32Constant
                       (*(CommonOperatorBuilder **)(this + 8),(int)param_1);
  }
  else {
    plVar1 = (long *)NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
                               ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)
                                (this + 0x38),*(Zone **)(this + 0x158),param_1);
    if (*plVar1 != 0) {
      return;
    }
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Int64Constant(*(CommonOperatorBuilder **)(this + 8),param_1);
  }
  local_38 = (Node *)0x0;
  lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_38,false);
  *plVar1 = lVar3;
  return;
}

