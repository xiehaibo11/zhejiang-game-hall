
/* cocos2d::ui::EditBox::onPressStateChangedToPressed() */

void __thiscall cocos2d::ui::EditBox::onPressStateChangedToPressed(EditBox *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deab44 with catch @ 00deabac
                        */
  Scale9Sprite::setState(*(Scale9Sprite **)(this + 0x4f8),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deaad0 with catch @ 00deabb8
                        */
  (**(code **)(**(long **)(this + 0x4f8) + 0x170))
            (*(long **)(this + 0x4f8),this[0x559] == (EditBox)0x0);
  (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),1);
                    /* WARNING: Could not recover jumptable at 0x00deac04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x508) + 0x170))(*(long **)(this + 0x508),0);
  return;
}

