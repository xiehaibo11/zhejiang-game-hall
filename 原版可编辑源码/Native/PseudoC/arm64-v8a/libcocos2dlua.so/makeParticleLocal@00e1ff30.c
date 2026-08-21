
/* cocos2d::PUParticleSystem3D::makeParticleLocal(cocos2d::PUParticle3D*) */

undefined8 __thiscall
cocos2d::PUParticleSystem3D::makeParticleLocal(PUParticleSystem3D *this,PUParticle3D *param_1)

{
  if (param_1 != (PUParticle3D *)0x0) {
    if (this[0x378] == (PUParticleSystem3D)0x0) {
      return 0;
    }
                    /* try { // try from 00e1ff44 to 00f1ff4f has its CatchHandler @ 00e20610 */
                    /* try { // try from 00e1ff50 to 00f1ff5b has its CatchHandler @ 00e205f0 */
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x494) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                  (float)*(undefined8 *)(this + 0x494) + (float)*(undefined8 *)(param_1 + 8));
                    /* try { // try from 00e1ff5c to 00f200e7 has its CatchHandler @ 00e1fd8c */
    *(float *)(param_1 + 0x10) = *(float *)(this + 0x49c) + *(float *)(param_1 + 0x10);
  }
  return 1;
}

