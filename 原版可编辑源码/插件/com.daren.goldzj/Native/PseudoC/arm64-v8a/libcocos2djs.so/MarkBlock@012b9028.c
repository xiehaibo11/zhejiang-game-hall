
/* v8::internal::compiler::ScheduleLateNodeVisitor::MarkBlock(v8::internal::compiler::BasicBlock*)
    */

void __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::MarkBlock
          (ScheduleLateNodeVisitor *this,BasicBlock *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0xa0) >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(this + 0x18) + uVar4) =
       *(ulong *)(*(long *)(this + 0x18) + uVar4) | 1L << (*(ulong *)(param_1 + 0xa0) & 0x3f);
  plVar5 = *(long **)(param_1 + 0x80);
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar5 != plVar1) {
    do {
      lVar6 = *plVar5;
      uVar4 = *(ulong *)(lVar6 + 0xa0);
      if ((*(ulong *)(*(long *)(this + 0x18) + (uVar4 >> 3 & 0x1ffffffffffffff8)) >> (uVar4 & 0x3f)
          & 1) == 0) {
        lVar2 = *(long *)(this + 0x40);
        uVar4 = 0;
        if (*(long *)(this + 0x48) - lVar2 != 0) {
          uVar4 = (*(long *)(this + 0x48) - lVar2) * 0x40 - 1;
        }
        uVar3 = *(long *)(this + 0x70) + *(long *)(this + 0x68);
        if (uVar4 == uVar3) {
          std::__ndk1::
          deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                      *)(this + 0x38));
          lVar2 = *(long *)(this + 0x40);
          uVar3 = *(long *)(this + 0x68) + *(long *)(this + 0x70);
        }
        *(long *)(*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8) = lVar6
        ;
        *(long *)(this + 0x70) = *(long *)(this + 0x70) + 1;
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
  }
  return;
}

