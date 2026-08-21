
/* cocos2d::FontAtlasFrame::moveToNextCursor(int, int) */

void __thiscall
cocos2d::FontAtlasFrame::moveToNextCursor(FontAtlasFrame *this,int param_1,int param_2)

{
  if (param_2 <= *(int *)(this + 0x44)) {
    param_2 = *(int *)(this + 0x44);
  }
  *(int *)(this + 0x40) = param_1 + *(int *)(this + 0x40) + 2;
  *(int *)(this + 0x44) = param_2;
  return;
}

