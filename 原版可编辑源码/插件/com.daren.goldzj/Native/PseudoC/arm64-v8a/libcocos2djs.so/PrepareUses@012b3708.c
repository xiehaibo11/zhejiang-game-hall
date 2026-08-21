
/* v8::internal::compiler::Scheduler::PrepareUses() */

void __thiscall v8::internal::compiler::Scheduler::PrepareUses(Scheduler *this)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  Node *pNVar11;
  Node *pNVar12;
  long *local_f0;
  undefined8 *puStack_e8;
  undefined8 *local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  long *local_a8;
  long local_98 [4];
  Scheduler *local_78;
  Schedule *local_70;
  bool local_64 [4];
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- PREPARE USES -------------------------------------------\n");
  }
  local_70 = *(Schedule **)(this + 0x10);
  local_f0 = *(long **)this;
  local_64[0] = false;
  local_78 = this;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)local_98,
             (ulong)*(uint *)(*(long *)(this + 8) + 0x1c),local_64,(ZoneAllocator *)&local_f0);
  local_d0 = *(undefined8 *)this;
  local_c0 = 0;
  local_b8 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = (long *)0x0;
  local_d8 = 0;
  local_e0 = (undefined8 *)0x0;
  local_c8 = 0;
  local_a8 = (long *)0x0;
  pNVar11 = *(Node **)(*(long *)(this + 8) + 0x10);
  local_b0 = local_d0;
  PrepareUsesVisitor::Pre((PrepareUsesVisitor *)&local_78,pNVar11);
  pNVar12 = pNVar11 + 0x20;
  uVar7 = ((ulong)*(uint *)(pNVar11 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(local_98[0] + uVar7) =
       1L << ((ulong)*(uint *)(pNVar11 + 0x14) & 0x3f) | *(ulong *)(local_98[0] + uVar7);
  if ((~*(uint *)(pNVar11 + 0x14) & 0xf000000) == 0) {
    pNVar11 = *(Node **)pNVar12;
    pNVar12 = pNVar11 + 0x10;
  }
  uVar7 = 0;
  if ((long)local_e0 - (long)puStack_e8 != 0) {
    uVar7 = ((long)local_e0 - (long)puStack_e8) * 0x20 - 1;
  }
  uVar8 = local_b8 + local_c0;
  if (uVar7 == uVar8) {
    std::__ndk1::
    deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
                *)&local_f0);
    uVar8 = local_c0 + local_b8;
  }
  if (local_e0 == puStack_e8) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             (*(long *)((long)puStack_e8 + (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10
             );
  }
  *puVar4 = pNVar11 + -0x18;
  puVar4[1] = pNVar12;
  bVar2 = local_b8 != -1;
  local_b8 = local_b8 + 1;
  if (bVar2) {
    do {
      while( true ) {
        TickCounter::DoTick(*(TickCounter **)(this + 0xe8));
        uVar7 = (local_b8 + local_c0) - 1;
        lVar3 = *(long *)((long)puStack_e8 + (uVar7 >> 5 & 0x7fffffffffffff8));
        pNVar12 = (Node *)**(undefined8 **)(lVar3 + (uVar7 & 0xff) * 0x10 + 8);
        if ((*(ulong *)(local_98[0] + (((ulong)*(uint *)(pNVar12 + 0x14) & 0xffffc0) >> 3)) >>
             ((ulong)*(uint *)(pNVar12 + 0x14) & 0x3f) & 1) == 0) break;
        lVar3 = *(long *)(lVar3 + (uVar7 & 0xff) * 0x10);
        uVar6 = *(uint *)(lVar3 + 0x10) >> 1;
        pNVar11 = (Node *)(lVar3 + 0x18 + (ulong)uVar6 * 0x18);
        if ((*(uint *)(lVar3 + 0x10) & 1) == 0) {
          pNVar11 = *(Node **)pNVar11;
        }
        uVar7 = Schedule::IsScheduled(local_70,pNVar11);
        if ((uVar7 & 1) == 0) {
          IncrementUnscheduledUseCount(local_78,pNVar12,uVar6,pNVar11);
        }
        uVar7 = (local_b8 + local_c0) - 1;
        plVar5 = (long *)(*(long *)((long)puStack_e8 + (uVar7 >> 5 & 0x7fffffffffffff8)) +
                         (uVar7 & 0xff) * 0x10);
        lVar9 = plVar5[1];
        *plVar5 = *plVar5 + -0x18;
        plVar5[1] = lVar9 + 8;
        puVar4 = (undefined8 *)(lVar3 + 0x18 + (ulong)(*(uint *)(lVar3 + 0x10) >> 1) * 0x18);
        if ((*(uint *)(lVar3 + 0x10) & 1) == 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        plVar5 = puVar4 + 4;
        uVar6 = *(byte *)((long)puVar4 + 0x17) & 0xf;
        if (uVar6 == 0xf) {
          uVar6 = *(uint *)(*plVar5 + 8);
          plVar5 = (long *)(*plVar5 + 0x10);
        }
        if ((long *)(lVar9 + 8) == plVar5 + (int)uVar6) {
          lVar9 = local_b8 + -1;
          lVar3 = 0;
          if ((long)local_e0 - (long)puStack_e8 != 0) {
            lVar3 = ((long)local_e0 - (long)puStack_e8) * 0x20 + -1;
          }
          lVar1 = local_b8 + local_c0;
          local_b8 = lVar9;
          if (0x1ff < (lVar3 - lVar1) + 1U) {
            plVar5 = (long *)local_e0[-1];
            if ((local_a8 == (long *)0x0) || ((ulong)local_a8[1] < 0x101)) {
              plVar5[1] = 0x100;
              *plVar5 = (long)local_a8;
              local_a8 = plVar5;
            }
            local_e0 = local_e0 + -1;
          }
        }
LAB_012b3884:
        if (local_b8 == 0) goto LAB_012b3ac8;
      }
      PrepareUsesVisitor::Pre((PrepareUsesVisitor *)&local_78,pNVar12);
      uVar7 = ((ulong)*(uint *)(pNVar12 + 0x14) & 0xffffc0) >> 3;
      *(ulong *)(local_98[0] + uVar7) =
           1L << ((ulong)*(uint *)(pNVar12 + 0x14) & 0x3f) | *(ulong *)(local_98[0] + uVar7);
      uVar6 = *(uint *)(pNVar12 + 0x14) & 0xf000000;
      if (uVar6 != 0xf000000) {
        if ((*(uint *)(pNVar12 + 0x14) >> 0x18 & 0xf) != 0) goto LAB_012b3a3c;
        goto LAB_012b3884;
      }
      if (*(int *)(*(long *)(pNVar12 + 0x20) + 8) < 1) goto LAB_012b3884;
LAB_012b3a3c:
      pNVar11 = pNVar12 + 0x20;
      if (uVar6 == 0xf000000) {
        pNVar12 = *(Node **)pNVar11;
        pNVar11 = pNVar12 + 0x10;
      }
      uVar7 = 0;
      if ((long)local_e0 - (long)puStack_e8 != 0) {
        uVar7 = ((long)local_e0 - (long)puStack_e8) * 0x20 - 1;
      }
      uVar8 = local_b8 + local_c0;
      if (uVar7 == uVar8) {
        std::__ndk1::
        deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
                    *)&local_f0);
        uVar8 = local_c0 + local_b8;
      }
      if (local_e0 == puStack_e8) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)
                 (*(long *)((long)puStack_e8 + (uVar8 >> 5 & 0x7fffffffffffff8)) +
                 (uVar8 & 0xff) * 0x10);
      }
      *puVar4 = pNVar12 + -0x18;
      puVar4[1] = pNVar11;
      local_b8 = local_b8 + 1;
    } while (local_b8 != 0);
  }
