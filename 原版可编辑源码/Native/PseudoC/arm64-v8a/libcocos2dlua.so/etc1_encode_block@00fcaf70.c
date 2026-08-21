
void etc1_encode_block(undefined8 param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
                    /* catch() { ... } // from try @ 00fcaf48 with catch @ 00fcaf70 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = param_2 & 0xffffffff;
  FUN_00fcb094(param_1,param_2,auStack_50,0,0);
  FUN_00fcb094(param_1,uVar3,(ulong)auStack_50 | 3,0,1);
  FUN_00fcb094(param_1,uVar3,auStack_58,1,0);
  FUN_00fcb094(param_1,uVar3,(ulong)auStack_58 | 3,1,1);
  FUN_00fcb3e8(param_1,uVar3,auStack_50,&local_68,0);
  FUN_00fcb3e8(param_1,uVar3,auStack_58,&local_78,1);
  if (local_70 < local_60) {
    local_68 = local_78;
    local_60 = local_70;
  }
  uVar1 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
  *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (local_68._4_4_ & 0xff00ff00) >> 8 | (local_68._4_4_ & 0xff00ff) << 8;
  param_3[1] = uVar1 >> 0x10 | uVar1 << 0x10;
                    /* try { // try from 00fcb070 to 010cb0a7 has its CatchHandler @ 00fcb070
                       catch() { ... } // from try @ 00fcb070 with catch @ 00fcb070
                       catch() { ... } // from try @ 00fcb0c0 with catch @ 00fcb070 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

