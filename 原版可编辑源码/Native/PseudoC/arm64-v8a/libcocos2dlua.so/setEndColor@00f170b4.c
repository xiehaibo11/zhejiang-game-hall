
/* cocos2d::LayerGradient::setEndColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::LayerGradient::setEndColor(LayerGradient *this,Color3B *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)param_1;
  this[0x415] = *(LayerGradient *)(param_1 + 2);
  *(undefined2 *)(this + 0x413) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00f170d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x528))();
  return;
}

