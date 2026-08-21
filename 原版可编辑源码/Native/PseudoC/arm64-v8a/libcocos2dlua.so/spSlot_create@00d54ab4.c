
long * spSlot_create(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)_spCalloc(1,0x48,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Slot.c"
                             ,0x28);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  spColor_setFromFloats(0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1 + 2);
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = spColor_create();
  }
  plVar1[4] = lVar2;
  spSlot_setToSetupPose(plVar1);
  return plVar1;
}

