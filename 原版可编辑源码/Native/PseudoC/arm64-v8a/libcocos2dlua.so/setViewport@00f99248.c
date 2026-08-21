
/* cocos2d::Director::setViewport() */

void __thiscall cocos2d::Director::setViewport(Director *this)

{
  if (*(long **)(this + 0x108) != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f991e4 with catch @ 00f99264
                        */
                    /* WARNING: Could not recover jumptable at 0x00f9926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x108) + 0xd0))
              (0,0,*(undefined4 *)(this + 0x198),*(undefined4 *)(this + 0x19c));
    return;
  }
  return;
}

