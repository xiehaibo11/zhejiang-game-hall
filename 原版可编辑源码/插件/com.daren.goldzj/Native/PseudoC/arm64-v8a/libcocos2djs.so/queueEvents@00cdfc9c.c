
/* spine::AnimationState::queueEvents(spine::TrackEntry*, float) */

void __thiscall
spine::AnimationState::queueEvents(AnimationState *this,TrackEntry *param_1,float param_2)

{
  Event *pEVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0x54);
  fVar8 = *(float *)(param_1 + 0x58);
  fVar6 = fVar8 - fVar7;
  fVar4 = (float)MathUtil::fmod(*(float *)(param_1 + 0x6c),fVar6);
  uVar2 = *(ulong *)(this + 0x78);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      pEVar1 = *(Event **)(*(long *)(this + 0x88) + uVar3 * 8);
      fVar5 = *(float *)(pEVar1 + 0x10);
      if (fVar5 < fVar4) break;
      if (fVar5 <= fVar8) {
        EventQueue::event(*(EventQueue **)(this + 0x90),param_1,pEVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (param_1[0x44] == (TrackEntry)0x0) {
    if ((param_2 < fVar8) || (fVar8 <= *(float *)(param_1 + 0x5c))) goto LAB_00cdfd64;
  }
  else if ((fVar6 != 0.0) &&
          (fVar6 = (float)MathUtil::fmod(*(float *)(param_1 + 0x68),fVar6), fVar4 <= fVar6))
  goto LAB_00cdfd64;
  EventQueue::complete(*(EventQueue **)(this + 0x90),param_1);
LAB_00cdfd64:
  if (uVar3 < uVar2) {
    do {
      pEVar1 = *(Event **)(*(long *)(this + 0x88) + uVar3 * 8);
      if (fVar7 <= *(float *)(pEVar1 + 0x10)) {
        EventQueue::event(*(EventQueue **)(this + 0x90),param_1,pEVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}

