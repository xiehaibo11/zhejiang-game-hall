
/* cocos2d::GLProgramState::applyGLProgram() */

void __thiscall cocos2d::GLProgramState::applyGLProgram(GLProgramState *this)

{
  updateUniformsAndAttributes(this);
  GLProgram::use(*(GLProgram **)(this + 0xd0));
  GLProgram::setUniformsForBuiltinsWithoutMV(*(GLProgram **)(this + 0xd0));
  return;
}

