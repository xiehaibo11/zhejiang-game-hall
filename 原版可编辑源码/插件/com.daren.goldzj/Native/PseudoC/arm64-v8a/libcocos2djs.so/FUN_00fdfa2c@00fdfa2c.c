
void FUN_00fdfa2c(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  
  if (param_2 < param_3) {
    uVar1 = *param_2;
    while( true ) {
      if ((((uVar1 & 1) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
         (uVar1 = (**(code **)(*param_1 + 0xb0))(param_1), (uVar1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "Heap::InYoungGeneration(heap_object) implies IsMarked(heap_object)");
      }
      param_2 = param_2 + 1;
      if (param_3 <= param_2) break;
      uVar1 = *param_2;
    }
  }
  return;
}

