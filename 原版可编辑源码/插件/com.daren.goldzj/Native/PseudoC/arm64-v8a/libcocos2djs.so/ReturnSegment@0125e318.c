
/* v8::internal::AccountingAllocator::ReturnSegment(v8::internal::Segment*) */

void __thiscall
v8::internal::AccountingAllocator::ReturnSegment(AccountingAllocator *this,Segment *param_1)

{
  AccountingAllocator *pAVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  Segment::ZapContents();
  lVar4 = *(long *)(param_1 + 0x10);
  pAVar1 = this + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pAVar1,0x10);
    if (bVar3) {
      *(long *)pAVar1 = *(long *)pAVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  Segment::ZapHeader();
  free(param_1);
  return;
}

