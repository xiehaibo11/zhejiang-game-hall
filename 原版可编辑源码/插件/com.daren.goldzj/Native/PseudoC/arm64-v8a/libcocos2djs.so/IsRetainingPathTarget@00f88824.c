
/* v8::internal::Heap::IsRetainingPathTarget(v8::internal::HeapObject,
   v8::internal::RetainingPathOption*) */

undefined8 __thiscall
v8::internal::Heap::IsRetainingPathTarget(Heap *this,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  __tree_node_base *p_Var2;
  int iVar3;
  __tree_node_base *p_Var4;
  ulong uVar5;
  Heap *pHVar6;
  Heap *pHVar7;
  Heap *pHVar8;
  
  uVar1 = *(uint *)(*(long *)(this + -0x78e0) + 7);
  if (1 < (int)uVar1) {
    iVar3 = 0;
    uVar5 = 0;
    do {
      if (*(uint *)(*(long *)(this + -0x78e0) + 0xb + (long)iVar3) == (param_2 | 2)) {
        pHVar7 = *(Heap **)(this + 0xbf8);
        pHVar6 = this + 0xbf8;
        iVar3 = (int)uVar5;
        pHVar8 = pHVar6;
        goto joined_r0x00f88894;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar5 < uVar1 >> 1);
  }
  return 0;
joined_r0x00f88894:
  if (pHVar7 == (Heap *)0x0) {
LAB_00f888d8:
    p_Var4 = *(__tree_node_base **)pHVar6;
joined_r0x00f888dc:
    if (p_Var4 == (__tree_node_base *)0x0) {
      p_Var4 = operator_new(0x28);
      *(int *)(p_Var4 + 0x1c) = iVar3;
      *(undefined4 *)(p_Var4 + 0x20) = 0;
      *(undefined8 *)p_Var4 = 0;
      *(undefined8 *)(p_Var4 + 8) = 0;
      *(Heap **)(p_Var4 + 0x10) = pHVar8;
      *(__tree_node_base **)pHVar6 = p_Var4;
      p_Var2 = p_Var4;
      if (**(long **)(this + 0xbf0) != 0) {
        *(long *)(this + 0xbf0) = **(long **)(this + 0xbf0);
        p_Var2 = *(__tree_node_base **)pHVar6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0xbf8),p_Var2);
      *(long *)(this + 0xc00) = *(long *)(this + 0xc00) + 1;
    }
    *param_3 = *(undefined4 *)(p_Var4 + 0x20);
    return 1;
  }
  while (pHVar8 = pHVar7, iVar3 < *(int *)(pHVar8 + 0x1c)) {
    pHVar6 = pHVar8;
    pHVar7 = *(Heap **)pHVar8;
    if (*(Heap **)pHVar8 == (Heap *)0x0) {
      p_Var4 = *(__tree_node_base **)pHVar8;
      goto joined_r0x00f888dc;
    }
  }
  if (iVar3 <= *(int *)(pHVar8 + 0x1c)) goto LAB_00f888d8;
  pHVar6 = pHVar8 + 8;
  pHVar7 = *(Heap **)pHVar6;
  goto joined_r0x00f88894;
}

