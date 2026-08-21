
/* cocos2d::Director::getVisibleSize() const */

void cocos2d::Director::getVisibleSize(void)

{
  long in_x0;
  Size *in_x8;
  
                    /* try { // try from 00f9a03c to 0109a05b has its CatchHandler @ 00f9a0b4 */
  if (*(long **)(in_x0 + 0x108) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f9a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x108) + 0xa0))();
    return;
  }
  Size::Size(in_x8,(Size *)&Size::ZERO);
  return;
}

