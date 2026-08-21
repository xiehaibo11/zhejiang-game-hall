
/* cocos2d::ui::EditBox::releaseUpEvent() */

void __thiscall cocos2d::ui::EditBox::releaseUpEvent(EditBox *this)

{
  Widget::releaseUpEvent((Widget *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deac5c with catch @ 00deac94
                        */
                    /* WARNING: Could not recover jumptable at 0x00deaca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x5b8) + 0xe8))();
  return;
}

