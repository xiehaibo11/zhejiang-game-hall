
/* cocos2d::NinePatchImageParser::NinePatchImageParser(cocos2d::Image*, cocos2d::Rect const&, bool)
    */

void __thiscall
cocos2d::NinePatchImageParser::NinePatchImageParser
          (NinePatchImageParser *this,Image *param_1,Rect *param_2,bool param_3)

{
  *(undefined ***)this = &PTR__NinePatchImageParser_01722220;
  *(Image **)(this + 8) = param_1;
  Rect::Rect((Rect *)(this + 0x10),param_2);
  this[0x20] = (NinePatchImageParser)param_3;
  return;
}

