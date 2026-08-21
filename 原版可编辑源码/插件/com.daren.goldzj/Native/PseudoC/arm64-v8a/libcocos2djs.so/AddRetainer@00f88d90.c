
/* v8::internal::Heap::AddRetainer(v8::internal::HeapObject, v8::internal::HeapObject) */

void __thiscall v8::internal::Heap::AddRetainer(Heap *this,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  int iVar3;
  Heap *pHVar4;
  long *plVar5;
  uint uVar6;
  __tree_node_base *p_Var7;
  Heap *pHVar8;
  Heap *pHVar9;
  int local_44;
  
  pHVar8 = *(Heap **)(this + 0xbb0);
  uVar6 = (uint)param_3;
  pHVar4 = pHVar8;
  if (pHVar8 == (Heap *)0x0) {
    pHVar4 = this + 0xbb0;
    pHVar9 = pHVar4;
  }
  else {
    do {
      if (*(uint *)(pHVar4 + 0x20) <= uVar6) {
        if (uVar6 <= *(uint *)(pHVar4 + 0x20)) {
          return;
        }
        pHVar4 = pHVar4 + 8;
      }
      pHVar4 = *(Heap **)pHVar4;
    } while (pHVar4 != (Heap *)0x0);
    pHVar9 = this + 0xbb0;
    do {
      while (pHVar4 = pHVar8, uVar6 < *(uint *)(pHVar4 + 0x20)) {
        pHVar8 = *(Heap **)pHVar4;
        pHVar9 = pHVar4;
        if (*(Heap **)pHVar4 == (Heap *)0x0) goto LAB_00f88e30;
      }
      if (uVar6 <= *(uint *)(pHVar4 + 0x20)) break;
      pHVar9 = pHVar4 + 8;
      pHVar8 = *(Heap **)pHVar9;
    } while (*(Heap **)pHVar9 != (Heap *)0x0);
  }
LAB_00f88e30:
  p_Var7 = *(__tree_node_base **)pHVar9;
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = operator_new(0x30);
    *(undefined8 *)(p_Var7 + 0x20) = param_3;
    *(undefined8 *)(p_Var7 + 0x28) = 0;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(Heap **)(p_Var7 + 0x10) = pHVar4;
    *(__tree_node_base **)pHVar9 = p_Var7;
    p_Var2 = p_Var7;
    if (**(long **)(this + 0xba8) != 0) {
      *(long *)(this + 0xba8) = **(long **)(this + 0xba8);
      p_Var2 = *(__tree_node_base **)pHVar9;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbb0),p_Var2);
    *(long *)(this + 3000) = *(long *)(this + 3000) + 1;
  }
  *(undefined8 *)(p_Var7 + 0x28) = param_2;
  local_44 = 0;
  uVar1 = IsRetainingPathTarget(this,param_3,&local_44);
  if ((uVar1 & 1) != 0) {
    for (plVar5 = *(long **)(this + 0xbe0); iVar3 = local_44, plVar5 != (long *)0x0;
        plVar5 = (long *)*plVar5) {
      if (*(uint *)(plVar5 + 4) <= uVar6) {
        if (uVar6 <= *(uint *)(plVar5 + 4)) {
          if (local_44 != 0) {
            return;
          }
          iVar3 = 0;
          break;
        }
        plVar5 = plVar5 + 1;
      }
    }
    PrintRetainingPath(this,param_3,iVar3);
  }
  return;
}

