
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::CsaLoadElimination::ComputeLoopState(v8::internal::compiler::Node*,
   v8::internal::compiler::CsaLoadElimination::AbstractState const*) const */

CsaLoadElimination * __thiscall
v8::internal::compiler::CsaLoadElimination::ComputeLoopState
          (CsaLoadElimination *this,Node *param_1,AbstractState *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  Node *pNVar10;
  int iVar11;
  __tree_node_base *p_Var12;
  long lVar13;
  __tree_node_base *local_c0;
  __tree_node_base *local_b8;
  Zone *local_b0;
  long local_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  long local_88;
  Zone *local_80;
  long local_78;
  ulong local_70;
  long local_68;
  Zone *local_60;
  long *local_58;
  
  lVar2 = NodeProperties::GetControlInput(param_1,0);
  local_b0 = *(Zone **)(this + 0x58);
  local_70 = 0;
  local_68 = 0;
  plStack_98 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_88 = 0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_58 = (long *)0x0;
  local_a8 = 0;
  local_b8 = (__tree_node_base *)0x0;
  p_Var4 = *(__tree_node_base **)(local_b0 + 0x10);
  local_c0 = (__tree_node_base *)&local_b8;
  local_80 = local_b0;
  local_60 = local_b0;
  if ((ulong)(*(long *)(local_b0 + 0x18) - (long)p_Var4) < 0x28) {
    p_Var4 = (__tree_node_base *)Zone::NewExpand(local_b0,0x28);
  }
  else {
    *(__tree_node_base **)(local_b0 + 0x10) = p_Var4 + 0x28;
  }
  *(Node **)(p_Var4 + 0x20) = param_1;
  *(undefined8 *)p_Var4 = 0;
  *(undefined8 *)(p_Var4 + 8) = 0;
  *(__tree_node_base **)(p_Var4 + 0x10) = (__tree_node_base *)&local_b8;
  if (*(__tree_node_base **)local_c0 != (__tree_node_base *)0x0) {
    local_c0 = *(__tree_node_base **)local_c0;
  }
  local_b8 = p_Var4;
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(p_Var4,p_Var4);
  local_a8 = local_a8 + 1;
  lVar13 = 1;
  while( true ) {
    if ((~*(uint *)(lVar2 + 0x14) & 0xf000000) == 0) {
      uVar1 = *(uint *)(*(long *)(lVar2 + 0x20) + 8);
    }
    else {
      uVar1 = *(uint *)(lVar2 + 0x14) >> 0x18 & 0xf;
    }
    uVar7 = local_70;
    if ((int)uVar1 <= lVar13) break;
    pNVar10 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    uVar3 = *(undefined8 *)(pNVar10 + lVar13 * 8);
    uVar7 = 0;
    if ((long)local_90 - (long)plStack_98 != 0) {
      uVar7 = ((long)local_90 - (long)plStack_98) * 0x40 - 1;
    }
    uVar6 = local_68 + local_70;
    if (uVar7 == uVar6) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)&local_a0);
      uVar6 = local_70 + local_68;
    }
    lVar13 = lVar13 + 1;
    *(undefined8 *)
     (*(long *)((long)plStack_98 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) = uVar3;
    local_68 = local_68 + 1;
  }
  do {
    do {
      local_70 = uVar7;
      if (local_68 == 0) {
LAB_0169c898:
        std::__ndk1::
        __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                   *)&local_c0,(__tree_node *)local_b8);
        std::__ndk1::
        __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
        ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                 *)&local_a0);
        if (plStack_98 == local_90) {
LAB_0169c920:
          if (((local_a0 != (long *)0x0) && (0xf < (ulong)(local_88 - (long)local_a0))) &&
             ((uVar7 = local_88 - (long)local_a0 >> 3, local_78 == 0 ||
              (*(ulong *)(local_78 + 8) <= uVar7)))) {
            local_a0[1] = uVar7;
            *local_a0 = local_78;
          }
          return (CsaLoadElimination *)param_2;
        }
        plVar9 = (long *)*plStack_98;
        plVar8 = local_58;
        if (local_58 != (long *)0x0) goto LAB_0169c8f0;
        do {
          plVar8 = plVar9;
          plVar8[1] = 0x200;
          *plVar8 = (long)local_58;
          local_58 = plVar8;
          do {
            plStack_98 = plStack_98 + 1;
            if (local_90 == plStack_98) goto LAB_0169c920;
            plVar9 = (long *)*plStack_98;
            if (plVar8 == (long *)0x0) break;
LAB_0169c8f0:
          } while (0x200 < (ulong)plVar8[1]);
        } while( true );
      }
      pNVar10 = *(Node **)(*(long *)((long)plStack_98 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                          (uVar7 & 0x1ff) * 8);
      local_70 = uVar7 + 1;
      local_68 = local_68 + -1;
      p_Var4 = (__tree_node_base *)&local_b8;
      p_Var12 = (__tree_node_base *)&local_b8;
      p_Var5 = local_b8;
      if (0x3ff < uVar7 + 1) {
        plVar8 = (long *)*plStack_98;
        if ((local_58 == (long *)0x0) || (*(ulong *)((long)local_58 + 8) < 0x201)) {
          plVar8[1] = 0x200;
          *plVar8 = (long)local_58;
          local_58 = plVar8;
        }
        local_70 = uVar7 - 0x1ff;
        plStack_98 = (long *)((long)plStack_98 + 8);
      }
      while (p_Var5 != (__tree_node_base *)0x0) {
        while (p_Var12 = p_Var5, pNVar10 < *(Node **)(p_Var12 + 0x20)) {
          p_Var4 = p_Var12;
          p_Var5 = *(__tree_node_base **)p_Var12;
          if (*(__tree_node_base **)p_Var12 == (__tree_node_base *)0x0) {
            lVar2 = *(long *)p_Var12;
            goto joined_r0x0169c87c;
          }
        }
        if (pNVar10 <= *(Node **)(p_Var12 + 0x20)) break;
        p_Var4 = p_Var12 + 8;
        p_Var5 = *(__tree_node_base **)(p_Var12 + 8);
      }
      lVar2 = *(long *)p_Var4;
joined_r0x0169c87c:
      uVar7 = local_70;
    } while (lVar2 != 0);
    p_Var5 = *(__tree_node_base **)((long)local_b0 + 0x10);
    if ((ulong)(*(long *)((long)local_b0 + 0x18) - (long)p_Var5) < 0x28) {
      p_Var5 = (__tree_node_base *)Zone::NewExpand(local_b0,0x28);
    }
    else {
      *(__tree_node_base **)((long)local_b0 + 0x10) = p_Var5 + 0x28;
    }
    *(Node **)(p_Var5 + 0x20) = pNVar10;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(__tree_node_base **)(p_Var5 + 0x10) = p_Var12;
    *(__tree_node_base **)p_Var4 = p_Var5;
    if (*(__tree_node_base **)local_c0 != (__tree_node_base *)0x0) {
      p_Var5 = *(__tree_node_base **)p_Var4;
      local_c0 = *(__tree_node_base **)local_c0;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(local_b8,p_Var5)
    ;
    local_a8 = local_a8 + 1;
    if ((*(byte *)(*(long *)pNVar10 + 0x12) >> 4 & 1) == 0) {
      param_2 = (AbstractState *)(this + 0x10);
      goto LAB_0169c898;
    }
    uVar7 = local_70;
    if (0 < *(int *)(*(long *)pNVar10 + 0x18)) {
      iVar11 = 0;
      do {
        uVar3 = NodeProperties::GetEffectInput(pNVar10,iVar11);
        uVar7 = 0;
        if ((long)local_90 - (long)plStack_98 != 0) {
          uVar7 = ((long)local_90 - (long)plStack_98) * 0x40 - 1;
        }
        uVar6 = local_68 + local_70;
        if (uVar7 == uVar6) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)&local_a0);
          uVar6 = local_70 + local_68;
        }
        iVar11 = iVar11 + 1;
        *(undefined8 *)
         (*(long *)((long)plStack_98 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
             uVar3;
        local_68 = local_68 + 1;
        uVar7 = local_70;
      } while (iVar11 < *(int *)(*(long *)pNVar10 + 0x18));
    }
  } while( true );
}

