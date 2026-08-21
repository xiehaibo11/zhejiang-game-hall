
/* cocos2d::Quaternion::conjugate() */

void __thiscall cocos2d::Quaternion::conjugate(Quaternion *this)

{
  *(ulong *)this =
       CONCAT44(-(float)((ulong)*(undefined8 *)this >> 0x20),-(float)*(undefined8 *)this);
  *(float *)(this + 8) = -*(float *)(this + 8);
  return;
}

