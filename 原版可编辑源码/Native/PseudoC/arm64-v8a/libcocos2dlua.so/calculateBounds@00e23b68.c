
/* cocos2d::PUBoxCollider::calculateBounds() */

void __thiscall cocos2d::PUBoxCollider::calculateBounds(PUBoxCollider *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)*(undefined8 *)(this + 0x40) * (float)*(undefined8 *)(this + 0xc0) * 0.5;
  fVar2 = (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) *
          (float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20) * 0.5;
  fVar3 = *(float *)(this + 0x48) * *(float *)(this + 200) * 0.5;
  fVar4 = (float)*(undefined8 *)(this + 0x4c);
                    /* try { // try from 00e23ba0 to 00f23bcb has its CatchHandler @ 00e23c38 */
  *(float *)(this + 0xcc) = fVar4 - fVar1;
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x4c) >> 0x20);
  *(ulong *)(this + 0xd0) = CONCAT44(fVar5 - fVar2,fVar4 + fVar1);
  *(float *)(this + 0xd8) = fVar2 + fVar5;
  *(float *)(this + 0xdc) = *(float *)(this + 0x54) - fVar3;
  *(float *)(this + 0xe0) = fVar3 + *(float *)(this + 0x54);
                    /* try { // try from 00e23bcc to 00f23c57 has its CatchHandler @ 00e23858 */
  return;
}

