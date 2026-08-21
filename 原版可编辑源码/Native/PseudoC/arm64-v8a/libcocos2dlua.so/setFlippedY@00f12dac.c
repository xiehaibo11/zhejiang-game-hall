
/* cocos2d::LabelTTF::setFlippedY(bool) */

void __thiscall cocos2d::LabelTTF::setFlippedY(LabelTTF *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xbf800000;
  if (!param_1) {
    uVar1 = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00f12dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x308) + 0x60))(uVar1);
  return;
}

