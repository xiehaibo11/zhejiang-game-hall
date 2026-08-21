
void FUN_00fdfd30(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    if ((((*param_2 & 1) != 0) &&
        (uVar1 = *(ulong *)((*param_2 & 0xfffffffffffc0000) + 8), (uVar1 & 0x18) != 0)) &&
       (((uint)uVar1 >> 4 & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "Heap::InYoungGeneration(heap_object) implies Heap::InToPage(heap_object)");
}

