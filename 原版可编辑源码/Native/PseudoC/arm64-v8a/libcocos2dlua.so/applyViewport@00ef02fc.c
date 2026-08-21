
/* cocos2d::Camera::applyViewport() */

void __thiscall cocos2d::Camera::applyViewport(Camera *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  glGetIntegerv(0xba2,this + 0x4b8);
  lVar1 = *(long *)(this + 0x4b0);
  fVar2 = _defaultViewport;
  fVar3 = DAT_0178f734;
  fVar4 = DAT_0178f738;
  fVar5 = DAT_0178f73c;
  if (lVar1 != 0) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x48));
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x4c));
    fVar2 = *(float *)(this + 0x4a0) * fVar4;
    fVar3 = *(float *)(this + 0x4a4) * fVar5;
    fVar4 = *(float *)(this + 0x4a8) * fVar4;
    fVar5 = *(float *)(this + 0x4ac) * fVar5;
  }
  glViewport((int)fVar2,(int)fVar3,(int)fVar4,(int)fVar5);
  return;
}

