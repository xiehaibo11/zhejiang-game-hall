
/* fairygui::FUIContainer::getAlphaThreshold() const */

undefined1  [16] __thiscall fairygui::FUIContainer::getAlphaThreshold(FUIContainer *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(this + 0x308) != 0) {
                    /* catch() { ... } // from try @ 00aa63d8 with catch @ 00aa64c8
                       catch() { ... } // from try @ 00aa64ac with catch @ 00aa64c8 */
                    /* catch() { ... } // from try @ 00aa6360 with catch @ 00aa64cc */
    cocos2d::StencilStateManager::getAlphaThreshold
              (*(StencilStateManager **)(*(long *)(this + 0x308) + 8));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}

