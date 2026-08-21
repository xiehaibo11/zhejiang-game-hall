
/* v8::internal::compiler::JSGraph::CEntryStubConstant(int, v8::internal::SaveFPRegsMode,
   v8::internal::ArgvMode, bool) */

void __thiscall
v8::internal::compiler::JSGraph::CEntryStubConstant
          (JSGraph *this,undefined8 param_2,int param_3,int param_4,ulong param_5)

{
  JSGraph *pJVar1;
  Graph *pGVar2;
  long *plVar3;
  Operator *pOVar4;
  long lVar5;
  undefined8 local_40;
  Node *local_38;
  
  if (param_4 == 0 && param_3 == 0) {
    if ((param_5 & 1) == 0) {
      if ((int)param_2 == 2) {
        pJVar1 = this + 0x260;
        lVar5 = *(long *)pJVar1;
      }
      else if ((int)param_2 == 1) {
        pJVar1 = this + 600;
        lVar5 = *(long *)pJVar1;
      }
      else {
        pJVar1 = this + 0x268;
        lVar5 = *(long *)pJVar1;
      }
      if (lVar5 == 0) {
        local_40 = CodeFactory::CEntry(*(undefined8 *)(this + 0x168),param_2,0,0,0);
        plVar3 = (long *)CommonNodeCache::FindHeapConstant
                                   ((CommonNodeCache *)(this + 0x18),local_40);
        lVar5 = *plVar3;
        if (lVar5 == 0) {
          pGVar2 = *(Graph **)this;
          pOVar4 = (Operator *)
                   CommonOperatorBuilder::HeapConstant
                             (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_40);
          local_38 = (Node *)0x0;
          lVar5 = Graph::NewNode(pGVar2,pOVar4,0,&local_38,false);
          *plVar3 = lVar5;
        }
        *(long *)pJVar1 = lVar5;
      }
    }
    else if (*(long *)(this + 0x270) == 0) {
      local_40 = CodeFactory::CEntry(*(undefined8 *)(this + 0x168),param_2,0,0,1);
      plVar3 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18),local_40);
      lVar5 = *plVar3;
      if (lVar5 == 0) {
        pGVar2 = *(Graph **)this;
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::HeapConstant
                           (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_40);
        local_38 = (Node *)0x0;
        lVar5 = Graph::NewNode(pGVar2,pOVar4,0,&local_38,false);
        *plVar3 = lVar5;
      }
      *(long *)(this + 0x270) = lVar5;
    }
  }
  else {
    local_40 = CodeFactory::CEntry(*(undefined8 *)(this + 0x168));
    plVar3 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18),local_40);
    if (*plVar3 == 0) {
      pGVar2 = *(Graph **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::HeapConstant
                         (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_40);
      local_38 = (Node *)0x0;
      lVar5 = Graph::NewNode(pGVar2,pOVar4,0,&local_38,false);
      *plVar3 = lVar5;
    }
  }
  return;
}

