
/* cocos2d::ui::ImageView::setGLProgramState(cocos2d::GLProgramState*) */

void __thiscall cocos2d::ui::ImageView::setGLProgramState(ImageView *this,GLProgramState *param_1)

{
  Node::setGLProgramState((Node *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00dc7b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x510) + 0x310))(*(long **)(this + 0x510),param_1);
  return;
}

