
/* v8::internal::Heap::AddRetainingRoot(v8::internal::Root, v8::internal::HeapObject) */

void __thiscall
v8::internal::Heap::AddRetainingRoot(Heap *this,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  Heap *pHVar3;
  uint uVar4;
  __tree_node_base *p_Var5;
  Heap *pHVar6;
  Heap *pHVar7;
  undefined4 local_44;
  
  pHVar6 = *(Heap **)(this + 0xbc8);
  pHVar3 = pHVar6;
  if (pHVar6 == (Heap *)0x0) {
    pHVar3 = this + 0xbc8;
    pHVar7 = pHVar3;
  }
  else {
    do {
      uVar4 = (uint)param_3;
      if (*(uint *)(pHVar3 + 0x20) <= uVar4) {
        if (uVar4 <= *(uint *)(pHVar3 + 0x20)) {
          return;
        }
        pHVar3 = pHVar3 + 8;
      }
      pHVar3 = *(Heap **)pHVar3;
    } while (pHVar3 != (Heap *)0x0);
    pHVar7 = this + 0xbc8;
    do {
      while (pHVar3 = pHVar6, *(uint *)(pHVar3 + 0x20) <= uVar4) {
        if (uVar4 <= *(uint *)(pHVar3 + 0x20)) goto LAB_00f89118;
        pHVar7 = pHVar3 + 8;
        pHVar6 = *(Heap **)pHVar7;
        if (*(Heap **)pHVar7 == (Heap *)0x0) goto LAB_00f89118;
      }
      pHVar6 = *(Heap **)pHVar3;
      pHVar7 = pHVar3;
    } while (*(Heap **)pHVar3 != (Heap *)0x0);
  }
LAB_00f89118:
  p_Var5 = *(__tree_node_base **)pHVar7;
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = operator_new(0x30);
    *(undefined8 *)(p_Var5 + 0x20) = param_3;
    *(undefined4 *)(p_Var5 + 0x28) = 0;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(Heap **)(p_Var5 + 0x10) = pHVar3;
    *(__tree_node_base **)pHVar7 = p_Var5;
    p_Var2 = p_Var5;
    if (**(long **)(this + 0xbc0) != 0) {
      *(long *)(this + 0xbc0) = **(long **)(this + 0xbc0);
      p_Var2 = *(__tree_node_base **)pHVar7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbc8),p_Var2);
    *(long *)(this + 0xbd0) = *(long *)(this + 0xbd0) + 1;
  }
  *(undefined4 *)(p_Var5 + 0x28) = param_2;
  local_44 = 0;
  uVar1 = IsRetainingPathTarget(this,param_3,&local_44);
  if ((uVar1 & 1) != 0) {
    PrintRetainingPath(this,param_3,local_44);
  }
  return;
}

