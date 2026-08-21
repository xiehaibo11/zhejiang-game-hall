
/* cocos2d::PUParticle3DQuadRender::determineUVCoords(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUParticle3DQuadRender::determineUVCoords
          (PUParticle3DQuadRender *this,PUParticle3D *param_1)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(ushort *)(this + 0x106);
  if ((uVar1 == 1) && (*(ushort *)(this + 0x104) == 1)) {
    return;
  }
  fVar3 = *(float *)(this + 0x10c);
  fVar4 = *(float *)(this + 0x108);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x144) / (uint)uVar1;
  }
  fVar5 = fVar3 * (float)((uint)*(ushort *)(param_1 + 0x144) - uVar2 * uVar1 & 0xffff);
  fVar6 = fVar4 * (float)((uint)*(ushort *)(this + 0x104) + ~uVar2 & 0xffff);
  *(float *)(param_1 + 0x34) = fVar5;
  *(float *)(param_1 + 0x38) = fVar6;
  *(float *)(param_1 + 0x3c) = fVar3 + fVar5;
  *(float *)(param_1 + 0x40) = fVar4 + fVar6;
  return;
}

