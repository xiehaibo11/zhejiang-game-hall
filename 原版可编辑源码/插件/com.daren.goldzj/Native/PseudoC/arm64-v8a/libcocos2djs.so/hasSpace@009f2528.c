
/* cocos2d::FontAtlasFrame::hasSpace(int, int) */

undefined8 __thiscall
cocos2d::FontAtlasFrame::hasSpace(FontAtlasFrame *this,int param_1,int param_2)

{
  if ((*(int *)(this + 0x34) - *(int *)(this + 0x40) < param_1 + 2) ||
     (*(int *)(this + 0x38) - *(int *)(this + 0x3c) < param_2 + 2)) {
    if (*(int *)(this + 0x34) < param_1 + 2) {
      return 0;
    }
    if ((*(int *)(this + 0x38) - *(int *)(this + 0x3c)) - *(int *)(this + 0x44) < param_2 + 2) {
      return 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f25ec with catch @ 009f2598
                        */
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + *(int *)(this + 0x44) + 2;
    *(undefined8 *)(this + 0x40) = 2;
  }
  return 1;
}

