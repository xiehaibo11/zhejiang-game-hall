
/* fairygui::FUIInput::applyTextFormat() */

void __thiscall fairygui::FUIInput::applyTextFormat(FUIInput *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)UIConfig::getRealFontName(*(basic_string **)(this + 0x5d0),(bool *)0x0);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
  cocos2d::ui::EditBox::setFontName((EditBox *)this,(char *)pbVar2);
  cocos2d::ui::EditBox::setFontSize((EditBox *)this,(int)*(float *)(*(long *)(this + 0x5d0) + 0x18))
  ;
  cocos2d::ui::EditBox::setPlaceholderFontSize
            ((EditBox *)this,(int)*(float *)(*(long *)(this + 0x5d0) + 0x18));
  cocos2d::ui::EditBox::setFontColor((EditBox *)this,(Color3B *)(*(long *)(this + 0x5d0) + 0x1c));
  return;
}

