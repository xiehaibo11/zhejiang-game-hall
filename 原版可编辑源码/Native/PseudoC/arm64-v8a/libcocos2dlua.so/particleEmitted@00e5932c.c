
/* non-virtual thunk to cocos2d::PUBeamRender::particleEmitted(cocos2d::PUParticleSystem3D*,
   cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUBeamRender::particleEmitted
          (PUBeamRender *this,PUParticleSystem3D *param_1,PUParticle3D *param_2)

{
  PUParticle3DBeamVisualData *this_00;
  float fVar1;
  float fVar2;
  
  if (((*(long *)(param_2 + 0x88) == 0) && (*(long *)(this + 0x58) != *(long *)(this + 0x60))) &&
     (*(int *)(param_2 + 0x90) == 0)) {
    this_00 = *(PUParticle3DBeamVisualData **)(*(long *)(this + 0x60) + -8);
    *(PUParticle3DBeamVisualData **)(param_2 + 0x88) = this_00;
    fVar2 = *(float *)(this + -0x2c);
    fVar1 = (float)PUParticleSystem3D::getDefaultWidth(param_1);
    PUParticle3DBeamVisualData::setVisible(this_00,true,fVar2 * fVar1);
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + -8;
  }
  return;
}

