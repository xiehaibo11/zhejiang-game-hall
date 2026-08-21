
/* v8::internal::compiler::LoopVariableOptimizer::Run() */

void __thiscall v8::internal::compiler::LoopVariableOptimizer::Run(LoopVariableOptimizer *this)

{
  LoopVariableOptimizer *pLVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  Node *pNVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  Node *pNVar12;
  int iVar13;
  Node *pNVar14;
  uint local_b8 [2];
  long *local_b0;
  long *plStack_a8;
  long *local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  local_90 = *(undefined8 *)(this + 0x18);
  local_80 = 0;
  local_78 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_98 = 0;
  local_a0 = (long *)0x0;
  local_88 = 0;
  local_68 = (long *)0x0;
  uVar11 = *(undefined8 *)(*(long *)(this + 8) + 8);
  local_70 = local_90;
  std::__ndk1::
  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::__add_back_capacity
            ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              *)&local_b0);
  *(undefined8 *)
   (*(long *)((long)plStack_a8 + (local_80 + local_78 >> 6 & 0x3fffffffffffff8)) +
   (local_80 + local_78 & 0x1ff) * 8) = uVar11;
  local_78 = local_78 + 1;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)local_b8,*(Graph **)(this + 8),2);
  if (local_78 != 0) {
    do {
      local_78 = local_78 + -1;
      pNVar12 = *(Node **)(*(long *)((long)plStack_a8 + (local_80 >> 6 & 0x3fffffffffffff8)) +
                          (local_80 & 0x1ff) * 8);
      uVar5 = local_80 + 1;
      if (0x3ff < local_80 + 1) {
        plVar6 = (long *)*plStack_a8;
        if ((local_68 == (long *)0x0) || ((ulong)local_68[1] < 0x201)) {
          plVar6[1] = 0x200;
          *plVar6 = (long)local_68;
          local_68 = plVar6;
        }
        plStack_a8 = plStack_a8 + 1;
        uVar5 = local_80 - 0x1ff;
      }
      local_80 = uVar5;
      *(uint *)(pNVar12 + 0x10) = local_b8[0];
      pLVar1 = this + 4;
      if (*(short *)(*(long *)pNVar12 + 0x10) != 1) {
        pLVar1 = (LoopVariableOptimizer *)(*(long *)pNVar12 + 0x1c);
      }
      iVar2 = *(int *)pLVar1;
      if (0 < iVar2) {
        iVar13 = 0;
        do {
          lVar4 = NodeProperties::GetControlInput(pNVar12,iVar13);
          uVar5 = (ulong)*(uint *)(lVar4 + 0x14) & 0xffffff;
          if ((*(ulong *)(this + 0x48) <= uVar5) ||
             ((*(ulong *)(*(long *)(this + 0x40) + (uVar5 >> 3 & 0x1ffff8)) >>
               ((ulong)*(uint *)(lVar4 + 0x14) & 0x3f) & 1) == 0)) goto LAB_01774d9c;
          iVar13 = iVar13 + 1;
        } while (iVar2 != iVar13);
      }
      VisitNode(this,pNVar12);
      uVar3 = *(uint *)(pNVar12 + 0x14);
      uVar5 = (ulong)uVar3 & 0xffffff;
      if (*(ulong *)(this + 0x48) <= uVar5) {
        std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::resize
                  ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x40),uVar5 + 1,false);
      }
      lVar4 = *(long *)(this + 0x40);
      uVar9 = 1L << ((ulong)uVar3 & 0x3f);
      uVar7 = *(ulong *)(lVar4 + (uVar5 >> 6) * 8);
      if ((uVar7 & uVar9) == 0) {
        *(ulong *)(lVar4 + (uVar5 >> 6) * 8) = uVar7 | uVar9;
        plVar6 = *(long **)(pNVar12 + 0x18);
      }
      else {
        plVar6 = *(long **)(pNVar12 + 0x18);
      }
joined_r0x01774eec:
      plVar10 = plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar10;
          lVar4 = 0x10;
          if ((*(uint *)(plVar10 + 2) & 1) != 0) {
            lVar4 = 0x20;
          }
          uVar5 = NodeProperties::IsControlEdge
                            (plVar10,(long)plVar10 +
                                     lVar4 + (ulong)(*(uint *)(plVar10 + 2) >> 1) * 0x20 + 0x18);
          if ((uVar5 & 1) != 0) {
            uVar3 = *(uint *)(plVar10 + 2);
            pNVar14 = (Node *)(plVar10 + (ulong)(uVar3 >> 1) * 3 + 3);
            pNVar8 = pNVar14;
            if ((uVar3 & 1) == 0) {
              pNVar8 = *(Node **)pNVar14;
            }
            if (0 < *(int *)(*(long *)pNVar8 + 0x28)) {
              if ((uVar3 & 1) == 0) {
                pNVar14 = *(Node **)pNVar14;
              }
              if ((*(short *)(*(long *)pNVar14 + 0x10) == 1) && (uVar3 >> 1 != *(uint *)this))
              goto LAB_01774ff4;
              if (*(uint *)(pNVar14 + 0x10) <= local_b8[0]) {
                uVar5 = 0;
                if ((long)local_a0 - (long)plStack_a8 != 0) {
                  uVar5 = ((long)local_a0 - (long)plStack_a8) * 0x40 - 1;
                }
                uVar7 = local_78 + local_80;
                if (uVar5 == uVar7) {
                  std::__ndk1::
                  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  ::__add_back_capacity
                            ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                              *)&local_b0);
                  uVar7 = local_80 + local_78;
                }
                *(Node **)(*(long *)((long)plStack_a8 + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                          (uVar7 & 0x1ff) * 8) = pNVar14;
                local_78 = local_78 + 1;
                *(uint *)(pNVar14 + 0x10) = local_b8[0] + 1;
              }
            }
          }
          plVar10 = plVar6;
          if (plVar6 == (long *)0x0) break;
        } while( true );
      }
LAB_01774d9c:
      if (local_78 == 0) break;
    } while( true );
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_b0);
  if (plStack_a8 == local_a0) {
LAB_01775088:
    if (((local_b0 != (long *)0x0) && (0xf < (ulong)(local_98 - (long)local_b0))) &&
       ((uVar5 = local_98 - (long)local_b0 >> 3, local_88 == 0 ||
        (*(ulong *)(local_88 + 8) <= uVar5)))) {
      local_b0[1] = uVar5;
      *local_b0 = local_88;
    }
    return;
  }
  plVar10 = (long *)*plStack_a8;
  plVar6 = local_68;
  if (local_68 != (long *)0x0) goto LAB_01775058;
  do {
    plVar6 = plVar10;
    plVar6[1] = 0x200;
    *plVar6 = (long)local_68;
    local_68 = plVar6;
    do {
      plStack_a8 = plStack_a8 + 1;
      if (local_a0 == plStack_a8) goto LAB_01775088;
      plVar10 = (long *)*plStack_a8;
      if (plVar6 == (long *)0x0) break;
LAB_01775058:
    } while (0x200 < (ulong)plVar6[1]);
  } while( true );
LAB_01774ff4:
  VisitBackedge(this,pNVar12,pNVar14);
  goto joined_r0x01774eec;
}

