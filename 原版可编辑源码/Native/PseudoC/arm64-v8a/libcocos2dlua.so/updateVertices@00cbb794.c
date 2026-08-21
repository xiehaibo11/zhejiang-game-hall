
/* cocostudio::timeline::SkeletonNode::updateVertices() */

void __thiscall cocostudio::timeline::SkeletonNode::updateVertices(SkeletonNode *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(this + 0x70);
  if (*(float *)(this + 0x498) - fVar1 == (float)*(int *)(this + 0x36c)) {
    fVar2 = *(float *)(this + 0x74);
    if (*(float *)(this + 0x484) - fVar2 == (float)*(int *)(this + 0x370)) {
      return;
    }
  }
  else {
    fVar2 = *(float *)(this + 0x74);
  }
  fVar3 = (float)*(int *)(this + 0x36c) * 0.5;
  fVar4 = (float)*(int *)(this + 0x370) * 0.5;
  fVar5 = fVar1 + 0.0;
  fVar6 = fVar2 + 0.0;
  *(float *)(this + 0x468) = fVar5;
  *(float *)(this + 0x474) = fVar6;
  *(float *)(this + 0x47c) = fVar6;
  *(float *)(this + 0x480) = fVar5;
  *(float *)(this + 0x488) = fVar5;
  *(float *)(this + 0x494) = fVar6;
  *(float *)(this + 0x49c) = fVar6;
  *(float *)(this + 0x4a0) = fVar5;
  *(float *)(this + 0x484) = fVar2 + fVar4;
  this[0x88] = (SkeletonNode)0x1;
  this[0x150] = (SkeletonNode)0x1;
  this[0x10c] = (SkeletonNode)0x1;
  *(float *)(this + 0x46c) = fVar2 - fVar4;
  *(float *)(this + 0x490) = fVar1 - fVar3;
  *(float *)(this + 0x498) = fVar1 + fVar3;
  *(float *)(this + 0x470) = fVar1 + fVar3 * 0.25;
  *(float *)(this + 0x478) = fVar1 - fVar3 * 0.25;
  *(float *)(this + 0x48c) = fVar2 - fVar4 * 0.25;
  *(float *)(this + 0x4a4) = fVar2 + fVar4 * 0.25;
  this[0x161] = (SkeletonNode)0x1;
  return;
}

