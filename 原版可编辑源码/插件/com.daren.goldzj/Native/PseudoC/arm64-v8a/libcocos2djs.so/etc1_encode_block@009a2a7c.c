
void etc1_encode_block(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a2aac to 00aa2aef has its CatchHandler @ 009a2aac
                       catch() { ... } // from try @ 009a2aac with catch @ 009a2aac
                       catch() { ... } // from try @ 009a2b40 with catch @ 009a2aac */
  uVar2 = param_2 & 0xffffffff;
  FUN_009a2bc8(param_1,param_2,auStack_50,0,0);
  FUN_009a2bc8(param_1,uVar2,(ulong)auStack_50 | 3,0,1);
                    /* try { // try from 009a2af0 to 00aa2b3f has its CatchHandler @ 009a2b70 */
  FUN_009a2bc8(param_1,uVar2,auStack_58,1,0);
  FUN_009a2bc8(param_1,uVar2,(ulong)auStack_58 | 3,1,1);
  FUN_009a2f1c(param_1,uVar2,auStack_50,&local_68,0);
  FUN_009a2f1c(param_1,uVar2,auStack_58,&local_78,1);
                    /* try { // try from 009a2b40 to 00aa2b83 has its CatchHandler @ 009a2aac */
  if (local_70 < local_60) {
    local_60 = local_70;
    local_68 = local_78;
  }
  *param_3 = (char)((ulong)local_68 >> 0x18);
  param_3[3] = (char)local_68;
                    /* catch() { ... } // from try @ 009a2af0 with catch @ 009a2b70 */
  param_3[1] = (char)((ulong)local_68 >> 0x10);
  param_3[2] = (char)((ulong)local_68 >> 8);
                    /* try { // try from 009a2b84 to 00aa2bd7 has its CatchHandler @ 009a2b84
                       catch() { ... } // from try @ 009a2b84 with catch @ 009a2b84
                       catch() { ... } // from try @ 009a2bf0 with catch @ 009a2b84 */
  param_3[4] = (char)((ulong)local_68 >> 0x38);
  param_3[7] = (char)((ulong)local_68 >> 0x20);
  param_3[5] = (char)((ulong)local_68 >> 0x30);
  param_3[6] = (char)((ulong)local_68 >> 0x28);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

