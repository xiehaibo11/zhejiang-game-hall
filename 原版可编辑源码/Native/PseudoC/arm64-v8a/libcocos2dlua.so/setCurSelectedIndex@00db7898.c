
/* cocos2d::ui::ListView::setCurSelectedIndex(int) */

void __thiscall cocos2d::ui::ListView::setCurSelectedIndex(ListView *this,int param_1)

{
  long lVar1;
  
  if (-1 < param_1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db7834 with catch @ 00db789c
                        */
    lVar1 = (long)param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db786c with catch @ 00db78b0
                        */
    if ((lVar1 < *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3) &&
       (*(long *)(*(long *)(this + 0x8b8) + lVar1 * 8) != 0)) {
      *(long *)(this + 0x8f8) = lVar1;
      selectedItemEvent(this,2);
      return;
    }
  }
  return;
}

