
/* cocos2d::ui::Layout::setBackGroundColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::Layout::setBackGroundColor(Layout *this,Color3B *param_1)

{
  Layout LVar1;
  
  LVar1 = *(Layout *)(param_1 + 2);
  *(undefined2 *)(this + 0x590) = *(undefined2 *)param_1;
  this[0x592] = LVar1;
  if (*(long **)(this + 0x580) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dafe9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x580) + 0x4c0))();
    return;
  }
  return;
}

