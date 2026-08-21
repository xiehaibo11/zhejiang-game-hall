
/* ClipperLib::Clipper::UpdateEdgeIntoAEL(ClipperLib::TEdge*&) */

void __thiscall ClipperLib::Clipper::UpdateEdgeIntoAEL(Clipper *this,TEdge **param_1)

{
  long lVar1;
  __tree_node_base *p_Var2;
  clipperException *this_00;
  long lVar3;
  TEdge *pTVar4;
  long lVar5;
  TEdge *pTVar6;
  Clipper *pCVar7;
  Clipper *pCVar8;
  Clipper *pCVar9;
  undefined8 uVar10;
  
  pTVar4 = *param_1;
  lVar5 = *(long *)(pTVar4 + 0x70);
  if (lVar5 == 0) {
    this_00 = (clipperException *)__cxa_allocate_exception(0x20);
    clipperException::clipperException(this_00,"UpdateEdgeIntoAEL: invalid call");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&clipperException::typeinfo,clipperException::~clipperException);
  }
  *(undefined4 *)(lVar5 + 0x5c) = *(undefined4 *)(pTVar4 + 0x5c);
  lVar3 = *(long *)(pTVar4 + 0x78);
  lVar1 = *(long *)(pTVar4 + 0x80);
  pCVar7 = this + 0x88;
  if (lVar1 != 0) {
    pCVar7 = (Clipper *)(lVar1 + 0x78);
  }
  *(long *)pCVar7 = lVar5;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(*param_1 + 0x70);
  }
  pTVar4 = *param_1;
  pTVar6 = *(TEdge **)(pTVar4 + 0x70);
  uVar10 = *(undefined8 *)(pTVar4 + 0x4c);
  *(undefined8 *)(pTVar6 + 0x54) = *(undefined8 *)(pTVar4 + 0x54);
  *(undefined8 *)(pTVar6 + 0x4c) = uVar10;
  *param_1 = pTVar6;
  *(undefined8 *)(pTVar6 + 0x18) = *(undefined8 *)(pTVar6 + 8);
  *(undefined8 *)(pTVar6 + 0x10) = *(undefined8 *)pTVar6;
  *(long *)(*param_1 + 0x80) = lVar1;
  *(long *)(*param_1 + 0x78) = lVar3;
  if (*(long *)(*param_1 + 0x38) != 0) {
    lVar5 = *(long *)(*param_1 + 0x28);
    pCVar7 = this + 0x78;
    pCVar8 = *(Clipper **)pCVar7;
    pCVar9 = pCVar7;
    if (pCVar8 != (Clipper *)0x0) {
      pCVar7 = this + 0x78;
      do {
        while (pCVar9 = pCVar8, *(long *)(pCVar9 + 0x20) < lVar5) {
          pCVar7 = pCVar9;
          pCVar8 = *(Clipper **)pCVar9;
          if (*(Clipper **)pCVar9 == (Clipper *)0x0) {
            lVar3 = *(long *)pCVar9;
            goto joined_r0x010379c0;
          }
        }
        if (*(long *)(pCVar9 + 0x20) <= lVar5) break;
        pCVar7 = pCVar9 + 8;
        pCVar8 = *(Clipper **)pCVar7;
      } while (*(Clipper **)pCVar7 != (Clipper *)0x0);
    }
    lVar3 = *(long *)pCVar7;
joined_r0x010379c0:
    if (lVar3 == 0) {
      p_Var2 = operator_new(0x28);
      *(long *)(p_Var2 + 0x20) = lVar5;
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(Clipper **)(p_Var2 + 0x10) = pCVar9;
      *(__tree_node_base **)pCVar7 = p_Var2;
      if (**(long **)(this + 0x70) != 0) {
        *(long *)(this + 0x70) = **(long **)(this + 0x70);
        p_Var2 = *(__tree_node_base **)pCVar7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x78),p_Var2);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
    }
  }
  return;
}

