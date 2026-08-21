
undefined8 spAnimationState_getCurrent(long param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 8)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8);
  }
  return 0;
}

