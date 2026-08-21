
/* cocos2d::Rect::equals(cocos2d::Rect const&) const */

bool __thiscall cocos2d::Rect::equals(Rect *this,Rect *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Vec2::equals((Vec2 *)this,(Vec2 *)param_1);
  if (((uVar2 & 1) == 0) || (1.1920929e-07 <= ABS(*(float *)(this + 8) - *(float *)(param_1 + 8))))
  {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(*(float *)(this + 0xc) - *(float *)(param_1 + 0xc)) < 1.1920929e-07;
  }
  return bVar1;
}

