
void FUN_00fdf994(long *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    uVar1 = *param_2;
    if ((((uVar1 != 3) && ((uVar1 & 1) != 0)) &&
        ((*(byte *)(((ulong)uVar1 & 0xfffffffffffc0000 | (ulong)param_2 & 0xffffffff00000000) + 8) &
         0x18) != 0)) && (uVar2 = (**(code **)(*param_1 + 0xb0))(param_1), (uVar2 & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","Heap::InYoungGeneration(heap_object) implies IsMarked(heap_object)")
  ;
}

