
/* cocos2d::PULineAffector::preUpdateAffector(float) */

void __thiscall cocos2d::PULineAffector::preUpdateAffector(PULineAffector *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
                    /* catch() { ... } // from try @ 00e2954c with catch @ 00e29444
                       catch() { ... } // from try @ 00e2972c with catch @ 00e29444
                       catch() { ... } // from try @ 00e2988c with catch @ 00e29444
                       catch() { ... } // from try @ 00e29a8c with catch @ 00e29444 */
  iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x560))();
  if (0 < iVar1) {
    fVar3 = *(float *)(this + 0xc4);
    fVar2 = *(float *)(this + 0xc0) + param_1;
    *(float *)(this + 0xc0) = fVar2;
    if (fVar3 < fVar2) {
      this[0xd0] = (PULineAffector)0x1;
      do {
        fVar2 = fVar2 - fVar3;
      } while (fVar3 < fVar2);
      *(float *)(this + 0xc0) = fVar2;
    }
  }
  PUParticleSystem3D::rotationOffset(*(PUParticleSystem3D **)(this + 0x28),(Vec3 *)(this + 0xb4));
  return;
}

