
/* spine::AnimationState::updateMixingFrom(spine::TrackEntry*, float) */

uint __thiscall
spine::AnimationState::updateMixingFrom(AnimationState *this,TrackEntry *param_1,float param_2)

{
  uint uVar1;
  TrackEntry *pTVar2;
  float fVar3;
  
  pTVar2 = *(TrackEntry **)(param_1 + 0x30);
  if (pTVar2 == (TrackEntry *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = updateMixingFrom(this,pTVar2,param_2);
    *(undefined4 *)(pTVar2 + 0x5c) = *(undefined4 *)(pTVar2 + 0x60);
    *(undefined4 *)(pTVar2 + 0x6c) = *(undefined4 *)(pTVar2 + 0x70);
    fVar3 = *(float *)(param_1 + 0x80);
    if ((fVar3 <= 0.0) || (fVar3 < *(float *)(param_1 + 0x84))) {
      uVar1 = 0;
      *(float *)(pTVar2 + 0x68) = *(float *)(pTVar2 + 0x68) + *(float *)(pTVar2 + 0x78) * param_2;
      *(float *)(param_1 + 0x80) = fVar3 + param_2;
    }
    else if ((*(float *)(param_1 + 0x84) == 0.0) || (*(float *)(pTVar2 + 0x8c) == 0.0)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(pTVar2 + 0x30);
      if (*(long *)(pTVar2 + 0x30) != 0) {
        *(TrackEntry **)(*(long *)(pTVar2 + 0x30) + 0x38) = param_1;
      }
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(pTVar2 + 0x88);
      EventQueue::end(*(EventQueue **)(this + 0x90),pTVar2);
    }
  }
  return uVar1 & 1;
}

