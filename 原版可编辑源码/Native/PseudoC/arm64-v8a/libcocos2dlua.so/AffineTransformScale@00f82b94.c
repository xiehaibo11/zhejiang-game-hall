
/* cocos2d::AffineTransformScale(cocos2d::AffineTransform const&, float, float) */

void __thiscall
cocos2d::AffineTransformScale(cocos2d *this,AffineTransform *param_1,float param_2,float param_3)

{
  undefined8 *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)this;
  uVar1 = *(undefined8 *)(this + 0x10);
  in_x8[1] = CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * param_3,
                      (float)*(undefined8 *)(this + 8) * param_3);
  *in_x8 = CONCAT44((float)((ulong)uVar2 >> 0x20) * param_2,(float)uVar2 * param_2);
  in_x8[2] = uVar1;
  return;
}

