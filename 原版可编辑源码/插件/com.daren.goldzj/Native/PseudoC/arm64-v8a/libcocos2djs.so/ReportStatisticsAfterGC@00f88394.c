
/* v8::internal::Heap::ReportStatisticsAfterGC() */

void __thiscall v8::internal::Heap::ReportStatisticsAfterGC(Heap *this)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(this + uVar2 * 4 + 0x630);
    *(undefined4 *)(this + uVar2 * 4 + 0x630) = 0;
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      Isolate::CountUsage(this + -0x8850,uVar2 & 0xffffffff);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x5c);
  return;
}

