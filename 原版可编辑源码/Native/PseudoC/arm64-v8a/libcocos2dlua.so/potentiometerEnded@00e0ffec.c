
/* cocos2d::extension::ControlPotentiometer::potentiometerEnded(cocos2d::Vec2) */

void cocos2d::extension::ControlPotentiometer::potentiometerEnded(long *param_1)

{
  long *plVar1;
  
                    /* try { // try from 00e10004 to 00f1000b has its CatchHandler @ 00e1000c */
  plVar1 = (long *)(**(code **)(*param_1 + 0x6b8))();
                    /* catch() { ... } // from try @ 00e0ffbc with catch @ 00e1000c
                       catch() { ... } // from try @ 00e10004 with catch @ 00e1000c
                       try { // try from 00e1000c to 00f1002b has its CatchHandler @ 00e0ff84 */
  (**(code **)(*plVar1 + 0x4c0))(plVar1,&Color3B::WHITE);
                    /* try { // try from 00e1002c to 00f100b7 has its CatchHandler @ 00e1002c
                       catch() { ... } // from try @ 00e1002c with catch @ 00e1002c
                       catch() { ... } // from try @ 00e100cc with catch @ 00e1002c */
                    /* WARNING: Could not recover jumptable at 0x00e10034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x660))(param_1,0);
  return;
}

