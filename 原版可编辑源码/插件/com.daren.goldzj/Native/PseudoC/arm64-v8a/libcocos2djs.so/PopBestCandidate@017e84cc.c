
/* v8::internal::compiler::InstructionScheduler::StressSchedulerQueue::PopBestCandidate(int) */

long v8::internal::compiler::InstructionScheduler::StressSchedulerQueue::PopBestCandidate
               (int param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = (long *)(ulong)(uint)param_1;
  if (*(char *)(*plVar3 + 0x88) != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  plVar5 = (long *)plVar3[2];
  iVar2 = base::RandomNumberGenerator::NextInt
                    ((RandomNumberGenerator *)(*plVar3 + 0x90),(int)plVar3[3]);
  lVar4 = (long)iVar2;
  if (iVar2 < 0) {
    do {
      plVar5 = (long *)*plVar5;
      bVar1 = lVar4 != -1;
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  else if (iVar2 != 0) {
    do {
      plVar5 = (long *)plVar5[1];
      lVar4 = lVar4 + -1;
    } while (0 < lVar4);
  }
  lVar4 = plVar5[2];
  *(long *)(*plVar5 + 8) = plVar5[1];
  *(long *)plVar5[1] = *plVar5;
  plVar3[3] = plVar3[3] + -1;
  return lVar4;
}

