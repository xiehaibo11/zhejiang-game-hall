
void FUN_00a76160(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x70);
  if ((long *)((long)param_1 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a7619c;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
                    /* try { // try from 00a76198 to 00b761eb has its CatchHandler @ 00a76198
                       catch() { ... } // from try @ 00a76198 with catch @ 00a76198
                       catch() { ... } // from try @ 00a76300 with catch @ 00a76198 */
  (*pcVar2)();
LAB_00a7619c:
  cocos2d::PcmData::~PcmData((PcmData *)((long)param_1 + 0x20));
  operator_delete(param_1);
  return;
}

