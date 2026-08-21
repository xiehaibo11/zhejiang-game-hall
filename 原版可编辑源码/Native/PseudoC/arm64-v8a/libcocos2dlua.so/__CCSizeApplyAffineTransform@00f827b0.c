
/* cocos2d::__CCSizeApplyAffineTransform(cocos2d::Size const&, cocos2d::AffineTransform const&) */

void __thiscall
cocos2d::__CCSizeApplyAffineTransform(cocos2d *this,Size *param_1,AffineTransform *param_2)

{
  Size *in_x8;
  
  Size::Size(in_x8);
  *(ulong *)in_x8 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * *(float *)this +
                (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * *(float *)(this + 4),
                (float)*(undefined8 *)param_1 * *(float *)this +
                (float)*(undefined8 *)(param_1 + 8) * *(float *)(this + 4));
  return;
}

