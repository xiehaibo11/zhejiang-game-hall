
/* v8::internal::Heap::PrintRetainingPath(v8::internal::HeapObject,
   v8::internal::RetainingPathOption) */

void __thiscall v8::internal::Heap::PrintRetainingPath(Heap *this,undefined8 param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  undefined4 uVar6;
  Heap *pHVar7;
  uint uVar8;
  __tree_node_base *p_Var9;
  ulong uVar10;
  Heap *pHVar11;
  Heap *pHVar12;
  undefined8 *puVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  
  PrintF("\n\n\n");
  PrintF("#################################################\n");
  PrintF("Retaining path for %p:\n",param_2);
  uStack_80 = 0;
  local_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
LAB_00f889cc:
  uVar8 = (uint)param_2;
  local_88 = param_2;
  if (local_70 < puStack_68) {
    local_70[1] = uStack_80;
    *local_70 = param_2;
    local_70 = local_70 + 2;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::HeapObject,bool>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::HeapObject,bool>>>
    ::__push_back_slow_path<std::__ndk1::pair<v8::internal::HeapObject,bool>>
              ((vector<std::__ndk1::pair<v8::internal::HeapObject,bool>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::HeapObject,bool>>>
                *)&local_78,(pair *)&local_88);
  }
  if (param_3 == 1) {
    for (pHVar7 = *(Heap **)(this + 0xbe0); pHVar7 != (Heap *)0x0; pHVar7 = *(Heap **)pHVar7) {
      if (*(uint *)(pHVar7 + 0x20) <= uVar8) {
        pHVar11 = *(Heap **)(this + 0xbe0);
        pHVar12 = this + 0xbe0;
        if (uVar8 <= *(uint *)(pHVar7 + 0x20)) goto LAB_00f88b04;
        pHVar7 = pHVar7 + 8;
      }
    }
  }
  pHVar11 = *(Heap **)(this + 0xbb0);
  pHVar7 = pHVar11;
  if (pHVar11 != (Heap *)0x0) {
    do {
      if (*(uint *)(pHVar7 + 0x20) <= uVar8) {
        pHVar12 = this + 0xbb0;
        if (uVar8 <= *(uint *)(pHVar7 + 0x20)) goto LAB_00f88a88;
        pHVar7 = pHVar7 + 8;
      }
      pHVar7 = *(Heap **)pHVar7;
      if (pHVar7 == (Heap *)0x0) break;
    } while( true );
  }
  pHVar7 = *(Heap **)(this + 0xbc8);
  do {
    if (pHVar7 == (Heap *)0x0) {
      uVar6 = 0x16;
      goto LAB_00f88c74;
    }
    if (*(uint *)(pHVar7 + 0x20) <= uVar8) {
      if (uVar8 <= *(uint *)(pHVar7 + 0x20)) {
        pHVar7 = this + 0xbc8;
        pHVar11 = *(Heap **)(this + 0xbc8);
        goto LAB_00f88bf0;
      }
      pHVar7 = pHVar7 + 8;
    }
    pHVar7 = *(Heap **)pHVar7;
  } while( true );
LAB_00f88b04:
  do {
    pHVar7 = pHVar11;
    if (uVar8 < *(uint *)(pHVar7 + 0x20)) {
      pHVar11 = *(Heap **)pHVar7;
      pHVar12 = pHVar7;
    }
    else {
      if (uVar8 <= *(uint *)(pHVar7 + 0x20)) break;
      pHVar12 = pHVar7 + 8;
      pHVar11 = *(Heap **)pHVar12;
    }
  } while (pHVar11 != (Heap *)0x0);
  p_Var9 = *(__tree_node_base **)pHVar12;
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(undefined8 *)(p_Var9 + 0x20) = param_2;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(Heap **)(p_Var9 + 0x10) = pHVar7;
    *(__tree_node_base **)pHVar12 = p_Var9;
    p_Var5 = p_Var9;
    if (**(long **)(this + 0xbd8) != 0) {
      *(long *)(this + 0xbd8) = **(long **)(this + 0xbd8);
      p_Var5 = *(__tree_node_base **)pHVar12;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbe0),p_Var5);
    *(long *)(this + 0xbe8) = *(long *)(this + 0xbe8) + 1;
  }
  uStack_80 = 1;
  goto LAB_00f88b9c;
