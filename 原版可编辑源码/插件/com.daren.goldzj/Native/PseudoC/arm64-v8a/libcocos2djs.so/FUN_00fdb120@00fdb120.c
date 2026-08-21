
void FUN_00fdb120(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    uVar1 = *param_2;
    if (((uVar1 & 1) != 0) &&
       (uVar3 = (ulong)param_2 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000,
       uVar2 = uVar1 - uVar3,
       (*(uint *)(*(long *)(uVar3 + 0x10) + (uVar2 >> 7 & 0x1ffffff) * 4) >>
        (ulong)((uint)(uVar2 >> 2) & 0x1f) & 1) == 0)) break;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_state_->IsBlackOrGrey(heap_object)");
}

