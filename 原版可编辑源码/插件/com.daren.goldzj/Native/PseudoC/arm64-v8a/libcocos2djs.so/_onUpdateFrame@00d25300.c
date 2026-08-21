
/* dragonBones::SlotColorTimelineState::_onUpdateFrame() */

void __thiscall dragonBones::SlotColorTimelineState::_onUpdateFrame(SlotColorTimelineState *this)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
  this[0xc0] = (SlotColorTimelineState)0x1;
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  piVar1 = *(int **)(this + 200);
  piVar2 = *(int **)(this + 0xd0);
  pfVar3 = *(float **)(this + 0xd8);
  *pfVar3 = (*(float *)(this + 0xb0) * (float)*piVar2 + (float)*piVar1) * 0.01;
  pfVar3[1] = (*(float *)(this + 0xb0) * (float)piVar2[1] + (float)piVar1[1]) * 0.01;
  pfVar3[2] = (*(float *)(this + 0xb0) * (float)piVar2[2] + (float)piVar1[2]) * 0.01;
  pfVar3[3] = (*(float *)(this + 0xb0) * (float)piVar2[3] + (float)piVar1[3]) * 0.01;
  pfVar3[4] = *(float *)(this + 0xb0) * (float)piVar2[4] + (float)piVar1[4];
  pfVar3[5] = *(float *)(this + 0xb0) * (float)piVar2[5] + (float)piVar1[5];
  pfVar3[6] = *(float *)(this + 0xb0) * (float)piVar2[6] + (float)piVar1[6];
  pfVar3[7] = *(float *)(this + 0xb0) * (float)piVar2[7] + (float)piVar1[7];
  return;
}

