
/* cocos2d::AffineTransformRotate(cocos2d::AffineTransform const&, float) */

void __thiscall cocos2d::AffineTransformRotate(cocos2d *this,AffineTransform *param_1,float param_2)

{
  undefined8 *in_x8;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  
  sincosf(param_2,&fStack_24,&local_28);
  uVar1 = *(undefined8 *)(this + 0x10);
  fVar2 = (float)*(undefined8 *)this;
  fVar3 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar4 = (float)*(undefined8 *)(this + 8);
  fVar5 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  *in_x8 = CONCAT44(fVar3 * local_28 + fVar5 * fStack_24,fVar2 * local_28 + fVar4 * fStack_24);
  in_x8[1] = CONCAT44(fVar5 * local_28 - fVar3 * fStack_24,fVar4 * local_28 - fVar2 * fStack_24);
  in_x8[2] = uVar1;
  return;
}

