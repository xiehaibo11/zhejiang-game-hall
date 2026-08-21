
/* v8::internal::compiler::LoopPeeler::EliminateLoopExits(v8::internal::compiler::Graph*,
   v8::internal::Zone*) */

void v8::internal::compiler::LoopPeeler::EliminateLoopExits(Graph *param_1,Zone *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  Node *pNVar5;
  Node *pNVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  Node *this;
  int iVar12;
  Node *pNVar13;
  long local_e0 [4];
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long local_a8;
  Zone *local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  Zone *local_80;
  long *local_78;
  Zone *local_70;
  bool local_64 [4];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  plStack_b8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_a8 = 0;
  local_b0 = (long *)0x0;
  local_78 = (long *)0x0;
  local_64[0] = false;
  local_a0 = param_2;
  local_80 = param_2;
  local_70 = param_2;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)local_e0,
             (ulong)*(uint *)(param_1 + 0x1c),local_64,(ZoneAllocator *)&local_70);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  std::__ndk1::
  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::__add_back_capacity
            ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              *)&local_c0);
  *(undefined8 *)
   (*(long *)((long)plStack_b8 + (local_90 + local_88 >> 6 & 0x3fffffffffffff8)) +
   (local_90 + local_88 & 0x1ff) * 8) = uVar11;
  bVar2 = local_88 == -1;
  local_88 = local_88 + 1;
  if (bVar2) {
LAB_01774b40:
    std::__ndk1::
    __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
    ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
             *)&local_c0);
    if (plStack_b8 == local_b0) {
LAB_01774bbc:
      if (((local_c0 != (long *)0x0) && (0xf < (ulong)(local_a8 - (long)local_c0))) &&
         ((uVar4 = local_a8 - (long)local_c0 >> 3, local_98 == 0 ||
          (*(ulong *)(local_98 + 8) <= uVar4)))) {
        local_c0[1] = uVar4;
        *local_c0 = local_98;
      }
      return;
    }
    plVar10 = (long *)*plStack_b8;
    plVar8 = local_78;
    if (local_78 != (long *)0x0) goto LAB_01774b8c;
    do {
      plVar8 = plVar10;
      plVar8[1] = 0x200;
      *plVar8 = (long)local_78;
      local_78 = plVar8;
      do {
        plStack_b8 = plStack_b8 + 1;
        if (local_b0 == plStack_b8) goto LAB_01774bbc;
        plVar10 = (long *)*plStack_b8;
        if (plVar8 == (long *)0x0) break;
LAB_01774b8c:
      } while (0x200 < (ulong)plVar8[1]);
    } while( true );
  }
