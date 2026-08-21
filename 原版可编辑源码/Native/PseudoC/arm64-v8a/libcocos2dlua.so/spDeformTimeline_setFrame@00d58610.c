
void spDeformTimeline_setFrame(undefined4 param_1,long param_2,int param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined4 *)(*(long *)(param_2 + 0x20) + (long)param_3 * 4) = param_1;
  _spFree(*(void **)(*(long *)(param_2 + 0x30) + (long)param_3 * 8));
  if (param_4 != (void *)0x0) {
    uVar1 = _spMalloc((long)*(int *)(param_2 + 0x28) << 2,
                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                      ,0x3de);
    lVar2 = (long)param_3 * 8;
    *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar2) = uVar1;
    memcpy(*(void **)(*(long *)(param_2 + 0x30) + lVar2),param_4,(long)*(int *)(param_2 + 0x28) << 2
          );
    return;
  }
  *(undefined8 *)(*(long *)(param_2 + 0x30) + (long)param_3 * 8) = 0;
  return;
}

