
/* v8::internal::compiler::MemoryOptimizer::EnqueueUses(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::EnqueueUses
          (MemoryOptimizer *this,Node *param_1,AllocationState *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  Node *pNVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar8 = *(long **)(param_1 + 0x18);
    do {
      plVar9 = (long *)*plVar8;
      lVar3 = 0x10;
      if ((*(uint *)(plVar8 + 2) & 1) != 0) {
        lVar3 = 0x20;
      }
      uVar2 = NodeProperties::IsEffectEdge
                        (plVar8,(long)plVar8 +
                                lVar3 + (ulong)(*(uint *)(plVar8 + 2) >> 1) * 0x20 + 0x18);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(uint *)(plVar8 + 2) >> 1;
        pNVar7 = (Node *)(plVar8 + (ulong)uVar1 * 3 + 3);
        if ((*(uint *)(plVar8 + 2) & 1) == 0) {
          pNVar7 = *(Node **)pNVar7;
        }
        if (*(short *)(*(long *)pNVar7 + 0x10) == 0x24) {
          EnqueueMerge(this,pNVar7,uVar1,param_2);
        }
        else {
          lVar3 = *(long *)(this + 0x108);
          lVar5 = *(long *)(this + 0x110);
          uVar2 = 0;
          if (lVar5 - lVar3 != 0) {
            uVar2 = (lVar5 - lVar3) * 0x20 - 1;
          }
          uVar6 = *(long *)(this + 0x138) + *(long *)(this + 0x130);
          if (uVar2 == uVar6) {
            std::__ndk1::
            deque<v8::internal::compiler::MemoryOptimizer::Token,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::MemoryOptimizer::Token>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::MemoryOptimizer::Token,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::MemoryOptimizer::Token>>
                        *)(this + 0x100));
            lVar3 = *(long *)(this + 0x108);
            lVar5 = *(long *)(this + 0x110);
            uVar6 = *(long *)(this + 0x130) + *(long *)(this + 0x138);
          }
          if (lVar5 == lVar3) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
            puVar4 = (undefined8 *)
                     (*(long *)(lVar3 + (uVar6 >> 5 & 0x7fffffffffffff8)) + (uVar6 & 0xff) * 0x10);
          }
          *puVar4 = pNVar7;
          puVar4[1] = param_2;
          *(long *)(this + 0x138) = *(long *)(this + 0x138) + 1;
        }
      }
      plVar8 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return;
}

