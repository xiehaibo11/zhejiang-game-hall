
/* cocos2d::LayerColor::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::LayerColor::onDraw(Mat4 *param_1,uint param_2)

{
  GLProgram *pGVar1;
  long lVar2;
  long lVar3;
  
  pGVar1 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(pGVar1);
  pGVar1 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::setUniformsForBuiltins(pGVar1,(Mat4 *)(ulong)param_2);
  GL::enableVertexAttribs(3);
  glBindBuffer(0x8892,0);
  glVertexAttribPointer(0,3,0x1406,0,0,param_1 + 0x3e0);
  glVertexAttribPointer(1,4,0x1406,0,0,param_1 + 0x350);
  GL::blendFunc(*(uint *)(param_1 + 0x328),*(uint *)(param_1 + 0x32c));
  glDrawArrays(5,0,4);
  lVar2 = Director::getInstance();
  lVar2 = *(long *)(lVar2 + 0x1b0);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2);
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) + 4;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2) = lVar3 + 1;
  return;
}

