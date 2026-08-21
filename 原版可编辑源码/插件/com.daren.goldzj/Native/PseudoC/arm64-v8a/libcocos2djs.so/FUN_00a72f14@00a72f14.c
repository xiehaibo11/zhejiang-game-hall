
void FUN_00a72f14(long param_1,undefined1 *param_2,PcmData *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  PcmData aPStack_70 [52];
  undefined1 local_3c [4];
  long local_38;
  
                    /* try { // try from 00a72f24 to 00b72f3b has its CatchHandler @ 00a730f0 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
                    /* try { // try from 00a72f44 to 00b72f4f has its CatchHandler @ 00a730d4 */
  cocos2d::PcmData::PcmData(aPStack_70,param_3);
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00a72f50 to 00b72f5b has its CatchHandler @ 00a730d0 */
                    /* try { // try from 00a72f5c to 00b72f9b has its CatchHandler @ 00a73100 */
    local_3c[0] = uVar1;
    (**(code **)(*plVar3 + 0x30))(plVar3,local_3c);
  }
  cocos2d::PcmData::~PcmData(aPStack_70);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

