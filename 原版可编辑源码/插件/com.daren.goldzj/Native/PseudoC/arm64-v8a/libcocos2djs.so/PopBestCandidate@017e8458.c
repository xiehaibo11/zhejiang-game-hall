
/* v8::internal::compiler::InstructionScheduler::CriticalPathFirstQueue::PopBestCandidate(int) */

long __thiscall
v8::internal::compiler::InstructionScheduler::CriticalPathFirstQueue::PopBestCandidate
          (CriticalPathFirstQueue *this,int param_1)

{
  CriticalPathFirstQueue *pCVar1;
  long lVar2;
  CriticalPathFirstQueue *pCVar3;
  CriticalPathFirstQueue *pCVar4;
  
  pCVar3 = *(CriticalPathFirstQueue **)(this + 0x10);
  pCVar1 = this + 8;
  if (pCVar1 != pCVar3) {
    do {
      pCVar4 = pCVar3;
      if (*(int *)(*(long *)(pCVar3 + 0x10) + 100) <= param_1) break;
      pCVar3 = *(CriticalPathFirstQueue **)(pCVar3 + 8);
      pCVar4 = pCVar1;
    } while (pCVar1 != pCVar3);
    if (pCVar1 != pCVar4) {
      lVar2 = *(long *)(pCVar4 + 0x10);
      *(long *)(*(long *)pCVar4 + 8) = *(long *)(pCVar4 + 8);
      **(long **)(pCVar4 + 8) = *(long *)pCVar4;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
      return lVar2;
    }
  }
  return 0;
}

