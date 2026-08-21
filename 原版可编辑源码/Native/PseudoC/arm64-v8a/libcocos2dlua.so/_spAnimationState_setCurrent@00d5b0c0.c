
void _spAnimationState_setCurrent(long param_1,uint param_2,long param_3,int param_4)

{
  void *__dest;
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  if ((int)param_2 < *(int *)(param_1 + 8)) {
    uVar1 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + uVar1);
    *(long *)(*(long *)(param_1 + 0x10) + uVar1) = param_3;
    if (lVar2 != 0) {
      if (param_4 != 0) {
        _spEventQueue_interrupt(*(undefined8 *)(param_1 + 0x48),lVar2);
      }
      *(long *)(param_3 + 0x10) = lVar2;
      *(undefined4 *)(param_3 + 0x60) = 0;
      if ((*(long *)(lVar2 + 0x10) != 0) && (0.0 < *(float *)(lVar2 + 100))) {
        fVar3 = *(float *)(lVar2 + 0x60) / *(float *)(lVar2 + 100);
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        *(float *)(param_3 + 0x68) = *(float *)(param_3 + 0x68) * fVar3;
      }
      *(undefined4 *)(lVar2 + 0x88) = 0;
    }
  }
  else {
    __dest = (void *)_spCalloc((long)(int)(param_2 + 1),8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x2f3);
    memcpy(__dest,*(void **)(param_1 + 0x10),(long)*(int *)(param_1 + 8) << 3);
    _spFree(*(void **)(param_1 + 0x10));
    *(void **)(param_1 + 0x10) = __dest;
    *(uint *)(param_1 + 8) = param_2 + 1;
    *(long *)((long)__dest + (long)(int)param_2 * 8) = param_3;
  }
  _spEventQueue_start(*(undefined8 *)(param_1 + 0x48),param_3);
  return;
}

