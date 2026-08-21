
/* v8::internal::compiler::ZoneStats::StatsScope::ZoneReturned(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::ZoneStats::StatsScope::ZoneReturned(StatsScope *this,Zone *param_1)

{
  StatsScope *pSVar1;
  ulong *puVar2;
  __tree_node_base *p_Var3;
  ulong *puVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  StatsScope *pSVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  StatsScope *pSVar11;
  StatsScope *pSVar12;
  __tree_node_base *p_Var13;
  
  puVar4 = (ulong *)**(long **)this;
  puVar2 = (ulong *)(*(long **)this)[1];
  pSVar7 = this + 0x10;
  p_Var3 = *(__tree_node_base **)pSVar7;
  if (puVar4 == puVar2) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      plVar9 = (long *)*puVar4;
      lVar10 = 0;
      if (plVar9[5] != 0) {
        lVar10 = (plVar9[2] - plVar9[5]) + -0x18;
      }
      uVar8 = lVar10 + uVar8 + *plVar9;
      pSVar11 = pSVar7;
      pSVar12 = (StatsScope *)p_Var3;
      if (p_Var3 != (__tree_node_base *)0x0) {
        do {
          if (*(long **)(pSVar12 + 0x20) >= plVar9) {
            pSVar11 = pSVar12;
          }
          pSVar1 = pSVar12 + (ulong)(*(long **)(pSVar12 + 0x20) < plVar9) * 8;
          pSVar12 = *(StatsScope **)pSVar1;
        } while (*(StatsScope **)pSVar1 != (StatsScope *)0x0);
        if ((pSVar11 != pSVar7) && (*(long **)(pSVar11 + 0x20) <= plVar9)) {
          uVar8 = uVar8 - *(long *)(pSVar11 + 0x28);
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar2);
  }
  if (uVar8 <= *(ulong *)(this + 0x28)) {
    uVar8 = *(ulong *)(this + 0x28);
  }
  *(ulong *)(this + 0x28) = uVar8;
  if (p_Var3 != (__tree_node_base *)0x0) {
    p_Var6 = p_Var3;
    p_Var13 = (__tree_node_base *)(this + 0x10);
    do {
      if (*(Zone **)(p_Var6 + 0x20) >= param_1) {
        p_Var13 = p_Var6;
      }
      p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(*(Zone **)(p_Var6 + 0x20) < param_1) * 8);
    } while (p_Var6 != (__tree_node_base *)0x0);
    if ((p_Var13 != (__tree_node_base *)(this + 0x10)) && (*(Zone **)(p_Var13 + 0x20) <= param_1)) {
      plVar9 = *(long **)(p_Var13 + 8);
      if (*(long **)(p_Var13 + 8) == (long *)0x0) {
        p_Var6 = p_Var13 + 0x10;
        plVar5 = *(long **)p_Var6;
        if ((__tree_node_base *)*plVar5 != p_Var13) {
          do {
            lVar10 = *(long *)p_Var6;
            p_Var6 = (__tree_node_base *)(lVar10 + 0x10);
            plVar5 = *(long **)p_Var6;
          } while (*plVar5 != lVar10);
        }
      }
      else {
        do {
          plVar5 = plVar9;
          plVar9 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if (*(__tree_node_base **)(this + 8) == p_Var13) {
        *(long **)(this + 8) = plVar5;
      }
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var3,p_Var13);
      operator_delete(p_Var13);
      return;
    }
  }
  return;
}

