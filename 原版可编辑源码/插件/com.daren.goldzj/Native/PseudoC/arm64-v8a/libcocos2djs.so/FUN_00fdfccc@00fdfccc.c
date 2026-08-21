
void FUN_00fdfccc(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    uVar1 = *param_2;
    if ((((uVar1 != 3) && ((uVar1 & 1) != 0)) &&
        (uVar2 = *(ulong *)(((ulong)uVar1 & 0xfffc0000 | (ulong)param_2 & 0xffffffff00000000) + 8),
        (uVar2 & 0x18) != 0)) && (((uint)uVar2 >> 4 & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "Heap::InYoungGeneration(heap_object) implies Heap::InToPage(heap_object)");
}

