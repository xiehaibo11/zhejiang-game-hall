
void FUN_00fdabdc(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  do {
    if (param_3 <= param_2) {
      return;
    }
    if ((*param_2 & 1) != 0) {
      uVar1 = *param_2 & 0xfffffffffffc0000;
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

