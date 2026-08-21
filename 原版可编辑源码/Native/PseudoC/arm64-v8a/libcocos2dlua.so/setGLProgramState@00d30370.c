
/* cocos2d::Mesh::setGLProgramState(cocos2d::GLProgramState*) */

void __thiscall cocos2d::Mesh::setGLProgramState(Mesh *this,GLProgramState *param_1)

{
  RenderState *this_00;
  StateBlock *pSVar1;
  
  this_00 = (RenderState *)Material::createWithGLStateProgram(param_1);
  if (*(RenderState **)(this + 0x148) != (RenderState *)0x0) {
    pSVar1 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::setStateBlock(this_00,pSVar1);
  }
  setMaterial(this,(Material *)this_00);
  return;
}

