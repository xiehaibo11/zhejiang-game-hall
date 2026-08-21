
/* cocos2d::Director::getVisibleOrigin() const */

undefined1  [16] __thiscall cocos2d::Director::getVisibleOrigin(Director *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
                    /* try { // try from 00f9a05c to 0109a1a7 has its CatchHandler @ 00f99ef0 */
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0xa8))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f99ff0 with catch @ 00f9a080
                        */
  return ZEXT416(0);
}

