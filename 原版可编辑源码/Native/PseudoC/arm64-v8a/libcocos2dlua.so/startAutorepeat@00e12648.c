
/* cocos2d::extension::ControlStepper::startAutorepeat() */

void __thiscall cocos2d::extension::ControlStepper::startAutorepeat(ControlStepper *this)

{
                    /* try { // try from 00e12650 to 00f1265b has its CatchHandler @ 00e12938 */
                    /* try { // try from 00e1265c to 00f12693 has its CatchHandler @ 00e1219c */
  *(undefined4 *)(this + 0x388) = 0xffffffff;
  Node::schedule((Node *)this,(_func_void_float *)0x3d8,0.15,1,0.45000002);
  return;
}

