
void FUN_00fdaae4(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  do {
    if (param_3 <= param_2) {
      return;
    }
    if ((*param_2 & 1) != 0) {
      uVar1 = (ulong)*param_2 & 0xfffc0000 | (ulong)param_2 & 0xffffffff00000000;
      uVar2 = *(ulong *)(uVar1 + 8);
      if (((uVar2 & 0x18) != 0) && (((uint)uVar2 >> 4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "Heap::InYoungGeneration(heap_object) implies Heap::InToPage(heap_object)");
      }
      if ((*(byte *)(uVar1 + 8) >> 6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!MarkCompactCollector::IsOnEvacuationCandidate(heap_object)");
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}

