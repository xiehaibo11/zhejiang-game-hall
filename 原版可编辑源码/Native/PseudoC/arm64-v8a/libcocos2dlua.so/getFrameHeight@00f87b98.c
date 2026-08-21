
/* cocos2d::NinePatchImageParser::getFrameHeight() const */

int __thiscall cocos2d::NinePatchImageParser::getFrameHeight(NinePatchImageParser *this)

{
  long lVar1;
  
  lVar1 = 0x1c;
  if (this[0x20] != (NinePatchImageParser)0x0) {
    lVar1 = 0x18;
  }
  return (int)*(float *)(this + lVar1);
}

