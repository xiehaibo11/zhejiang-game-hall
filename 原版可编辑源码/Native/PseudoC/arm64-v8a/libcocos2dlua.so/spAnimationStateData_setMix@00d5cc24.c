
void spAnimationStateData_setMix(undefined4 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x10);
  do {
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)_spCalloc(1,0x18,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                                 ,0x3e);
      *plVar2 = param_3;
      plVar2[2] = *(long *)(param_2 + 0x10);
      *(long **)(param_2 + 0x10) = plVar2;
LAB_00d5cc90:
      plVar1 = (long *)_spCalloc(1,0x18,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                                 ,0x2a);
      *plVar1 = param_4;
      *(undefined4 *)(plVar1 + 1) = param_1;
      plVar1[2] = plVar2[1];
      plVar2[1] = (long)plVar1;
      return;
    }
    if (*plVar2 == param_3) {
      for (plVar1 = (long *)plVar2[1]; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
        if (*plVar1 == param_4) {
          *(undefined4 *)(plVar1 + 1) = param_1;
          return;
        }
      }
      goto LAB_00d5cc90;
    }
    plVar2 = (long *)plVar2[2];
  } while( true );
}

