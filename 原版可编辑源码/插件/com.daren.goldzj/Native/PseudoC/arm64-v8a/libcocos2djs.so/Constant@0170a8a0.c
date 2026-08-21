
/* v8::internal::compiler::JSGraph::Constant(double) */

void __thiscall v8::internal::compiler::JSGraph::Constant(JSGraph *this,double param_1)

{
  Graph *pGVar1;
  long *plVar2;
  long lVar3;
  Operator *pOVar4;
  Node *local_38;
  
  if (param_1 == 1.0) {
    if (*(long *)(this + 0x230) == 0) {
      plVar2 = (long *)NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
                                 ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>
                                   *)(this + 0xd8),*(Zone **)(this + 0x158),0x3ff0000000000000);
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        pGVar1 = *(Graph **)this;
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::NumberConstant(*(CommonOperatorBuilder **)(this + 8),1.0);
        local_38 = (Node *)0x0;
        lVar3 = Graph::NewNode(pGVar1,pOVar4,0,&local_38,false);
        *plVar2 = lVar3;
      }
      *(long *)(this + 0x230) = lVar3;
    }
  }
  else if (param_1 == 0.0) {
    if (*(long *)(this + 0x228) == 0) {
      plVar2 = (long *)NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
                                 ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>
                                   *)(this + 0xd8),*(Zone **)(this + 0x158),0);
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        pGVar1 = *(Graph **)this;
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::NumberConstant(*(CommonOperatorBuilder **)(this + 8),0.0);
        local_38 = (Node *)0x0;
        lVar3 = Graph::NewNode(pGVar1,pOVar4,0,&local_38,false);
        *plVar2 = lVar3;
      }
      *(long *)(this + 0x228) = lVar3;
    }
  }
  else {
    plVar2 = (long *)NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
                               ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)
                                (this + 0xd8),*(Zone **)(this + 0x158),(long)param_1);
    if (*plVar2 == 0) {
      pGVar1 = *(Graph **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::NumberConstant(*(CommonOperatorBuilder **)(this + 8),param_1);
      local_38 = (Node *)0x0;
      lVar3 = Graph::NewNode(pGVar1,pOVar4,0,&local_38,false);
      *plVar2 = lVar3;
    }
  }
  return;
}

