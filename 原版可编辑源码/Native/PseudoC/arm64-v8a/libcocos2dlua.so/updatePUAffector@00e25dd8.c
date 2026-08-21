
/* cocos2d::PUForceFieldAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUForceFieldAffector::updatePUAffector
          (PUForceFieldAffector *this,PUParticle3D *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00e259cc with catch @ 00e25de4
                       catch() { ... } // from try @ 00e25c34 with catch @ 00e25de4 */
                    /* catch() { ... } // from try @ 00e259ac with catch @ 00e25de8 */
  PUForceField::determineForce((Vec3 *)(this + 0xb0),(Vec3 *)(param_1 + 8),*(float *)(this + 0x104))
  ;
  if (this[0x149] != (PUForceFieldAffector)0x0) {
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (this[0x14a] != (PUForceFieldAffector)0x0) {
    *(undefined4 *)(this + 0x10c) = 0;
  }
                    /* catch() { ... } // from try @ 00e25a48 with catch @ 00e25e28 */
  if (this[0x14b] == (PUForceFieldAffector)0x0) {
    fVar1 = *(float *)(this + 0x110);
  }
  else {
    fVar1 = 0.0;
    *(undefined4 *)(this + 0x110) = 0;
  }
  fVar2 = *(float *)(this + 0x114) * param_2;
  *(ulong *)(param_1 + 0xac) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x108) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20),
                (float)*(undefined8 *)(this + 0x108) * fVar2 +
                (float)*(undefined8 *)(param_1 + 0xac));
  *(float *)(param_1 + 0xb4) = fVar2 * fVar1 + *(float *)(param_1 + 0xb4);
  return;
}

