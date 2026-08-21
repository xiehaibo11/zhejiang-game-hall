
/* cocos2d::PUEmitter::makeParticleLocal(cocos2d::PUParticle3D*) */

undefined8 __thiscall cocos2d::PUEmitter::makeParticleLocal(PUEmitter *this,PUParticle3D *param_1)

{
  if (param_1 != (PUParticle3D *)0x0) {
    if (this[0x1dd] == (PUEmitter)0x0) {
      return 0;
    }
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                  (float)*(undefined8 *)(this + 0x50) + (float)*(undefined8 *)(param_1 + 8));
    *(float *)(param_1 + 0x10) = *(float *)(this + 0x58) + *(float *)(param_1 + 0x10);
  }
  return 1;
}

