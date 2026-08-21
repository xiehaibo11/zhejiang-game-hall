
/* cocos2d::PUOnClearObserver::postUpdateObserver(float) */

void __thiscall
cocos2d::PUOnClearObserver::postUpdateObserver(PUOnClearObserver *this,float param_1)

{
  int iVar1;
  undefined4 in_register_00005004;
  
                    /* try { // try from 00e3a40c to 00f3a40f has its CatchHandler @ 00e3a410 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a40c with catch @ 00e3a410
                        */
  if ((this[0xa1] != (PUOnClearObserver)0x0) &&
     (iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x560))(), iVar1 < 1)) {
                    /* try { // try from 00e3a414 to 00f3a417 has its CatchHandler @ 00e3a420 */
                    /* try { // try from 00e3a418 to 00f3a423 has its CatchHandler @ 00e3a1ec */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a414 with catch @ 00e3a420
                        */
    (**(code **)(*(long *)this + 0x70))(CONCAT44(in_register_00005004,param_1),this,0);
    this[0xa1] = (PUOnClearObserver)0x0;
  }
  return;
}

