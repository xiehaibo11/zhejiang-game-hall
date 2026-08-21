
/* cocos2d::Vec4::negate() */

void __thiscall cocos2d::Vec4::negate(Vec4 *this)

{
  *(ulong *)(this + 8) =
       CONCAT44(-(float)((ulong)*(undefined8 *)(this + 8) >> 0x20),-(float)*(undefined8 *)(this + 8)
               );
  *(ulong *)this =
       CONCAT44(-(float)((ulong)*(undefined8 *)this >> 0x20),-(float)*(undefined8 *)this);
  return;
}

