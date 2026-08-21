
/* v8::internal::compiler::JSGraph::Constant(v8::internal::compiler::ObjectRef const&) */

void __thiscall v8::internal::compiler::JSGraph::Constant(JSGraph *this,ObjectRef *param_1)

{
  Graph *pGVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Node *pNVar5;
  long *plVar6;
  Operator *pOVar7;
  long lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  Node *local_18;
  
  uVar4 = ObjectRef::IsSmi(param_1);
  if ((uVar4 & 1) == 0) {
    local_48 = ObjectRef::AsHeapObject(param_1);
    uVar3 = HeapObjectRef::GetHeapObjectType((HeapObjectRef *)local_48);
    uVar4 = ObjectRef::IsHeapNumber(param_1);
    if ((uVar4 & 1) == 0) {
      switch(uVar3 >> 0x10 & 0xff) {
      case 1:
        pNVar5 = (Node *)ObjectRef::object(param_1);
        local_18 = (Node *)(*(long *)(this + 0x168) + 0xb8);
        if (pNVar5 == local_18) {
          if (*(long *)(this + 0x210) == 0) {
            plVar6 = (long *)CommonNodeCache::FindHeapConstant
                                       ((CommonNodeCache *)(this + 0x18),pNVar5);
            lVar8 = *plVar6;
            if (lVar8 == 0) {
              pGVar1 = *(Graph **)this;
              pOVar7 = (Operator *)
                       CommonOperatorBuilder::HeapConstant
                                 (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_18);
              local_48._0_8_ = (Node *)0x0;
              lVar8 = Graph::NewNode(pGVar1,pOVar7,0,(Node **)local_48,false);
              *plVar6 = lVar8;
            }
            *(long *)(this + 0x210) = lVar8;
          }
        }
        else if (*(long *)(this + 0x218) == 0) {
          local_18 = (Node *)(*(long *)(this + 0x168) + 0xc0);
          plVar6 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18));
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            pGVar1 = *(Graph **)this;
            pOVar7 = (Operator *)
                     CommonOperatorBuilder::HeapConstant
                               (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_18);
            local_48._0_8_ = (Node *)0x0;
            lVar8 = Graph::NewNode(pGVar1,pOVar7,0,(Node **)local_48,false);
            *plVar6 = lVar8;
          }
          *(long *)(this + 0x218) = lVar8;
        }
        break;
      case 2:
        if (*(long *)(this + 0x200) == 0) {
          local_18 = (Node *)(*(long *)(this + 0x168) + 0xa0);
          plVar6 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18));
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            pGVar1 = *(Graph **)this;
            pOVar7 = (Operator *)
                     CommonOperatorBuilder::HeapConstant
                               (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_18);
            local_48._0_8_ = (Node *)0x0;
            lVar8 = Graph::NewNode(pGVar1,pOVar7,0,(Node **)local_48,false);
            *plVar6 = lVar8;
          }
          *(long *)(this + 0x200) = lVar8;
        }
        break;
      case 3:
        if (*(long *)(this + 0x220) == 0) {
          local_18 = (Node *)(*(long *)(this + 0x168) + 0xb0);
          plVar6 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18));
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            pGVar1 = *(Graph **)this;
            pOVar7 = (Operator *)
                     CommonOperatorBuilder::HeapConstant
                               (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_18);
            local_48._0_8_ = (Node *)0x0;
            lVar8 = Graph::NewNode(pGVar1,pOVar7,0,(Node **)local_48,false);
            *plVar6 = lVar8;
          }
          *(long *)(this + 0x220) = lVar8;
        }
        break;
      case 4:
        if (*(long *)(this + 0x208) == 0) {
          local_18 = (Node *)(*(long *)(this + 0x168) + 0xa8);
          plVar6 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18));
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            pGVar1 = *(Graph **)this;
            pOVar7 = (Operator *)
                     CommonOperatorBuilder::HeapConstant
                               (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_18);
            local_48._0_8_ = (Node *)0x0;
            lVar8 = Graph::NewNode(pGVar1,pOVar7,0,(Node **)local_48,false);
            *plVar6 = lVar8;
          }
          *(long *)(this + 0x208) = lVar8;
        }
        break;
      default:
        auVar10 = ObjectRef::AsHeapObject(param_1);
        local_48 = auVar10;
        local_38 = HeapObjectRef::object((HeapObjectRef *)local_48);
        plVar6 = (long *)CommonNodeCache::FindHeapConstant
                                   ((CommonNodeCache *)(this + 0x18),local_38);
        if (*plVar6 == 0) {
          pGVar1 = *(Graph **)this;
          pOVar7 = (Operator *)
                   CommonOperatorBuilder::HeapConstant
                             (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_38);
          local_18 = (Node *)0x0;
          lVar8 = Graph::NewNode(pGVar1,pOVar7,0,&local_18,false);
          *plVar6 = lVar8;
        }
      }
    }
    else {
      auVar10 = ObjectRef::AsHeapNumber(param_1);
      local_48 = auVar10;
      dVar9 = (double)HeapNumberRef::value((HeapNumberRef *)local_48);
      Constant(this,dVar9);
    }
    return;
  }
  iVar2 = ObjectRef::AsSmi(param_1);
  Constant(this,(double)iVar2);
  return;
}

