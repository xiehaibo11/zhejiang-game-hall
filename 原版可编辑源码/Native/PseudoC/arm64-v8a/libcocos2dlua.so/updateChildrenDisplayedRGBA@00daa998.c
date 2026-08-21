
/* cocos2d::ui::Widget::updateChildrenDisplayedRGBA() */

void __thiscall cocos2d::ui::Widget::updateChildrenDisplayedRGBA(Widget *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00daa99c to 00eaa9a7 has its CatchHandler @ 00daa9f8 */
                    /* try { // try from 00daa9a8 to 00eaaa2f has its CatchHandler @ 00daa944 */
  uVar2 = (**(code **)(*(long *)this + 0x4b0))();
  (**(code **)(*(long *)this + 0x4c0))(this,uVar2);
  uVar1 = (**(code **)(*(long *)this + 0x480))(this);
                    /* WARNING: Could not recover jumptable at 0x00daa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x490))(this,uVar1);
  return;
}

