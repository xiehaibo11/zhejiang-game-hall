
/* v8::base::RegionAllocator::FreeListRemoveRegion(v8::base::RegionAllocator::Region*) */

void __thiscall
v8::base::RegionAllocator::FreeListRemoveRegion(RegionAllocator *this,Region *param_1)

{
  RegionAllocator *pRVar1;
  long *plVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  RegionAllocator *pRVar5;
  long *plVar6;
  ulong uVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  RegionAllocator *pRVar10;
  ulong uVar11;
  RegionAllocator *pRVar12;
  
  pRVar5 = this + 0x58;
  p_Var4 = *(__tree_node_base **)pRVar5;
  uVar7 = *(ulong *)(param_1 + 8);
  pRVar10 = (RegionAllocator *)p_Var4;
  pRVar12 = pRVar5;
  if (p_Var4 != (__tree_node_base *)0x0) {
    do {
      uVar11 = (*(ulong **)(pRVar10 + 0x20))[1];
      bVar3 = uVar7 <= uVar11;
      if (uVar11 == uVar7) {
        bVar3 = *(ulong *)param_1 <= **(ulong **)(pRVar10 + 0x20);
      }
      lVar9 = 8;
      if (bVar3) {
        lVar9 = 0;
        pRVar12 = pRVar10;
      }
      pRVar1 = pRVar10 + lVar9;
      pRVar10 = *(RegionAllocator **)pRVar1;
    } while (*(RegionAllocator **)pRVar1 != (RegionAllocator *)0x0);
    if (pRVar12 != pRVar5) {
      uVar11 = (*(ulong **)(pRVar12 + 0x20))[1];
      bVar3 = uVar11 <= uVar7;
      if (uVar7 == uVar11) {
        bVar3 = **(ulong **)(pRVar12 + 0x20) <= *(ulong *)param_1;
      }
      if (bVar3) goto LAB_01474e78;
    }
  }
  pRVar12 = pRVar5;
LAB_01474e78:
  *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - uVar7;
  plVar2 = *(long **)(pRVar12 + 8);
  if (*(long **)(pRVar12 + 8) == (long *)0x0) {
    p_Var8 = (__tree_node_base *)(pRVar12 + 0x10);
    plVar6 = *(long **)p_Var8;
    if ((__tree_node_base *)*plVar6 != (__tree_node_base *)pRVar12) {
      do {
        lVar9 = *(long *)p_Var8;
        p_Var8 = (__tree_node_base *)(lVar9 + 0x10);
        plVar6 = *(long **)p_Var8;
      } while (*plVar6 != lVar9);
    }
  }
  else {
    do {
      plVar6 = plVar2;
      plVar2 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  if (*(__tree_node_base **)(this + 0x50) == (__tree_node_base *)pRVar12) {
    *(long **)(this + 0x50) = plVar6;
  }
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (p_Var4,(__tree_node_base *)pRVar12);
  operator_delete(pRVar12);
  return;
}

