
/* cocos2d::OrbitCamera::update(float) */

void __thiscall cocos2d::OrbitCamera::update(OrbitCamera *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  fVar3 = *(float *)(this + 0x9c);
  fVar2 = *(float *)(this + 0xa0);
  fVar1 = (*(float *)(this + 0x7c) + *(float *)(this + 0x80) * param_1) * 1.1920929e-07;
  sincosf(*(float *)(this + 0x94) + *(float *)(this + 0x98) * param_1,&fStack_3c,&local_40);
  sincosf(fVar3 + fVar2 * param_1,&local_34,&local_38);
  *(float *)(this + 0x6c) = fVar1 * local_40 + *(float *)(this + 0x60);
  *(ulong *)(this + 100) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) + local_34 * fStack_3c * fVar1,
                (float)*(undefined8 *)(this + 0x58) + local_38 * fStack_3c * fVar1);
  ActionCamera::updateTransform((ActionCamera *)this);
  return;
}

