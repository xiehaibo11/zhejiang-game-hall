
/* cocos_audioengine_focus_change(int) */

void cocos_audioengine_focus_change(int param_1)

{
  long *plVar1;
  
  if (((uint)param_1 < 4) && (DAT_0178f248 = param_1, DAT_0178f240 != 0)) {
    plVar1 = *(long **)(DAT_0178f240 + 0x50);
    if (param_1 == 0) {
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        (**(code **)(*(long *)plVar1[3] + 0x68))((long *)plVar1[3],1);
      }
    }
    else {
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        (**(code **)(*(long *)plVar1[3] + 0x68))((long *)plVar1[3],0);
      }
    }
  }
  return;
}

