
/* v8::internal::compiler::StoreStoreElimination::Run(v8::internal::compiler::JSGraph*,
   v8::internal::TickCounter*, v8::internal::Zone*) */

void v8::internal::compiler::StoreStoreElimination::Run
               (JSGraph *param_1,TickCounter *param_2,Zone *param_3)

{
  uint uVar1;
  bool bVar2;
  Node *pNVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  __tree_node *p_Var7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  Node *this;
  __tree_node *p_Var12;
  JSGraph *local_120;
  TickCounter *local_118;
  Zone *local_110;
  long *local_108;
  undefined8 *puStack_100;
  undefined8 *local_f8;
  long lStack_f0;
  Zone *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  Zone *local_c8;
  long *local_c0;
  long local_b8 [4];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  Zone *pZStack_80;
  __tree_node *local_78;
  __tree_node *local_70;
  Zone *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  Zone *local_50;
  bool local_44 [4];
  
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = (long *)0x0;
  puStack_100 = (undefined8 *)0x0;
  local_108 = (long *)0x0;
  lStack_f0 = 0;
  local_f8 = (undefined8 *)0x0;
  local_44[0] = false;
  local_120 = param_1;
  local_118 = param_2;
  local_110 = param_3;
  local_e8 = param_3;
  local_c8 = param_3;
  local_50 = param_3;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)local_b8,
             (ulong)*(uint *)(*(long *)param_1 + 0x1c),local_44,(ZoneAllocator *)&local_50);
  uVar1 = *(uint *)(*(long *)param_1 + 0x1c);
  uVar11 = (ulong)uVar1;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  pZStack_80 = param_3;
  if (uVar1 != 0) {
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = *(undefined8 **)(param_3 + 0x10);
    uVar5 = uVar11 * 8;
    if (uVar5 < (ulong)(*(long *)(param_3 + 0x18) - (long)puVar4) ||
        uVar5 - (*(long *)(param_3 + 0x18) - (long)puVar4) == 0) {
      *(undefined8 **)(param_3 + 0x10) = puVar4 + uVar11;
    }
    else {
      puVar4 = (undefined8 *)Zone::NewExpand(param_3,uVar5);
    }
    local_88 = puVar4 + uVar11;
    local_90 = puVar4;
    do {
      *local_90 = 0;
      uVar11 = uVar11 - 1;
      local_90 = local_90 + 1;
      local_98 = puVar4;
    } while (uVar11 != 0);
  }
  local_60 = 0;
  local_70 = (__tree_node *)0x0;
  local_58 = *(undefined8 **)(param_3 + 0x10);
  local_78 = (__tree_node *)&local_70;
  local_68 = param_3;
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)local_58) < 0x18) {
    local_58 = (undefined8 *)Zone::NewExpand(param_3,0x18);
  }
  else {
    *(undefined8 **)(param_3 + 0x10) = local_58 + 3;
  }
  *local_58 = 0;
  *(undefined1 *)(local_58 + 1) = 0;
  local_58[2] = param_3;
  FUN_012f9344(&local_120,*(undefined8 *)(*(long *)local_120 + 0x10));
  while (local_d0 != 0) {
    TickCounter::DoTick(local_118);
    uVar11 = local_d0 + -1 + local_d8;
    lVar9 = 0;
    if ((long)local_f8 - (long)puStack_100 != 0) {
      lVar9 = ((long)local_f8 - (long)puStack_100) * 0x40 + -1;
    }
    lVar6 = *(long *)(*(long *)((long)puStack_100 + (uVar11 >> 6 & 0x3fffffffffffff8)) +
                     (uVar11 & 0x1ff) * 8);
    if (0x3ff < (lVar9 - (local_d0 + local_d8)) + 1U) {
      plVar8 = (long *)local_f8[-1];
      if ((local_c0 == (long *)0x0) || ((ulong)local_c0[1] < 0x201)) {
        plVar8[1] = 0x200;
        *plVar8 = (long)local_c0;
        local_c0 = plVar8;
      }
      local_f8 = local_f8 + -1;
    }
    uVar11 = (ulong)*(uint *)(lVar6 + 0x14);
    uVar5 = (uVar11 & 0xffffc0) >> 3;
    *(ulong *)(local_b8[0] + uVar5) =
         *(ulong *)(local_b8[0] + uVar5) & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
    local_d0 = local_d0 + -1;
    FUN_012f9344(&local_120);
  }
  local_d0 = 0;
  p_Var12 = local_78;
  while (p_Var12 != (__tree_node *)&local_70) {
    this = *(Node **)(p_Var12 + 0x20);
    if (FLAG_trace_store_elimination != '\0') {
      PrintF("StoreStoreElimination::Run: Eliminating node #%d:%s\n",
             (ulong)(*(uint *)(this + 0x14) & 0xffffff),*(undefined8 *)(*(long *)this + 8));
    }
    pNVar3 = (Node *)NodeProperties::GetEffectInput(this,0);
    NodeProperties::ReplaceUses(this,(Node *)0x0,pNVar3,(Node *)0x0,(Node *)0x0);
    Node::Kill(this);
    p_Var7 = *(__tree_node **)(p_Var12 + 8);
    if (*(__tree_node **)(p_Var12 + 8) == (__tree_node *)0x0) {
      p_Var7 = p_Var12 + 0x10;
      bVar2 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var7 != p_Var12;
      p_Var12 = *(__tree_node **)p_Var7;
      if (bVar2) {
        do {
          lVar9 = *(long *)p_Var7;
          p_Var7 = (__tree_node *)(lVar9 + 0x10);
          p_Var12 = *(__tree_node **)p_Var7;
        } while (*(long *)p_Var12 != lVar9);
      }
    }
    else {
      do {
        p_Var12 = p_Var7;
        p_Var7 = *(__tree_node **)p_Var12;
      } while (*(__tree_node **)p_Var12 != (__tree_node *)0x0);
    }
  }
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)&local_78,local_70);
  if (local_98 != (undefined8 *)0x0) {
    local_90 = local_98;
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_108);
  if (puStack_100 == local_f8) {
LAB_012f92cc:
    if (((local_108 != (long *)0x0) && (0xf < (ulong)(lStack_f0 - (long)local_108))) &&
       ((uVar11 = lStack_f0 - (long)local_108 >> 3, local_e0 == 0 ||
        (*(ulong *)(local_e0 + 8) <= uVar11)))) {
      local_108[1] = uVar11;
      *local_108 = local_e0;
    }
    return;
  }
  plVar10 = (long *)*puStack_100;
  plVar8 = local_c0;
  if (local_c0 != (long *)0x0) goto LAB_012f929c;
  do {
    plVar8 = plVar10;
    plVar8[1] = 0x200;
    *plVar8 = (long)local_c0;
    local_c0 = plVar8;
    do {
      puStack_100 = puStack_100 + 1;
      if (local_f8 == puStack_100) goto LAB_012f92cc;
      plVar10 = (long *)*puStack_100;
      if (plVar8 == (long *)0x0) break;
LAB_012f929c:
    } while (0x200 < (ulong)plVar8[1]);
  } while( true );
}

