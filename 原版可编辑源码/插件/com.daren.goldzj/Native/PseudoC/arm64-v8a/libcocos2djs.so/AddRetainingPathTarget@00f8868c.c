
/* v8::internal::Heap::AddRetainingPathTarget(v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::RetainingPathOption) */

void __thiscall
v8::internal::Heap::AddRetainingPathTarget(Heap *this,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  Heap *pHVar6;
  ulong uVar7;
  Heap *pHVar8;
  Heap *pHVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (FLAG_track_retaining_path == '\0') {
    PrintF("Retaining path tracking requires --track-retaining-path\n");
    return;
  }
  uVar7 = *(ulong *)(this + -0x78e0);
  if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this + 0xd50);
    if (puVar2 == *(ulong **)(this + 0xd58)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)(this + -0x8850));
    }
    *(ulong **)(this + 0xd50) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0xd68),uVar7);
    uVar7 = *puVar2;
  }
  local_50 = 0;
  iVar1 = *(int *)(uVar7 + 7) >> 1;
  uStack_48 = param_2;
  puVar3 = (undefined8 *)WeakArrayList::AddToEnd((Isolate *)(this + -0x8850),puVar2,&local_50);
  *(undefined8 *)(this + -0x78e0) = *puVar3;
  pHVar6 = this + 0xbf8;
  pHVar8 = *(Heap **)(this + 0xbf8);
  pHVar9 = pHVar6;
  while (pHVar8 != (Heap *)0x0) {
    while (pHVar9 = pHVar8, iVar1 < *(int *)(pHVar9 + 0x1c)) {
      pHVar6 = pHVar9;
      pHVar8 = *(Heap **)pHVar9;
      if (*(Heap **)pHVar9 == (Heap *)0x0) {
        p_Var5 = *(__tree_node_base **)pHVar9;
        goto joined_r0x00f887a8;
      }
    }
    if (iVar1 <= *(int *)(pHVar9 + 0x1c)) break;
    pHVar6 = pHVar9 + 8;
    pHVar8 = *(Heap **)pHVar6;
  }
  p_Var5 = *(__tree_node_base **)pHVar6;
joined_r0x00f887a8:
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = operator_new(0x28);
    *(int *)(p_Var5 + 0x1c) = iVar1;
    *(undefined4 *)(p_Var5 + 0x20) = 0;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(Heap **)(p_Var5 + 0x10) = pHVar9;
    *(__tree_node_base **)pHVar6 = p_Var5;
    p_Var4 = p_Var5;
    if (**(long **)(this + 0xbf0) != 0) {
      *(long *)(this + 0xbf0) = **(long **)(this + 0xbf0);
      p_Var4 = *(__tree_node_base **)pHVar6;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbf8),p_Var4);
    *(long *)(this + 0xc00) = *(long *)(this + 0xc00) + 1;
  }
  *(undefined4 *)(p_Var5 + 0x20) = param_3;
  return;
}

