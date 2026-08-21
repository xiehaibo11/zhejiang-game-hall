
/* cocos2d::Director::calculateMPF() */

void __thiscall cocos2d::Director::calculateMPF(Director *this)

{
  DAT_0178fc58 = *(float *)(this + 0x100) * 0.1 + DAT_0178fc58 * 0.9;
  *(float *)(this + 0x154) = DAT_0178fc58;
  return;
}

