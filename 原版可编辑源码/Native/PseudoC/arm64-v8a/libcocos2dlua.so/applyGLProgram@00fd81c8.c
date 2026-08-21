
/* cocos2d::GLProgramState::applyGLProgram(cocos2d::Mat4 const&) */

void __thiscall cocos2d::GLProgramState::applyGLProgram(GLProgramState *this,Mat4 *param_1)

{
  updateUniformsAndAttributes(this);
  GLProgram::use(*(GLProgram **)(this + 0xd0));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0xd0),param_1);
  return;
}

