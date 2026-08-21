
/* cocos2d::ui::Layout::setClippingType(cocos2d::ui::Layout::ClippingType) */

void __thiscall cocos2d::ui::Layout::setClippingType(Layout *this,int param_2)

{
  uint uVar1;
  
                    /* try { // try from 00daf748 to 00eaf76f has its CatchHandler @ 00daf8fc */
  if (*(int *)(this + 0x5ac) == param_2) {
                    /* try { // try from 00daf770 to 00eaf79f has its CatchHandler @ 00daf4a4 */
    return;
  }
  uVar1 = (**(code **)(*(long *)this + 0x688))();
  (**(code **)(*(long *)this + 0x680))(this,0);
                    /* try { // try from 00daf7a0 to 00eaf7b7 has its CatchHandler @ 00daf9a4 */
  *(int *)(this + 0x5ac) = param_2;
                    /* try { // try from 00daf7bc to 00eaf7d3 has its CatchHandler @ 00daf9a0 */
                    /* WARNING: Could not recover jumptable at 0x00daf7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x680))(this,uVar1 & 1);
  return;
}

