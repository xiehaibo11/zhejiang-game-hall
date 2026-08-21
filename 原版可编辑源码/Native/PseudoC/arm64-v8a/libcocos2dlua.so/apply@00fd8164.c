
/* cocos2d::GLProgramState::apply(cocos2d::Mat4 const&) */

void __thiscall cocos2d::GLProgramState::apply(GLProgramState *this,Mat4 *param_1)

{
  long *plVar1;
  
  updateUniformsAndAttributes(this);
  GLProgram::use(*(GLProgram **)(this + 0xd0));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0xd0),param_1);
  applyAttributes(this,true);
  updateUniformsAndAttributes(this);
  for (plVar1 = *(long **)(this + 0x60); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    UniformValue::apply((UniformValue *)(plVar1 + 3));
  }
  return;
}

