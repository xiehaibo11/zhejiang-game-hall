
/* cocos2d::FontAtlasFrame::moveToNextRow() */

void __thiscall cocos2d::FontAtlasFrame::moveToNextRow(FontAtlasFrame *this)

{
  *(int *)(this + 0x3c) = *(int *)(this + 0x44) + *(int *)(this + 0x3c) + 2;
  *(undefined8 *)(this + 0x40) = 2;
  return;
}

