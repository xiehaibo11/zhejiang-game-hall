
/* v8::internal::compiler::ScheduleLateNodeVisitor::ProcessQueue(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::ProcessQueue
          (ScheduleLateNodeVisitor *this,Node *param_1)

{
  Node *pNVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  long lVar9;
  Node *pNVar10;
  ulong uVar11;
  
  lVar9 = *(long *)(this + 8);
  pNVar10 = param_1 + 0x20;
  uVar3 = (byte)param_1[0x17] & 0xf;
  if (uVar3 == 0xf) {
    uVar3 = *(uint *)(*(long *)pNVar10 + 8);
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  if (uVar3 != 0) {
    pNVar1 = pNVar10 + (long)(int)uVar3 * 8;
    lVar4 = lVar9;
    while( true ) {
      pNVar8 = *(Node **)pNVar10;
      lVar4 = *(long *)(lVar4 + 0xb0);
      uVar6 = (ulong)*(uint *)(pNVar8 + 0x14) & 0xffffff;
      if (*(int *)(lVar4 + uVar6 * 0x10 + 0xc) == 3) {
        pNVar8 = (Node *)NodeProperties::GetControlInput(pNVar8,0);
        lVar4 = *(long *)(*(long *)(this + 8) + 0xb0);
        uVar6 = (ulong)*(uint *)(pNVar8 + 0x14) & 0xffffff;
      }
      if (*(int *)(lVar4 + uVar6 * 0x10 + 8) == 0) {
        lVar4 = *(long *)(lVar9 + 0x68);
        lVar2 = *(long *)(lVar9 + 0x70) - lVar4;
        uVar6 = 0;
        if (lVar2 != 0) {
          uVar6 = lVar2 * 0x40 - 1;
        }
        uVar11 = *(long *)(lVar9 + 0x98) + *(long *)(lVar9 + 0x90);
        if (uVar6 == uVar11) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)(lVar9 + 0x60));
          lVar4 = *(long *)(lVar9 + 0x68);
          uVar11 = *(long *)(lVar9 + 0x90) + *(long *)(lVar9 + 0x98);
        }
        *(Node **)(*(long *)(lVar4 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
             pNVar8;
        *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + 1;
        do {
          TickCounter::DoTick(*(TickCounter **)(*(long *)(this + 8) + 0xe8));
          uVar11 = *(ulong *)(lVar9 + 0x90);
          puVar5 = *(undefined8 **)(lVar9 + 0x68);
          uVar6 = uVar11 + 1;
          pNVar8 = *(Node **)(*(long *)((long)puVar5 + (uVar11 >> 6 & 0x3fffffffffffff8)) +
                             (uVar11 & 0x1ff) * 8);
          *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + -1;
          *(ulong *)(lVar9 + 0x90) = uVar6;
          if (0x3ff < uVar6) {
            puVar7 = (undefined8 *)*puVar5;
            if ((*(long *)(lVar9 + 0xa8) == 0) || (*(ulong *)(*(long *)(lVar9 + 0xa8) + 8) < 0x201))
            {
              puVar7[1] = 0x200;
              *puVar7 = *(undefined8 *)(lVar9 + 0xa8);
              puVar5 = *(undefined8 **)(lVar9 + 0x68);
              uVar6 = *(ulong *)(lVar9 + 0x90);
              *(undefined8 **)(lVar9 + 0xa8) = puVar7;
            }
            *(undefined8 **)(lVar9 + 0x68) = puVar5 + 1;
            *(ulong *)(lVar9 + 0x90) = uVar6 - 0x200;
          }
          VisitNode(this,pNVar8);
        } while (*(long *)(lVar9 + 0x98) != 0);
      }
      pNVar10 = pNVar10 + 8;
      if (pNVar10 == pNVar1) break;
      lVar4 = *(long *)(this + 8);
    }
  }
  return;
}

