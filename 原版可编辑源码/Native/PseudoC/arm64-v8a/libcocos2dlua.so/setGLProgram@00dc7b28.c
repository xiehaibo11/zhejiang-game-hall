
/* cocos2d::ui::ImageView::setGLProgram(cocos2d::GLProgram*) */

void __thiscall cocos2d::ui::ImageView::setGLProgram(ImageView *this,GLProgram *param_1)

{
  Node::setGLProgram((Node *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00dc7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x510) + 0x308))(*(long **)(this + 0x510),param_1);
  return;
}

