
/* cocos2d::Color4B::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4F const&) const */

bool __thiscall cocos2d::Color4B::operator!=(Color4B *this,Color4F *param_1)

{
  if ((((uint)(byte)*this == (int)(*(float *)param_1 * 255.0)) &&
      ((uint)(byte)this[1] == (int)(*(float *)(param_1 + 4) * 255.0))) &&
     ((uint)(byte)this[2] == (int)(*(float *)(param_1 + 8) * 255.0))) {
    return (uint)(byte)this[3] != (int)(*(float *)(param_1 + 0xc) * 255.0);
  }
  return true;
}

