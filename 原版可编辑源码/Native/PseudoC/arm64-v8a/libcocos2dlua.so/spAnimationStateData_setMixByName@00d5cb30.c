
void spAnimationStateData_setMixByName
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = spSkeletonData_findAnimation(*param_2);
                    /* catch() { ... } // from try @ 00d5caf4 with catch @ 00d5cb68 */
  if ((lVar1 != 0) && (lVar2 = spSkeletonData_findAnimation(*param_2,param_4), lVar2 != 0)) {
    plVar4 = (long *)param_2[2];
joined_r0x00d5cb78:
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)_spCalloc(1,0x18,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                                 ,0x3e);
      *plVar4 = lVar1;
      plVar4[2] = param_2[2];
      param_2[2] = plVar4;
    }
    else {
      if (*plVar4 != lVar1) goto code_r0x00d5cb88;
      for (plVar3 = (long *)plVar4[1]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
        if (*plVar3 == lVar2) {
          *(undefined4 *)(plVar3 + 1) = param_1;
          return;
        }
      }
    }
    plVar3 = (long *)_spCalloc(1,0x18,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                               ,0x2a);
    *plVar3 = lVar2;
    *(undefined4 *)(plVar3 + 1) = param_1;
    plVar3[2] = plVar4[1];
    plVar4[1] = (long)plVar3;
  }
  return;
code_r0x00d5cb88:
  plVar4 = (long *)plVar4[2];
  goto joined_r0x00d5cb78;
}

