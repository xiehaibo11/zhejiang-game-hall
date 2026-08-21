
/* cocos2d::GLProgramState::applyUniforms() */

void __thiscall cocos2d::GLProgramState::applyUniforms(GLProgramState *this)

{
  long *plVar1;
  
  updateUniformsAndAttributes(this);
  for (plVar1 = *(long **)(this + 0x60); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    UniformValue::apply((UniformValue *)(plVar1 + 3));
  }
  return;
}

