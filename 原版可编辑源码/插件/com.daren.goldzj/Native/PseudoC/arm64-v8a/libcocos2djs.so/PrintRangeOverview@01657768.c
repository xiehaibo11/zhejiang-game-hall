
/* v8::internal::compiler::LinearScanAllocator::PrintRangeOverview(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::PrintRangeOverview
          (LinearScanAllocator *this,basic_ostream *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  TopLevelLiveRange *pTVar7;
  
  FUN_01657898(param_1,*(undefined8 *)(*(long *)(*(long *)this + 0x10) + 0x10));
  lVar5 = *(long *)this;
  puVar6 = *(undefined8 **)(lVar5 + 0xa8);
  puVar1 = *(undefined8 **)(lVar5 + 0xb0);
  if (puVar6 != puVar1) {
    do {
      if ((TopLevelLiveRange *)*puVar6 != (TopLevelLiveRange *)0x0) {
        PrintRangeRow(this,param_1,(TopLevelLiveRange *)*puVar6);
      }
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
    lVar5 = *(long *)this;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0x88);
  puVar1 = *(undefined8 **)(lVar5 + 0x90);
  if (puVar6 != puVar1) {
    iVar4 = 0;
    pTVar7 = (TopLevelLiveRange *)*puVar6;
    while( true ) {
      if (((pTVar7 != (TopLevelLiveRange *)0x0) && (*(long *)(pTVar7 + 0x10) != 0)) &&
         (*(uint *)(this + 8) == (uint)(10 < (*(uint *)(pTVar7 + 4) >> 0xd & 0xff)))) {
        iVar2 = iVar4 * -0x33333333;
        uVar3 = iVar4 * -0x80000000;
        iVar4 = iVar4 + 1;
        if ((iVar2 + 0x19999998U >> 1 | uVar3) < 0x19999999) {
          FUN_01657898(param_1,*(undefined8 *)(*(long *)(*(long *)this + 0x10) + 0x10));
        }
        PrintRangeRow(this,param_1,pTVar7);
      }
      puVar6 = puVar6 + 1;
      if (puVar1 == puVar6) break;
      pTVar7 = (TopLevelLiveRange *)*puVar6;
    }
  }
  return;
}

