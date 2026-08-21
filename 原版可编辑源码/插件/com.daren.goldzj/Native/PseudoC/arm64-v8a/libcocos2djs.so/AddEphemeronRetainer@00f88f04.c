
/* v8::internal::Heap::AddEphemeronRetainer(v8::internal::HeapObject, v8::internal::HeapObject) */

void __thiscall
v8::internal::Heap::AddEphemeronRetainer(Heap *this,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  Heap *pHVar3;
  long *plVar4;
  uint uVar5;
  __tree_node_base *p_Var6;
  Heap *pHVar7;
  Heap *pHVar8;
  int local_44;
  
  pHVar7 = *(Heap **)(this + 0xbe0);
  uVar5 = (uint)param_3;
  pHVar3 = pHVar7;
  if (pHVar7 == (Heap *)0x0) {
    pHVar3 = this + 0xbe0;
    pHVar8 = pHVar3;
  }
  else {
    do {
      if (*(uint *)(pHVar3 + 0x20) <= uVar5) {
        if (uVar5 <= *(uint *)(pHVar3 + 0x20)) {
          return;
        }
        pHVar3 = pHVar3 + 8;
      }
      pHVar3 = *(Heap **)pHVar3;
    } while (pHVar3 != (Heap *)0x0);
    pHVar8 = this + 0xbe0;
    do {
      while (pHVar3 = pHVar7, uVar5 < *(uint *)(pHVar3 + 0x20)) {
        pHVar7 = *(Heap **)pHVar3;
        pHVar8 = pHVar3;
        if (*(Heap **)pHVar3 == (Heap *)0x0) goto LAB_00f88fa4;
      }
      if (uVar5 <= *(uint *)(pHVar3 + 0x20)) break;
      pHVar8 = pHVar3 + 8;
      pHVar7 = *(Heap **)pHVar8;
    } while (*(Heap **)pHVar8 != (Heap *)0x0);
  }
LAB_00f88fa4:
  p_Var6 = *(__tree_node_base **)pHVar8;
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x30);
    *(undefined8 *)(p_Var6 + 0x20) = param_3;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(Heap **)(p_Var6 + 0x10) = pHVar3;
    *(__tree_node_base **)pHVar8 = p_Var6;
    p_Var2 = p_Var6;
    if (**(long **)(this + 0xbd8) != 0) {
      *(long *)(this + 0xbd8) = **(long **)(this + 0xbd8);
      p_Var2 = *(__tree_node_base **)pHVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbe0),p_Var2);
    *(long *)(this + 0xbe8) = *(long *)(this + 0xbe8) + 1;
  }
  *(undefined8 *)(p_Var6 + 0x28) = param_2;
  local_44 = 0;
  uVar1 = IsRetainingPathTarget(this,param_3,&local_44);
  if (((uVar1 & 1) != 0) && (local_44 == 1)) {
    for (plVar4 = *(long **)(this + 0xbb0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (*(uint *)(plVar4 + 4) <= uVar5) {
        if (uVar5 <= *(uint *)(plVar4 + 4)) {
          return;
        }
        plVar4 = plVar4 + 1;
      }
    }
    PrintRetainingPath(this,param_3,1);
  }
  return;
}

