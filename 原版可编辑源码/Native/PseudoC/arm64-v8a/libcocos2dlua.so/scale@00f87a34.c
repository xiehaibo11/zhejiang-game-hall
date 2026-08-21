
/* cocos2d::Vec4::scale(float) */

void __thiscall cocos2d::Vec4::scale(Vec4 *this,float param_1)

{
  *(ulong *)(this + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * param_1,
                (float)*(undefined8 *)(this + 8) * param_1);
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) * param_1,
                (float)*(undefined8 *)this * param_1);
  return;
}

