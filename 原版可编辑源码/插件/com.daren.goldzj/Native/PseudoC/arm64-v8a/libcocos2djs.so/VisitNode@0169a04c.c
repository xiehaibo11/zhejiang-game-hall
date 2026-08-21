
/* v8::internal::compiler::ControlFlowOptimizer::VisitNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlFlowOptimizer::VisitNode(ControlFlowOptimizer *this,Node *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x18);
    do {
      plVar6 = (long *)*plVar2;
      lVar3 = 0x10;
      if ((*(uint *)(plVar2 + 2) & 1) != 0) {
        lVar3 = 0x20;
      }
      uVar1 = NodeProperties::IsControlEdge
                        (plVar2,(long)plVar2 +
                                lVar3 + (ulong)(*(uint *)(plVar2 + 2) >> 1) * 0x20 + 0x18);
      if ((uVar1 & 1) != 0) {
        plVar7 = plVar2 + (ulong)(*(uint *)(plVar2 + 2) >> 1) * 3 + 3;
        if ((*(uint *)(plVar2 + 2) & 1) == 0) {
          plVar7 = (long *)*plVar7;
        }
        uVar4 = *(byte *)((long)plVar7 + 0x17) & 0xf;
        plVar2 = plVar7 + 4;
        if (uVar4 == 0xf) {
          uVar4 = *(uint *)(*plVar2 + 8);
          plVar2 = (long *)(*plVar2 + 0x10);
        }
        if ((((int)uVar4 < 1) || (*plVar2 != 0)) &&
           (*(uint *)(plVar7 + 2) <= *(uint *)(this + 0x68))) {
          *(uint *)(plVar7 + 2) = *(uint *)(this + 0x68) + 1;
          lVar3 = *(long *)(this + 0x20);
          uVar1 = 0;
          if (*(long *)(this + 0x28) - lVar3 != 0) {
            uVar1 = (*(long *)(this + 0x28) - lVar3) * 0x40 - 1;
          }
          uVar5 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
          if (uVar1 == uVar5) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                        *)(this + 0x18));
            lVar3 = *(long *)(this + 0x20);
            uVar5 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
          }
          *(long **)(*(long *)(lVar3 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) =
               plVar7;
          *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
        }
      }
      plVar2 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}

