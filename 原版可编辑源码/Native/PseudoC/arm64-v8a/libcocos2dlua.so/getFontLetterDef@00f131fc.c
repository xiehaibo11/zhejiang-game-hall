
/* cocos2d::Label::getFontLetterDef(char32_t, cocos2d::FontLetterDefinition&) const */

void __thiscall
cocos2d::Label::getFontLetterDef(Label *this,wchar32 param_1,FontLetterDefinition *param_2)

{
  wchar32 wVar1;
  
  wVar1 = L' ';
  if (param_1 != L'\xa0') {
    wVar1 = param_1;
  }
  FontAtlas::getLetterDefinitionForChar(*(FontAtlas **)(this + 0x3d0),wVar1,param_2);
  return;
}

