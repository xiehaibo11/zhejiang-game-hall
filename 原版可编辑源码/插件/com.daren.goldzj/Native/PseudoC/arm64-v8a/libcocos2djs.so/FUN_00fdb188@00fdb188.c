
void FUN_00fdb188(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    uVar1 = (ulong)*param_2;
    if (((uVar1 & 3) == 1) &&
       (uVar2 = (ulong)param_2 & 0xffffffff00000000 | uVar1 & 0xfffffffffffc0000,
       uVar1 = uVar1 - uVar2,
       (*(uint *)(*(long *)(uVar2 + 0x10) + (uVar1 >> 7 & 0x1ffffff) * 4) >>
        (ulong)((uint)(uVar1 >> 2) & 0x1f) & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_state_->IsBlackOrGrey(heap_object)");
}

