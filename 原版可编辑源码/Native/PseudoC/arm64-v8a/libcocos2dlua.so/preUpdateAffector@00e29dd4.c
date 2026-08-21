
/* cocos2d::PULinearForceAffector::preUpdateAffector(float) */

void __thiscall
cocos2d::PULinearForceAffector::preUpdateAffector(PULinearForceAffector *this,float param_1)

{
  *(ulong *)(this + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20) * param_1,
                (float)*(undefined8 *)(this + 0xac) * param_1);
  *(float *)(this + 0xc0) = *(float *)(this + 0xb4) * param_1;
  return;
}