LAB_017748c8:
  local_88 = local_88 + -1;
  this = *(Node **)(*(long *)((long)plStack_b8 + (local_90 >> 6 & 0x3fffffffffffff8)) +
                   (local_90 & 0x1ff) * 8);
  uVar4 = local_90 + 1;
  if (0x3ff < local_90 + 1) {
    plVar8 = (long *)*plStack_b8;
    if ((local_78 == (long *)0x0) || ((ulong)local_78[1] < 0x201)) {
      plVar8[1] = 0x200;
      *plVar8 = (long)local_78;
      local_78 = plVar8;
    }
    plStack_b8 = plStack_b8 + 1;
    uVar4 = local_90 - 0x1ff;
  }
  local_90 = uVar4;
  if (*(short *)(*(long *)this + 0x10) == 0x34) {
    lVar3 = NodeProperties::GetControlInput(this,0);
    plVar8 = (long *)*(long *)(this + 0x18);
joined_r0x0177495c:
    do {
      plVar10 = plVar8;
      if (plVar10 == (long *)0x0) goto LAB_01774878;
      plVar8 = (long *)*plVar10;
      lVar1 = 0x10;
      if ((*(uint *)(plVar10 + 2) & 1) != 0) {
        lVar1 = 0x20;
      }
      uVar4 = NodeProperties::IsControlEdge
                        (plVar10,(long)plVar10 +
                                 lVar1 + (ulong)(*(uint *)(plVar10 + 2) >> 1) * 0x20 + 0x18);
      if ((uVar4 & 1) != 0) {
        pNVar13 = (Node *)(plVar10 + (ulong)(*(uint *)(plVar10 + 2) >> 1) * 3 + 3);
        if ((*(uint *)(plVar10 + 2) & 1) == 0) {
          pNVar13 = *(Node **)pNVar13;
        }
        if (*(short *)(*(long *)pNVar13 + 0x10) == 0x36) {
          pNVar6 = (Node *)NodeProperties::GetEffectInput(pNVar13,0);
          pNVar5 = (Node *)0x0;
        }
        else {
          if (*(short *)(*(long *)pNVar13 + 0x10) != 0x35) goto joined_r0x0177495c;
          pNVar5 = pNVar13 + 0x20;
          if ((~*(uint *)(pNVar13 + 0x14) & 0xf000000) == 0) {
            pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
          }
          pNVar5 = *(Node **)pNVar5;
          pNVar6 = (Node *)0x0;
        }
        NodeProperties::ReplaceUses(pNVar13,pNVar5,pNVar6,(Node *)0x0,(Node *)0x0);
        Node::Kill(pNVar13);
      }
    } while( true );
  }
  if (0 < *(int *)(*(long *)this + 0x1c)) {
    iVar12 = 0;
    do {
      lVar3 = NodeProperties::GetControlInput(this,iVar12);
      uVar4 = (ulong)(*(uint *)(lVar3 + 0x14) >> 6) & 0x3ffff;
      uVar7 = *(ulong *)(local_e0[0] + uVar4 * 8);
      uVar9 = 1L << ((ulong)*(uint *)(lVar3 + 0x14) & 0x3f);
      if ((uVar9 & uVar7) == 0) {
        *(ulong *)(local_e0[0] + uVar4 * 8) = uVar9 | uVar7;
        uVar4 = 0;
        if ((long)local_b0 - (long)plStack_b8 != 0) {
          uVar4 = ((long)local_b0 - (long)plStack_b8) * 0x40 - 1;
        }
        uVar7 = local_88 + local_90;
        if (uVar4 == uVar7) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)&local_c0);
          uVar7 = local_90 + local_88;
        }
        *(long *)(*(long *)((long)plStack_b8 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                 (uVar7 & 0x1ff) * 8) = lVar3;
        local_88 = local_88 + 1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(*(long *)this + 0x1c));
  }
  goto joined_r0x01774b3c;
LAB_01774878:
  pNVar13 = (Node *)NodeProperties::GetControlInput(this,0);
  NodeProperties::ReplaceUses(this,(Node *)0x0,(Node *)0x0,pNVar13,(Node *)0x0);
  Node::Kill(this);
  uVar4 = (ulong)(*(uint *)(lVar3 + 0x14) >> 6) & 0x3ffff;
  uVar7 = *(ulong *)(local_e0[0] + uVar4 * 8);
  uVar9 = 1L << ((ulong)*(uint *)(lVar3 + 0x14) & 0x3f);
  if ((uVar9 & uVar7) == 0) {
    *(ulong *)(local_e0[0] + uVar4 * 8) = uVar9 | uVar7;
    uVar4 = 0;
    if ((long)local_b0 - (long)plStack_b8 != 0) {
      uVar4 = ((long)local_b0 - (long)plStack_b8) * 0x40 - 1;
    }
    uVar7 = local_88 + local_90;
    if (uVar4 == uVar7) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)&local_c0);
      uVar7 = local_90 + local_88;
    }
    *(long *)(*(long *)((long)plStack_b8 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8)
         = lVar3;
    local_88 = local_88 + 1;
  }
joined_r0x01774b3c:
  if (local_88 == 0) goto LAB_01774b40;
  goto LAB_017748c8;
}

