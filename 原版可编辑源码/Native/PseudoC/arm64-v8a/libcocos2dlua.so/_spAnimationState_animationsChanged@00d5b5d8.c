
void _spAnimationState_animationsChanged(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (0 < (int)uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      if (lVar2 != 0) {
        _spTrackEntry_setTimelineData(lVar2,0,uVar3,param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}

