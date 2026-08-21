
/* cocostudio::timeline::BoneNode::updateVertices() */

void __thiscall cocostudio::timeline::BoneNode::updateVertices(BoneNode *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(this + 0x70);
  fVar4 = (float)*(int *)(this + 0x36c);
  if (*(float *)(this + 0x3c0) - fVar3 == fVar4) {
    iVar2 = *(int *)(this + 0x370);
    fVar5 = *(float *)(this + 0x74);
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar2 + 1;
    }
    if (*(float *)(this + 0x3cc) == (float)(iVar1 >> 1) - fVar5) {
      return;
    }
  }
  else {
    iVar2 = *(int *)(this + 0x370);
    fVar5 = *(float *)(this + 0x74);
  }
  *(float *)(this + 0x3c8) = fVar3 + fVar4;
  fVar4 = fVar3 + fVar4 * 0.1;
  this[0x88] = (BoneNode)0x1;
  this[0x150] = (BoneNode)0x1;
  this[0x10c] = (BoneNode)0x1;
  *(float *)(this + 0x3b8) = fVar3 + 0.0;
  *(float *)(this + 0x3bc) = fVar5 + 0.0;
  *(float *)(this + 0x3cc) = fVar5 + 0.0;
  *(float *)(this + 0x3b0) = fVar4;
  *(float *)(this + 0x3b4) = fVar5 - (float)iVar2 * 0.5;
  *(float *)(this + 0x3c0) = fVar4;
  *(float *)(this + 0x3c4) = fVar5 + (float)iVar2 * 0.5;
  this[0x161] = (BoneNode)0x1;
  return;
}

