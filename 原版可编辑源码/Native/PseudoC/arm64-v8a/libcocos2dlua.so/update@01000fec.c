
/* cocos2d::PhysicsBody::update(float) */

void __thiscall cocos2d::PhysicsBody::update(PhysicsBody *this,float param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  if (((this[0xb0] != (PhysicsBody)0x0) && (this[0x90] != (PhysicsBody)0x0)) &&
     (cVar1 = cpBodyIsSleeping(*(undefined8 *)(this + 0x88)), cVar1 == '\0')) {
    lVar2 = *(long *)(this + 0x88);
    fVar3 = 1.0 - *(float *)(this + 0xb4) * param_1;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(fVar3,0x3f800000);
    *(ulong *)(lVar2 + 0x30) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20) * fVar3,
                  (float)*(undefined8 *)(lVar2 + 0x30) * fVar3);
    fVar3 = 1.0 - *(float *)(this + 0xb8) * param_1;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = (float)NEON_fminnm(fVar3,0x3f800000);
    *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) * fVar3;
  }
  return;
}

