
/* cocos2d::ui::Button::setTitleLabel(cocos2d::Label*) */

void __thiscall cocos2d::ui::Button::setTitleLabel(Button *this,Label *param_1)

{
  Label *pLVar1;
  
                    /* try { // try from 00dc05d8 to 00ec05e3 has its CatchHandler @ 00dc07ec */
                    /* try { // try from 00dc05ec to 00ec060f has its CatchHandler @ 00dc07e8 */
  if ((param_1 != (Label *)0x0) && (pLVar1 = *(Label **)(this + 0x508), pLVar1 != param_1)) {
    if (pLVar1 != (Label *)0x0) {
      (**(code **)(*(long *)this + 0x550))(this,pLVar1,1);
    }
                    /* try { // try from 00dc0614 to 00ec061f has its CatchHandler @ 00dc07e4 */
    *(Label **)(this + 0x508) = param_1;
                    /* try { // try from 00dc0628 to 00ec064b has its CatchHandler @ 00dc07e0 */
    (**(code **)(*(long *)this + 0x540))(this,param_1,0xffffffff,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00dc0644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x698))(this);
    return;
  }
                    /* try { // try from 00dc0650 to 00ec065b has its CatchHandler @ 00dc07dc */
  return;
}

