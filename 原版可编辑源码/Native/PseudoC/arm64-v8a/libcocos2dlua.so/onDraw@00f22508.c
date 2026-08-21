
/* cocos2d::MotionStreak::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::MotionStreak::onDraw(Mat4 *param_1,uint param_2)

{
  long *plVar1;
  GLProgram *pGVar2;
  long lVar3;
  long lVar4;
  
  pGVar2 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(pGVar2);
  pGVar2 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::setUniformsForBuiltins(pGVar2,(Mat4 *)(ulong)param_2);
  GL::enableVertexAttribs(7);
  GL::blendFunc(*(uint *)(param_1 + 0x310),*(uint *)(param_1 + 0x314));
  GL::bindTexture2D(*(Texture2D **)(param_1 + 0x308));
  glVertexAttribPointer(0,2,0x1406,0,0,*(undefined8 *)(param_1 + 0x348));
  glVertexAttribPointer(2,2,0x1406,0,0,*(undefined8 *)(param_1 + 0x358));
  glVertexAttribPointer(1,4,0x1401,1,0,*(undefined8 *)(param_1 + 0x350));
  glDrawArrays(5,0,*(int *)(param_1 + 0x330) << 1);
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
  *plVar1 = *plVar1 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) =
       lVar3 + (ulong)(uint)(*(int *)(param_1 + 0x330) << 1);
  return;
}

