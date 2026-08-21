
/* cocos2d::GLProgramState::setGLProgram(cocos2d::GLProgram*) */

void __thiscall cocos2d::GLProgramState::setGLProgram(GLProgramState *this,GLProgram *param_1)

{
  if (*(GLProgram **)(this + 0xd0) != param_1) {
    resetGLProgram(this);
    init(this,param_1);
    return;
  }
  return;
}

