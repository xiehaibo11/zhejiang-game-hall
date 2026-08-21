
/* v8::internal::compiler::BlockAssessments::DropRegisters() */

void __thiscall v8::internal::compiler::BlockAssessments::DropRegisters(BlockAssessments *this)

{
  long *plVar1;
  BlockAssessments *pBVar2;
  BlockAssessments *pBVar3;
  BlockAssessments *pBVar4;
  BlockAssessments *pBVar5;
  long *plVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  
  pBVar2 = *(BlockAssessments **)this;
  if (this + 8 == pBVar2) {
    return;
  }
  pBVar5 = *(BlockAssessments **)(pBVar2 + 8);
  if (*(BlockAssessments **)(pBVar2 + 8) != (BlockAssessments *)0x0) goto LAB_01651770;
  do {
    pBVar5 = pBVar2 + 0x10;
    pBVar3 = pBVar2;
    pBVar4 = *(BlockAssessments **)pBVar5;
    if (*(BlockAssessments **)*(BlockAssessments **)pBVar5 != pBVar2) {
      do {
        lVar7 = *(long *)pBVar5;
        pBVar5 = (BlockAssessments *)(lVar7 + 0x10);
        pBVar4 = *(BlockAssessments **)pBVar5;
      } while (*(long *)*(BlockAssessments **)pBVar5 != lVar7);
    }
    while( true ) {
      pBVar2 = pBVar4;
      if ((*(ulong *)(pBVar3 + 0x20) & 0x1c) == 4) {
        plVar1 = *(long **)(pBVar3 + 8);
        if (*(long **)(pBVar3 + 8) == (long *)0x0) {
          p_Var8 = (__tree_node_base *)(pBVar3 + 0x10);
          plVar6 = *(long **)p_Var8;
          if ((__tree_node_base *)*plVar6 != (__tree_node_base *)pBVar3) {
            do {
              lVar7 = *(long *)p_Var8;
              p_Var8 = (__tree_node_base *)(lVar7 + 0x10);
              plVar6 = *(long **)p_Var8;
            } while (*plVar6 != lVar7);
          }
        }
        else {
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(__tree_node_base **)this == (__tree_node_base *)pBVar3) {
          *(long **)this = plVar6;
        }
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),(__tree_node_base *)pBVar3);
      }
      if (this + 8 == pBVar2) {
        return;
      }
      pBVar5 = *(BlockAssessments **)(pBVar2 + 8);
      if (*(BlockAssessments **)(pBVar2 + 8) == (BlockAssessments *)0x0) break;
LAB_01651770:
      do {
        pBVar4 = pBVar5;
        pBVar5 = *(BlockAssessments **)pBVar4;
        pBVar3 = pBVar2;
      } while (pBVar5 != (BlockAssessments *)0x0);
    }
  } while( true );
}

