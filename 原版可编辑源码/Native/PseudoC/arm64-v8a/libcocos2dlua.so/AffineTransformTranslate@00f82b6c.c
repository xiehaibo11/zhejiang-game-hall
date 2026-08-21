
/* cocos2d::AffineTransformTranslate(cocos2d::AffineTransform const&, float, float) */

void __thiscall
cocos2d::AffineTransformTranslate
          (cocos2d *this,AffineTransform *param_1,float param_2,float param_3)

{
  undefined8 *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)(this + 8);
  uVar3 = *(undefined8 *)(this + 0x10);
  in_x8[1] = uVar2;
  *in_x8 = uVar1;
  in_x8[2] = CONCAT44((float)((ulong)uVar2 >> 0x20) * param_3 +
                      (float)((ulong)uVar1 >> 0x20) * param_2 + (float)((ulong)uVar3 >> 0x20),
                      (float)uVar2 * param_3 + (float)uVar1 * param_2 + (float)uVar3);
  return;
}

