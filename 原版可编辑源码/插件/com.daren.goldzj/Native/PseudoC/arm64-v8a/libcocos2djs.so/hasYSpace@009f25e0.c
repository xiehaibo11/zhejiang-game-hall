
/* cocos2d::FontAtlasFrame::hasYSpace(int) const */

bool __thiscall cocos2d::FontAtlasFrame::hasYSpace(FontAtlasFrame *this,int param_1)

{
                    /* try { // try from 009f25e4 to 00af25eb has its CatchHandler @ 009f274c */
                    /* try { // try from 009f25ec to 00af274f has its CatchHandler @ 009f2598 */
  return param_1 + 2 <= *(int *)(this + 0x38) - *(int *)(this + 0x3c);
}

