
/* cocos2d::Color4F::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color3B const&) const */

bool __thiscall cocos2d::Color4F::operator!=(Color4F *this,Color3B *param_1)

{
  if (((*(float *)(this + 0xc) == 1.0) && ((uint)(byte)*param_1 == (int)(*(float *)this * 255.0)))
     && ((uint)(byte)param_1[1] == (int)(*(float *)(this + 4) * 255.0))) {
    return (uint)(byte)param_1[2] != (int)(*(float *)(this + 8) * 255.0);
  }
  return true;
}

