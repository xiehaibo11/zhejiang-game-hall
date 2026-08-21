
/* v8::internal::compiler::Scheduler::DecrementUnscheduledUseCount(v8::internal::compiler::Node*,
   int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Scheduler::DecrementUnscheduledUseCount
          (Scheduler *this,Node *param_1,int param_2,Node *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  while( true ) {
    lVar3 = *(long *)(this + 0xb0);
    if (*(int *)(lVar3 + ((ulong)*(uint *)(param_3 + 0x14) & 0xffffff) * 0x10 + 0xc) == 3) {
      iVar2 = NodeProperties::PastEffectIndex(param_3);
      if (iVar2 == param_2) {
        return;
      }
      lVar3 = *(long *)(this + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc);
    if (iVar2 != 3) break;
    param_1 = (Node *)NodeProperties::GetControlInput(param_1,0);
  }
  if (iVar2 != 2) {
    lVar3 = lVar3 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10;
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("  Use count of #%d:%s (used by #%d:%s)-- = %d\n",
             (ulong)*(uint *)(param_1 + 0x14) & 0xffffff,*(undefined8 *)(*(long *)param_1 + 8),
             (ulong)(*(uint *)(param_3 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_3 + 8),
             (ulong)*(uint *)(*(long *)(this + 0xb0) +
                              ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8));
    }
    if (*(int *)(*(long *)(this + 0xb0) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8)
        == 0) {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("    newly eligible #%d:%s\n",(ulong)*(uint *)(param_1 + 0x14) & 0xffffff,
               *(undefined8 *)(*(long *)param_1 + 8));
      }
      lVar3 = *(long *)(this + 0x68);
      uVar1 = 0;
      if (*(long *)(this + 0x70) - lVar3 != 0) {
        uVar1 = (*(long *)(this + 0x70) - lVar3) * 0x40 - 1;
      }
      uVar4 = *(long *)(this + 0x98) + *(long *)(this + 0x90);
      if (uVar1 == uVar4) {
        std::__ndk1::
        deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                    *)(this + 0x60));
        lVar3 = *(long *)(this + 0x68);
        uVar4 = *(long *)(this + 0x90) + *(long *)(this + 0x98);
      }
      *(Node **)(*(long *)(lVar3 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) =
           param_1;
      *(long *)(this + 0x98) = *(long *)(this + 0x98) + 1;
    }
  }
  return;
}

