
/* cocos2d::PUBaseCollider::calculateRotationSpeedAfterCollision(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUBaseCollider::calculateRotationSpeedAfterCollision
          (PUBaseCollider *this,PUParticle3D *param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar1 = rand();
                    /* try { // try from 00e4aa70 to 00f4aa77 has its CatchHandler @ 00e4aafc */
    fVar2 = -(*(float *)(this + 0xac) + -1.0);
    if ((float)iVar1 * 4.656613e-10 <= 0.5) {
      fVar2 = *(float *)(this + 0xac) + -1.0;
    }
    *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * fVar2;
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xec) * fVar2;
  }
  return;
}

