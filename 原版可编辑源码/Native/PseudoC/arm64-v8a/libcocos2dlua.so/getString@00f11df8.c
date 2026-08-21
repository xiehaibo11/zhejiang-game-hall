
/* non-virtual thunk to cocos2d::LabelBMFont::getString() const */

void __thiscall cocos2d::LabelBMFont::getString(LabelBMFont *this)

{
                    /* WARNING: Could not recover jumptable at 0x00f11e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f11dc0 with catch @ 00f11e04
                        */
  (**(code **)(**(long **)(this + 0x28) + 0x590))();
  return;
}

