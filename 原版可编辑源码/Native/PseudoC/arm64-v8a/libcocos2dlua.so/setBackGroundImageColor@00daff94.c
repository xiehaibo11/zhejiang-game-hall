
/* cocos2d::ui::Layout::setBackGroundImageColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::Layout::setBackGroundImageColor(Layout *this,Color3B *param_1)

{
  Layout LVar1;
  long *plVar2;
  
  LVar1 = *(Layout *)(param_1 + 2);
  plVar2 = *(long **)(this + 0x538);
  *(undefined2 *)(this + 0x578) = *(undefined2 *)param_1;
  this[0x57a] = LVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00daffbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x4c0))(plVar2,this + 0x578);
    return;
  }
                    /* try { // try from 00daffc0 to 00eaffc3 has its CatchHandler @ 00db0114 */
  return;
}

