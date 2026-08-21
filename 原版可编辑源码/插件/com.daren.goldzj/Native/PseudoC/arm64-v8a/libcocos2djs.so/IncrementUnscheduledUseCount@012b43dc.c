
/* v8::internal::compiler::Scheduler::IncrementUnscheduledUseCount(v8::internal::compiler::Node*,
   int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Scheduler::IncrementUnscheduledUseCount
          (Scheduler *this,Node *param_1,int param_2,Node *param_3)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = *(long *)(this + 0xb0);
    if (*(int *)(lVar2 + ((ulong)*(uint *)(param_3 + 0x14) & 0xffffff) * 0x10 + 0xc) == 3) {
      iVar1 = NodeProperties::PastEffectIndex(param_3);
      if (iVar1 == param_2) {
        return;
      }
      lVar2 = *(long *)(this + 0xb0);
    }
    iVar1 = *(int *)(lVar2 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc);
    if (iVar1 != 3) break;
    param_1 = (Node *)NodeProperties::GetControlInput(param_1,0);
  }
  if ((iVar1 != 2) &&
     (lVar2 = lVar2 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10,
     *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1, FLAG_trace_turbo_scheduler != '\0')) {
    PrintF("  Use count of #%d:%s (used by #%d:%s)++ = %d\n",
           (ulong)*(uint *)(param_1 + 0x14) & 0xffffff,*(undefined8 *)(*(long *)param_1 + 8),
           (ulong)(*(uint *)(param_3 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_3 + 8),
           (ulong)*(uint *)(*(long *)(this + 0xb0) +
                            ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8));
    return;
  }
  return;
}

