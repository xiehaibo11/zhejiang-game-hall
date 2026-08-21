
/* v8::internal::compiler::ControlFlowOptimizer::Optimize() */

void __thiscall v8::internal::compiler::ControlFlowOptimizer::Optimize(ControlFlowOptimizer *this)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  Node *pNVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  Node *pNVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)(*(long *)this + 8);
  uVar5 = *(byte *)(lVar7 + 0x17) & 0xf;
  plVar1 = (long *)(lVar7 + 0x20);
  if (uVar5 == 0xf) {
    uVar5 = *(uint *)(*plVar1 + 8);
    plVar1 = (long *)(*plVar1 + 0x10);
  }
  if ((((int)uVar5 < 1) || (*plVar1 != 0)) && (*(uint *)(lVar7 + 0x10) <= *(uint *)(this + 0x68))) {
    *(uint *)(lVar7 + 0x10) = *(uint *)(this + 0x68) + 1;
    lVar2 = *(long *)(this + 0x20);
    uVar10 = 0;
    if (*(long *)(this + 0x28) - lVar2 != 0) {
      uVar10 = (*(long *)(this + 0x28) - lVar2) * 0x40 - 1;
    }
    uVar9 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
    if (uVar10 == uVar9) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x18));
      lVar2 = *(long *)(this + 0x20);
      uVar9 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
    }
    *(long *)(*(long *)(lVar2 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8) = lVar7;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  lVar7 = *(long *)(this + 0x50);
  while (lVar7 != 0) {
    TickCounter::DoTick(*(TickCounter **)(this + 0x78));
    uVar9 = *(ulong *)(this + 0x48);
    puVar3 = *(undefined8 **)(this + 0x20);
    uVar10 = uVar9 + 1;
    pNVar8 = *(Node **)(*(long *)((long)puVar3 + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                       (uVar9 & 0x1ff) * 8);
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + -1;
    *(ulong *)(this + 0x48) = uVar10;
    if (0x3ff < uVar10) {
      puVar6 = (undefined8 *)*puVar3;
      if ((*(long *)(this + 0x60) == 0) || (*(ulong *)(*(long *)(this + 0x60) + 8) < 0x201)) {
        puVar6[1] = 0x200;
        *puVar6 = *(undefined8 *)(this + 0x60);
        puVar3 = *(undefined8 **)(this + 0x20);
        uVar10 = *(ulong *)(this + 0x48);
        *(undefined8 **)(this + 0x60) = puVar6;
      }
      *(undefined8 **)(this + 0x20) = puVar3 + 1;
      *(ulong *)(this + 0x48) = uVar10 - 0x200;
    }
    uVar5 = (byte)pNVar8[0x17] & 0xf;
    pNVar4 = pNVar8 + 0x20;
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*(long *)pNVar4 + 8);
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    if ((((int)uVar5 < 1) || (*(long *)pNVar4 != 0)) &&
       ((*(short *)(*(long *)pNVar8 + 0x10) != 2 ||
        (uVar10 = TryBuildSwitch(this,pNVar8), (uVar10 & 1) == 0)))) {
      VisitNode(this,pNVar8);
    }
    lVar7 = *(long *)(this + 0x50);
  }
  return;
}

