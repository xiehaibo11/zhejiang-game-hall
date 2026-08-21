
void FUN_00a761b4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  PcmData aPStack_70 [52];
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  cocos2d::PcmData::PcmData(aPStack_70,(PcmData *)(param_1 + 0x20));
                    /* try { // try from 00a761ec to 00b76203 has its CatchHandler @ 00a7637c */
  plVar3 = *(long **)(param_1 + 0x70);
  local_3c[0] = uVar1;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,local_3c,aPStack_70);
                    /* try { // try from 00a7620c to 00b76217 has its CatchHandler @ 00a76378 */
  cocos2d::PcmData::~PcmData(aPStack_70);
                    /* try { // try from 00a76218 to 00b76223 has its CatchHandler @ 00a76374 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a76224 to 00b762ff has its CatchHandler @ 00a7638c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

