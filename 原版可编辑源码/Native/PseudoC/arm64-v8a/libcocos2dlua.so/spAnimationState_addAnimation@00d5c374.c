
long spAnimationState_addAnimation
               (float param_1,undefined8 *param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 00d5c3a8 to 00e5c3b3 has its CatchHandler @ 00d5c3f8 */
  if (param_3 < *(int *)(param_2 + 1)) {
    puVar2 = *(undefined8 **)(param_2[2] + (long)param_3 * 8);
                    /* try { // try from 00d5c3b4 to 00e5c413 has its CatchHandler @ 00d5c34c */
    if (puVar2 != (undefined8 *)0x0) {
      do {
        puVar3 = puVar2;
        puVar2 = (undefined8 *)puVar3[1];
      } while ((undefined8 *)puVar3[1] != (undefined8 *)0x0);
      lVar1 = _spAnimationState_trackEntry(param_2,param_3,param_4,param_5,puVar3);
      puVar3[1] = lVar1;
      if (param_1 <= 0.0) {
        fVar4 = *(float *)(puVar3 + 7) - *(float *)((long)puVar3 + 0x34);
                    /* catch() { ... } // from try @ 00d5c3a8 with catch @ 00d5c3f8 */
        if (fVar4 == 0.0) {
          param_1 = 0.0;
        }
        else {
          fVar6 = *(float *)(puVar3 + 9);
                    /* catch() { ... } // from try @ 00d5c488 with catch @ 00d5c414 */
          fVar5 = (float)spAnimationStateData_getMix(*param_2,*puVar3,param_4);
          param_1 = (fVar4 * (float)((int)(fVar6 / fVar4) + 1) - fVar5) + param_1;
        }
      }
      goto LAB_00d5c4a8;
    }
  }
  else {
                    /* try { // try from 00d5c444 to 00e5c44b has its CatchHandler @ 00d5c4d0 */
    __dest = (void *)_spCalloc((long)(param_3 + 1),8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x2f3);
    memcpy(__dest,(void *)param_2[2],(long)*(int *)(param_2 + 1) << 3);
                    /* try { // try from 00d5c464 to 00e5c487 has its CatchHandler @ 00d5c4d8 */
    _spFree((void *)param_2[2]);
    param_2[2] = __dest;
    *(int *)(param_2 + 1) = param_3 + 1;
  }
  lVar1 = _spAnimationState_trackEntry(param_2,param_3,param_4,param_5,0);
                    /* try { // try from 00d5c488 to 00e5c4fb has its CatchHandler @ 00d5c414 */
  _spAnimationState_setCurrent(param_2,param_3,lVar1,1);
  _spEventQueue_drain(param_2[9]);
LAB_00d5c4a8:
  *(float *)(lVar1 + 0x44) = param_1;
  return lVar1;
}

