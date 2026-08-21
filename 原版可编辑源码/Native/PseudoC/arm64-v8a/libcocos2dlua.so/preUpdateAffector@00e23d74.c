
/* cocos2d::PUBoxCollider::preUpdateAffector(float) */

void __thiscall cocos2d::PUBoxCollider::preUpdateAffector(PUBoxCollider *this,float param_1)

{
  Vec3 *pVVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  PUBaseCollider::preUpdateAffector((PUBaseCollider *)this,param_1);
  pVVar1 = (Vec3 *)PUAffector::getDerivedPosition();
  PUBaseCollider::populateAlignedBox
            ((PUBaseCollider *)this,(AABB *)(this + 0xe4),pVVar1,
             *(float *)(this + 0x40) * *(float *)(this + 0xc0),
             *(float *)(this + 0x44) * *(float *)(this + 0xc4),
             *(float *)(this + 0x48) * *(float *)(this + 200));
  fVar2 = (float)*(undefined8 *)(this + 0x40) * (float)*(undefined8 *)(this + 0xc0) * 0.5;
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) *
          (float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20) * 0.5;
  fVar4 = *(float *)(this + 0x48) * *(float *)(this + 200) * 0.5;
  fVar5 = (float)*(undefined8 *)(this + 0x4c);
                    /* try { // try from 00e23df4 to 00f23e37 has its CatchHandler @ 00e23df4
                       catch() { ... } // from try @ 00e23df4 with catch @ 00e23df4
                       catch() { ... } // from try @ 00e23fa8 with catch @ 00e23df4
                       catch() { ... } // from try @ 00e2402c with catch @ 00e23df4
                       catch() { ... } // from try @ 00e240a8 with catch @ 00e23df4
                       catch() { ... } // from try @ 00e24194 with catch @ 00e23df4 */
  *(float *)(this + 0xcc) = fVar5 - fVar2;
  fVar6 = (float)((ulong)*(undefined8 *)(this + 0x4c) >> 0x20);
  *(ulong *)(this + 0xd0) = CONCAT44(fVar6 - fVar3,fVar5 + fVar2);
  *(float *)(this + 0xd8) = fVar3 + fVar6;
  *(float *)(this + 0xdc) = *(float *)(this + 0x54) - fVar4;
  *(float *)(this + 0xe0) = fVar4 + *(float *)(this + 0x54);
  return;
}

