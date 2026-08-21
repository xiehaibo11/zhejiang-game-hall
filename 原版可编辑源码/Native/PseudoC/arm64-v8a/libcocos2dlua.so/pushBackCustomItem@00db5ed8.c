
/* cocos2d::ui::ListView::pushBackCustomItem(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::ListView::pushBackCustomItem(ListView *this,Widget *param_1)

{
  (**(code **)(*(long *)this + 0x800))();
                    /* try { // try from 00db5efc to 00eb5eff has its CatchHandler @ 00db6058 */
                    /* try { // try from 00db5f00 to 00eb602b has its CatchHandler @ 00db5cc4 */
  (**(code **)(*(long *)this + 0x208))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00db5f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6a8))(this);
  return;
}

