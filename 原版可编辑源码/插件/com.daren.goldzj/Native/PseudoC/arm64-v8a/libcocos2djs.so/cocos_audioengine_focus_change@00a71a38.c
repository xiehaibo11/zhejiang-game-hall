
/* cocos_audioengine_focus_change(int) */

void cocos_audioengine_focus_change(int param_1)

{
  long *plVar1;
  
  if (((uint)param_1 < 4) && (DAT_01d38d18 = param_1, DAT_01d38d10 != 0)) {
    plVar1 = *(long **)(DAT_01d38d10 + 0x38);
    if (param_1 == 0) {
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        (**(code **)(*(long *)plVar1[3] + 0x68))((long *)plVar1[3],1);
      }
    }
    else {
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
                    /* try { // try from 00a71a6c to 00b71aaf has its CatchHandler @ 00a71acc */
        (**(code **)(*(long *)plVar1[3] + 0x68))((long *)plVar1[3],0);
      }
    }
  }
                    /* try { // try from 00a71ab0 to 00b71b4b has its CatchHandler @ 00a718c4 */
  return;
}

