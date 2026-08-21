
Node * FUN_017951ec(undefined8 param_1,undefined8 param_2,Zone *param_3)

{
  __tree_node_base *p_Var1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  Node *pNVar11;
  int iVar12;
  __tree_node_base *p_Var13;
  __tree_node_base *p_Var14;
  __tree_node_base *local_b0;
  __tree_node_base *local_a8;
  Zone *local_a0;
  long local_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long local_78;
  Zone *local_70;
  long local_68;
  ulong local_60;
  long local_58;
  Zone *local_50;
  long *local_48;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = (long *)0x0;
  local_98 = 0;
  plStack_88 = (long *)0x0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_80 = (long *)0x0;
  local_a8 = (__tree_node_base *)0x0;
  p_Var5 = *(__tree_node_base **)(param_3 + 0x10);
  local_b0 = (__tree_node_base *)&local_a8;
  local_a0 = param_3;
  local_70 = param_3;
  local_50 = param_3;
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)p_Var5) < 0x28) {
    p_Var5 = (__tree_node_base *)v8::internal::Zone::NewExpand(param_3,0x28);
  }
  else {
    *(__tree_node_base **)(param_3 + 0x10) = p_Var5 + 0x28;
  }
  *(undefined8 *)(p_Var5 + 0x20) = param_2;
  *(undefined8 *)p_Var5 = 0;
  *(undefined8 *)(p_Var5 + 8) = 0;
  *(__tree_node_base **)(p_Var5 + 0x10) = (__tree_node_base *)&local_a8;
  if (*(__tree_node_base **)local_b0 != (__tree_node_base *)0x0) {
    local_b0 = *(__tree_node_base **)local_b0;
  }
  local_a8 = p_Var5;
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(p_Var5,p_Var5);
  local_98 = local_98 + 1;
  uVar3 = 0;
  if ((long)local_80 - (long)plStack_88 != 0) {
    uVar3 = ((long)local_80 - (long)plStack_88) * 0x40 - 1;
  }
  uVar8 = local_58 + local_60;
  if (uVar3 == uVar8) {
    std::__ndk1::
    deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                *)&local_90);
    uVar8 = local_60 + local_58;
  }
  *(undefined8 *)
   (*(long *)((long)plStack_88 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) = param_1;
  bVar2 = local_58 != -1;
  local_58 = local_58 + 1;
  if (bVar2) {
    do {
      uVar3 = local_60;
      pNVar11 = *(Node **)(*(long *)((long)plStack_88 + (local_60 >> 6 & 0x3fffffffffffff8)) +
                          (local_60 & 0x1ff) * 8);
      local_60 = local_60 + 1;
      local_58 = local_58 + -1;
      if (0x3ff < local_60) {
        plVar9 = (long *)*plStack_88;
        if ((local_48 == (long *)0x0) || ((ulong)local_48[1] < 0x201)) {
          plVar9[1] = 0x200;
          *plVar9 = (long)local_48;
          local_48 = plVar9;
        }
        local_60 = uVar3 - 0x1ff;
        plStack_88 = plStack_88 + 1;
      }
      p_Var5 = (__tree_node_base *)&local_a8;
      p_Var7 = local_a8;
      p_Var13 = (__tree_node_base *)&local_a8;
      p_Var14 = (__tree_node_base *)&local_a8;
      if (local_a8 == (__tree_node_base *)0x0) {
LAB_017953f8:
        lVar6 = *(long *)p_Var14;
joined_r0x01795500:
        if (lVar6 == 0) {
          p_Var5 = *(__tree_node_base **)(local_a0 + 0x10);
          if ((ulong)(*(long *)(local_a0 + 0x18) - (long)p_Var5) < 0x28) {
            p_Var5 = (__tree_node_base *)v8::internal::Zone::NewExpand(local_a0,0x28);
          }
          else {
            *(__tree_node_base **)(local_a0 + 0x10) = p_Var5 + 0x28;
          }
          *(Node **)(p_Var5 + 0x20) = pNVar11;
          *(undefined8 *)p_Var5 = 0;
          *(undefined8 *)(p_Var5 + 8) = 0;
          *(__tree_node_base **)(p_Var5 + 0x10) = p_Var13;
          *(__tree_node_base **)p_Var14 = p_Var5;
          if (*(__tree_node_base **)local_b0 != (__tree_node_base *)0x0) {
            p_Var5 = *(__tree_node_base **)p_Var14;
            local_b0 = *(__tree_node_base **)local_b0;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (local_a8,p_Var5);
          local_98 = local_98 + 1;
        }
        uVar3 = FUN_01794b64(pNVar11);
        if ((uVar3 & 1) != 0) goto LAB_0179551c;
        if (0 < *(int *)(*(long *)pNVar11 + 0x18)) {
          iVar12 = 0;
          do {
            uVar4 = v8::internal::compiler::NodeProperties::GetEffectInput(pNVar11,iVar12);
            uVar3 = 0;
            if ((long)local_80 - (long)plStack_88 != 0) {
              uVar3 = ((long)local_80 - (long)plStack_88) * 0x40 - 1;
            }
            uVar8 = local_58 + local_60;
            if (uVar3 == uVar8) {
              std::__ndk1::
              deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                          *)&local_90);
              uVar8 = local_60 + local_58;
            }
            iVar12 = iVar12 + 1;
            *(undefined8 *)
             (*(long *)((long)plStack_88 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8)
                 = uVar4;
            local_58 = local_58 + 1;
          } while (iVar12 < *(int *)(*(long *)pNVar11 + 0x18));
        }
      }
      else {
        do {
          if (*(__tree_node_base **)(p_Var7 + 0x20) >= pNVar11) {
            p_Var5 = p_Var7;
          }
          p_Var1 = p_Var7 + (ulong)(*(__tree_node_base **)(p_Var7 + 0x20) < pNVar11) * 8;
          p_Var7 = *(__tree_node_base **)p_Var1;
        } while (*(__tree_node_base **)p_Var1 != (__tree_node_base *)0x0);
        p_Var7 = local_a8;
        if ((p_Var5 == (__tree_node_base *)&local_a8) ||
           (pNVar11 < *(__tree_node_base **)(p_Var5 + 0x20))) {
          while (p_Var7 != (__tree_node_base *)0x0) {
            while (p_Var13 = p_Var7, pNVar11 < *(Node **)(p_Var13 + 0x20)) {
              p_Var7 = *(__tree_node_base **)p_Var13;
              p_Var14 = p_Var13;
              if (*(__tree_node_base **)p_Var13 == (__tree_node_base *)0x0) {
                lVar6 = *(long *)p_Var13;
                goto joined_r0x01795500;
              }
            }
            if (pNVar11 <= *(Node **)(p_Var13 + 0x20)) break;
            p_Var14 = p_Var13 + 8;
            p_Var7 = *(__tree_node_base **)(p_Var13 + 8);
          }
          goto LAB_017953f8;
        }
      }
    } while (local_58 != 0);
  }
  pNVar11 = (Node *)0x0;
LAB_0179551c:
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)&local_b0,(__tree_node *)local_a8);
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_90);
  if (plStack_88 == local_80) {
LAB_017955a4:
    if (((local_90 != (long *)0x0) && (0xf < (ulong)(local_78 - (long)local_90))) &&
       ((uVar3 = local_78 - (long)local_90 >> 3, local_68 == 0 ||
        (*(ulong *)(local_68 + 8) <= uVar3)))) {
      local_90[1] = uVar3;
      *local_90 = local_68;
    }
    return pNVar11;
  }
  plVar10 = (long *)*plStack_88;
  plVar9 = local_48;
  if (local_48 != (long *)0x0) goto LAB_01795574;
  do {
    plVar9 = plVar10;
    plVar9[1] = 0x200;
    *plVar9 = (long)local_48;
    local_48 = plVar9;
    do {
      plStack_88 = plStack_88 + 1;
      if (local_80 == plStack_88) goto LAB_017955a4;
      plVar10 = (long *)*plStack_88;
      if (plVar9 == (long *)0x0) break;
LAB_01795574:
    } while (0x200 < (ulong)plVar9[1]);
  } while( true );
}

