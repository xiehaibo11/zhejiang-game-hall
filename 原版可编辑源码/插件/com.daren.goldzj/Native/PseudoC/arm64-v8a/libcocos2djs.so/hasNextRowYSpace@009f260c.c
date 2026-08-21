
/* cocos2d::FontAtlasFrame::hasNextRowYSpace(int) const */

bool __thiscall cocos2d::FontAtlasFrame::hasNextRowYSpace(FontAtlasFrame *this,int param_1)

{
  return param_1 + 2 <= (*(int *)(this + 0x38) - *(int *)(this + 0x3c)) - *(int *)(this + 0x44);
}

