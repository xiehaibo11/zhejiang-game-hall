
/* v8::internal::MarkCompactCollector::StartSweepSpace(v8::internal::PagedSpace*) */

void __thiscall
v8::internal::MarkCompactCollector::StartSweepSpace(MarkCompactCollector *this,PagedSpace *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  Page *pPVar4;
  Page *pPVar5;
  Page *pPVar6;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x30))(*(long **)(param_1 + 0x60));
  if (*(Page **)(param_1 + 0x20) != (Page *)0x0) {
    bVar3 = 0;
    pPVar4 = *(Page **)(param_1 + 0x20);
    do {
      while( true ) {
        pPVar6 = pPVar4 + 0xe0;
        pPVar5 = *(Page **)pPVar6;
        if (((byte)pPVar4[8] >> 6 & 1) == 0) break;
LAB_00fcbb48:
        pPVar4 = pPVar5;
        if (pPVar5 == (Page *)0x0) {
          return;
        }
      }
      if ((*(long *)(pPVar4 + 0x68) != 0) || ((bool)(bVar3 ^ 1))) {
        bVar3 = bVar3 | *(long *)(pPVar4 + 0x68) == 0;
        Sweeper::AddPage(*(Sweeper **)(this + 0x26f8),*(undefined4 *)(param_1 + 0x48),pPVar4,0);
        goto LAB_00fcbb48;
      }
      ArrayBufferTracker::FreeAll(pPVar4);
      if (*(Page **)(param_1 + 0x28) == pPVar4) {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pPVar4 + 0xe8);
      }
      if (*(Page **)(param_1 + 0x20) == pPVar4) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)pPVar6;
        lVar1 = *(long *)(pPVar4 + 0xe0);
        lVar2 = *(long *)(pPVar4 + 0xe8);
      }
      else {
        lVar1 = *(long *)(pPVar4 + 0xe0);
        lVar2 = *(long *)(pPVar4 + 0xe8);
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0xe8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0xe0) = lVar1;
      }
      *(undefined8 *)pPVar6 = 0;
      *(undefined8 *)(pPVar4 + 0xe8) = 0;
      PagedSpace::ReleasePage(param_1,pPVar4);
      pPVar4 = pPVar5;
    } while (pPVar5 != (Page *)0x0);
  }
  return;
}

