
/* v8::internal::VerboseAccountingAllocator::ZoneDestruction(v8::internal::Zone const*) */

void __thiscall
v8::internal::VerboseAccountingAllocator::ZoneDestruction
          (VerboseAccountingAllocator *this,Zone *param_1)

{
  VerboseAccountingAllocator *pVVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  pVVar1 = this + 0x28;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pVVar1,0x10);
    if (bVar3) {
      *(long *)pVVar1 = *(long *)pVVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = *(long *)(this + 0x18);
  dVar6 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  lVar4 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x28)) + -0x18;
  }
  PrintF("{\"type\": \"%s\", \"isolate\": \"%p\", \"time\": %f, \"ptr\": \"%p\", \"name\": \"%s\", \"size\": %zu,\"nesting\": %zu}\n"
         ,dVar6 - *(double *)(lVar5 + 0x2e70),"zonedestruction",lVar5 + -0x8850,param_1,
         *(undefined8 *)(param_1 + 0x30),*(long *)param_1 + lVar4,*(undefined8 *)pVVar1);
  return;
}

