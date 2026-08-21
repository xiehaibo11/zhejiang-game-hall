
/* cocos2d::LayerGradient::setVector(cocos2d::Vec2 const&) */

void __thiscall cocos2d::LayerGradient::setVector(LayerGradient *this,Vec2 *param_1)

{
  *(undefined8 *)(this + 0x418) = *(undefined8 *)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f1711c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))();
  return;
}

