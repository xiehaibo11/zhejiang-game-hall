
/* cocos2d::ui::EditBoxImplCommon::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::draw
          (EditBoxImplCommon *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = this;
                    /* try { // try from 00def114 to 00eef117 has its CatchHandler @ 00def178 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 != 0) {
    Helper::convertBoundingBoxToScreen(*(Node **)(this + 0x10));
    auVar2 = (**(code **)(*(long *)this + 0x1a0))(this,auStack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar2._0_8_,auVar2._8_8_);
}