LAB_00f88a88:
  do {
    pHVar7 = pHVar11;
    if (uVar8 < *(uint *)(pHVar7 + 0x20)) {
      pHVar11 = *(Heap **)pHVar7;
      pHVar12 = pHVar7;
    }
    else {
      if (uVar8 <= *(uint *)(pHVar7 + 0x20)) break;
      pHVar12 = pHVar7 + 8;
      pHVar11 = *(Heap **)pHVar12;
    }
  } while (pHVar11 != (Heap *)0x0);
  p_Var9 = *(__tree_node_base **)pHVar12;
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(undefined8 *)(p_Var9 + 0x20) = param_2;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(Heap **)(p_Var9 + 0x10) = pHVar7;
    *(__tree_node_base **)pHVar12 = p_Var9;
    p_Var5 = p_Var9;
    if (**(long **)(this + 0xba8) != 0) {
      *(long *)(this + 0xba8) = **(long **)(this + 0xba8);
      p_Var5 = *(__tree_node_base **)pHVar12;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbb0),p_Var5);
    uStack_80 = 0;
    *(long *)(this + 3000) = *(long *)(this + 3000) + 1;
  }
  else {
    uStack_80 = 0;
  }
LAB_00f88b9c:
  param_2 = *(undefined8 *)(p_Var9 + 0x28);
  goto LAB_00f889cc;
LAB_00f88bf0:
  do {
    pHVar12 = pHVar11;
    if (*(uint *)(pHVar12 + 0x20) <= uVar8) {
      if (*(uint *)(pHVar12 + 0x20) < uVar8) {
        pHVar7 = pHVar12 + 8;
        pHVar11 = *(Heap **)pHVar7;
        goto joined_r0x00f88be8;
      }
      break;
    }
    pHVar11 = *(Heap **)pHVar12;
    pHVar7 = pHVar12;
joined_r0x00f88be8:
  } while (pHVar11 != (Heap *)0x0);
  p_Var9 = *(__tree_node_base **)pHVar7;
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x30);
    *(undefined8 *)(p_Var9 + 0x20) = param_2;
    *(undefined4 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(Heap **)(p_Var9 + 0x10) = pHVar12;
    *(__tree_node_base **)pHVar7 = p_Var9;
    p_Var5 = p_Var9;
    if (**(long **)(this + 0xbc0) != 0) {
      *(long *)(this + 0xbc0) = **(long **)(this + 0xbc0);
      p_Var5 = *(__tree_node_base **)pHVar7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xbc8),p_Var5);
    *(long *)(this + 0xbd0) = *(long *)(this + 0xbd0) + 1;
  }
  uVar6 = *(undefined4 *)(p_Var9 + 0x28);
LAB_00f88c74:
  puVar3 = local_70;
  if (local_78 != local_70) {
    uVar10 = (ulong)((long)local_70 - (long)local_78) >> 4;
    puVar13 = local_78;
    do {
      local_88 = *puVar13;
      bVar2 = *(byte *)(puVar13 + 1);
      PrintF("\n");
      PrintF("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
      pcVar1 = "";
      if ((bVar2 & 1) != 0) {
        pcVar1 = " (ephemeron)";
      }
      PrintF("Distance from root %d%s: ",uVar10 & 0xffffffff,pcVar1);
      Object::ShortPrint((Object *)&local_88,(__sFILE *)waitpid);
      PrintF("\n");
      Object::Print((Object *)&local_88);
      PrintF("\n");
      puVar13 = puVar13 + 2;
      uVar10 = (ulong)((int)uVar10 - 1);
    } while (puVar13 != puVar3);
  }
  PrintF("\n");
  PrintF("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
  uVar4 = RootVisitor::RootName(uVar6);
  PrintF("Root: %s\n",uVar4);
  PrintF("-------------------------------------------------\n");
  if (local_78 != (undefined8 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return;
}