LAB_012b3ac8:
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
  ::clear((__deque_base<v8::internal::compiler::Node::InputEdges::iterator,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node::InputEdges::iterator>>
           *)&local_f0);
  if (puStack_e8 == local_e0) {
LAB_012b3b44:
    if (((local_f0 != (long *)0x0) && (0xf < (ulong)(local_d8 - (long)local_f0))) &&
       ((uVar7 = local_d8 - (long)local_f0 >> 3, local_c8 == 0 ||
        (*(ulong *)(local_c8 + 8) <= uVar7)))) {
      local_f0[1] = uVar7;
      *local_f0 = local_c8;
    }
    return;
  }
  plVar10 = (long *)*puStack_e8;
  plVar5 = local_a8;
  if (local_a8 != (long *)0x0) goto LAB_012b3b14;
  do {
    plVar5 = plVar10;
    plVar5[1] = 0x100;
    *plVar5 = (long)local_a8;
    local_a8 = plVar5;
    do {
      puStack_e8 = puStack_e8 + 1;
      if (local_e0 == puStack_e8) goto LAB_012b3b44;
      plVar10 = (long *)*puStack_e8;
      if (plVar5 == (long *)0x0) break;
LAB_012b3b14:
    } while (0x100 < (ulong)plVar5[1]);
  } while( true );
}

