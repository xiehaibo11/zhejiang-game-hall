
/* cocos2d::MotionStreak3D::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::MotionStreak3D::onDraw(Mat4 *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  GLProgram *pGVar3;
  long lVar4;
  long lVar5;
  
  pGVar3 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(pGVar3);
  pGVar3 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::setUniformsForBuiltins(pGVar3,(Mat4 *)(ulong)param_2);
  GL::enableVertexAttribs(7);
  GL::blendFunc(*(uint *)(param_1 + 0x310),*(uint *)(param_1 + 0x314));
  uVar2 = Texture2D::getName(*(Texture2D **)(param_1 + 0x308));
  GL::bindTexture2D(uVar2);
  glDisable(0xb44);
  RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,false);
  glEnable(0xb71);
  RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
  glVertexAttribPointer(0,3,0x1406,0,0,*(undefined8 *)(param_1 + 0x360));
  glVertexAttribPointer(2,2,0x1406,0,0,*(undefined8 *)(param_1 + 0x370));
  glVertexAttribPointer(1,4,0x1401,1,0,*(undefined8 *)(param_1 + 0x368));
  glDrawArrays(5,0,*(int *)(param_1 + 0x348) << 1);
  lVar4 = Director::getInstance();
  lVar5 = *(long *)(lVar4 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar5);
  lVar4 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5);
  *plVar1 = *plVar1 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5) =
       lVar4 + (ulong)(uint)(*(int *)(param_1 + 0x348) << 1);
  return;
}

