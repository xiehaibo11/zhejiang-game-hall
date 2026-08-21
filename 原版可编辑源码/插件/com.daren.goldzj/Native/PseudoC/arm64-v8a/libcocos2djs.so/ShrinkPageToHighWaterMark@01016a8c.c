
/* v8::internal::PagedSpace::ShrinkPageToHighWaterMark(v8::internal::Page*) */

void __thiscall v8::internal::PagedSpace::ShrinkPageToHighWaterMark(PagedSpace *this,Page *param_1)

{
  PagedSpace *pPVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = Page::ShrinkToHighWaterMark(param_1);
  pPVar1 = this + 0xa8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pPVar1,0x10);
    if (bVar3) {
      *(long *)pPVar1 = *(long *)pPVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(long *)(this + 0x50) = *(long *)(this + 0x50) - lVar4;
  return;
}

