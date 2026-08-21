
undefined8 _spAnimationState_resizeTimelinesRotation(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x88) == param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    uVar1 = _spCalloc((long)param_2,4,
                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                      ,0x339);
    _spFree(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(int *)(param_1 + 0x88) = param_2;
  }
                    /* try { // try from 00d5ba0c to 00e5ba23 has its CatchHandler @ 00d5c2b4 */
  return uVar1;
}

