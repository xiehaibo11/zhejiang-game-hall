
/* cocos2d::FontAtlasFrame::hasRowXSpace(int) const */

bool __thiscall cocos2d::FontAtlasFrame::hasRowXSpace(FontAtlasFrame *this,int param_1)

{
  return param_1 + 2 <= *(int *)(this + 0x34) - *(int *)(this + 0x40);
}

