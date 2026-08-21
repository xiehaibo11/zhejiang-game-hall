
/* cocos2d::NinePatchImageParser::setSpriteFrameInfo(cocos2d::Image*, cocos2d::Rect const&, bool) */

void __thiscall
cocos2d::NinePatchImageParser::setSpriteFrameInfo
          (NinePatchImageParser *this,Image *param_1,Rect *param_2,bool param_3)

{
  *(Image **)(this + 8) = param_1;
  Rect::operator=((Rect *)(this + 0x10),param_2);
  this[0x20] = (NinePatchImageParser)param_3;
  return;
}

