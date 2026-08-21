
void FUN_00fdfc70(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    if ((((*param_2 & 1) != 0) &&
        (uVar1 = *(ulong *)(((ulong)*param_2 & 0xfffc0000 | (ulong)param_2 & 0xffffffff00000000) + 8
                           ), (uVar1 & 0x18) != 0)) && (((uint)uVar1 >> 4 & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "Heap::InYoungGeneration(heap_object) implies Heap::InToPage(heap_object)");
}

