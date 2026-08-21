
/* cocos2d::NinePatchImageParser::getFrameWidth() const */

int __thiscall cocos2d::NinePatchImageParser::getFrameWidth(NinePatchImageParser *this)

{
  long lVar1;
  
  lVar1 = 0x18;
  if (this[0x20] != (NinePatchImageParser)0x0) {
    lVar1 = 0x1c;
  }
  return (int)*(float *)(this + lVar1);
}

