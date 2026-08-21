
void FUN_00fdb1f8(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    uVar1 = *param_2;
    if (((uVar1 & 1) != 0) &&
       (uVar2 = uVar1 - (uVar1 & 0xfffffffffffc0000),
       (*(uint *)(*(long *)((uVar1 & 0xfffffffffffc0000) + 0x10) + (uVar2 >> 7 & 0x1ffffff) * 4) >>
        (ulong)((uint)(uVar2 >> 2) & 0x1f) & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_state_->IsBlackOrGrey(heap_object)");
}

