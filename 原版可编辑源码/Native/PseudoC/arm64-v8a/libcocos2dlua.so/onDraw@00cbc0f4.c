
/* cocostudio::timeline::SkeletonNode::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocostudio::timeline::SkeletonNode::onDraw(Mat4 *param_1,uint param_2)

{
  GLProgram *pGVar1;
  long lVar2;
  long lVar3;
  
  pGVar1 = (GLProgram *)cocos2d::Node::getGLProgram((Node *)param_1);
  cocos2d::GLProgram::use(pGVar1);
  pGVar1 = (GLProgram *)cocos2d::Node::getGLProgram((Node *)param_1);
  cocos2d::GLProgram::setUniformsForBuiltins(pGVar1,(Mat4 *)(ulong)param_2);
  cocos2d::GL::enableVertexAttribs(3);
  glBindBuffer(0x8892,0);
  glVertexAttribPointer(0,3,0x1406,0,0,param_1 + 0x528);
  glVertexAttribPointer(1,4,0x1406,0,0,param_1 + 0x4a8);
  cocos2d::GL::blendFunc(*(uint *)(param_1 + 0x350),*(uint *)(param_1 + 0x354));
  glDrawArrays(5,0,4);
  glDrawArrays(5,4,4);
  lVar2 = cocos2d::Director::getInstance();
  lVar2 = *(long *)(lVar2 + 0x1b0);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2);
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) + 8;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2) = lVar3 + 1;
  return;
}

