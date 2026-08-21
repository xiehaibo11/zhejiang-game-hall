
/* v8::internal::compiler::JSGraph::MinusOneConstant() */

void __thiscall v8::internal::compiler::JSGraph::MinusOneConstant(JSGraph *this)

{
  Graph *this_00;
  long *plVar1;
  long lVar2;
  Operator *pOVar3;
  Node *local_18;
  
  if (*(long *)(this + 0x240) == 0) {
    plVar1 = (long *)NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
                               ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)
                                (this + 0xd8),*(Zone **)(this + 0x158),-0x4010000000000000);
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      this_00 = *(Graph **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::NumberConstant(*(CommonOperatorBuilder **)(this + 8),-1.0);
      local_18 = (Node *)0x0;
      lVar2 = Graph::NewNode(this_00,pOVar3,0,&local_18,false);
      *plVar1 = lVar2;
    }
    *(long *)(this + 0x240) = lVar2;
  }
  return;
}

