
/* cocos2d::ui::Button::createTitleRenderer() */

void __thiscall cocos2d::ui::Button::createTitleRenderer(Button *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = Label::create();
  if ((lVar1 != 0) && (lVar2 = *(long *)(this + 0x508), lVar2 != lVar1)) {
    if (lVar2 != 0) {
      (**(code **)(*(long *)this + 0x550))(this,lVar2,1);
    }
    *(long *)(this + 0x508) = lVar1;
                    /* try { // try from 00dc059c to 00ec05a7 has its CatchHandler @ 00dc07f4 */
    (**(code **)(*(long *)this + 0x540))(this,lVar1,0xffffffff,0xffffffff);
                    /* try { // try from 00dc05b0 to 00ec05d3 has its CatchHandler @ 00dc07f0 */
                    /* WARNING: Could not recover jumptable at 0x00dc05c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x698))(this);
    return;
  }
  return;
}

