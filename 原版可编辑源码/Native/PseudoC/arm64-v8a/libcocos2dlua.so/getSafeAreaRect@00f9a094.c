
/* cocos2d::Director::getSafeAreaRect() const */

void cocos2d::Director::getSafeAreaRect(void)

{
  long in_x0;
  Rect *in_x8;
  
  if (*(long **)(in_x0 + 0x108) != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f99fe4 with catch @ 00f9a09c
                        */
                    /* WARNING: Could not recover jumptable at 0x00f9a0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x108) + 0xb8))();
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f99fb0 with catch @ 00f9a0ac
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a03c with catch @ 00f9a0b4
                        */
  Rect::Rect(in_x8,(Rect *)Rect::ZERO);
  return;
}

