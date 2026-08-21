
void spBone_create(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)_spCalloc(1,0x80,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Bone.c"
                             ,0x2d);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  plVar1[2] = param_3;
  *(undefined4 *)((long)plVar1 + 100) = 0x3f800000;
  *(undefined4 *)((long)plVar1 + 0x74) = 0x3f800000;
  lVar2 = *(long *)(param_1 + 0x1c);
  plVar1[6] = *(long *)(param_1 + 0x24);
  plVar1[5] = lVar2;
  *(undefined4 *)(plVar1 + 7) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((long)plVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(plVar1 + 8) = *(undefined4 *)(param_1 + 0x34);
  return;
}

