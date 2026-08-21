
/* cocos2d::GLView::renderScene(cocos2d::Scene*, cocos2d::Renderer*) */

void __thiscall cocos2d::GLView::renderScene(GLView *this,Scene *param_1,Renderer *param_2)

{
  if (*(long **)(this + 0x70) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f7d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x70) + 0x20))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f7d2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x530))(param_1,param_2,Mat4::IDENTITY,0);
  return;
}

