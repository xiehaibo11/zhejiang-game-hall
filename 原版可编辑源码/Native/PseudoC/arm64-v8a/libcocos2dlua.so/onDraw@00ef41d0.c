
/* cocos2d::DrawNode::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::DrawNode::onDraw(Mat4 *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  GLProgramState *this;
  GLProgram *this_00;
  Configuration *pCVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (GLProgramState *)Node::getGLProgramState((Node *)param_1);
  GLProgramState::apply(this,(Mat4 *)(ulong)param_2);
  this_00 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"u_alpha");
  iVar3 = GLProgram::getUniformLocation(this_00,(basic_string *)local_50);
  dVar8 = (double)NEON_ucvtf((ulong)(byte)param_1[0x218]);
  GLProgram::setUniformLocationWith1f(this_00,iVar3,(float)(dVar8 / 255.0));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  GL::blendFunc(*(uint *)(param_1 + 0x358),*(uint *)(param_1 + 0x35c));
  if (param_1[0x450] != (Mat4)0x0) {
    glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0x2fc));
    glBufferData(0x8892,(long)*(int *)(param_1 + 0x310) * 0x14,*(undefined8 *)(param_1 + 0x318),
                 0x88e0);
    param_1[0x450] = (Mat4)0x0;
  }
  pCVar4 = (Configuration *)Configuration::getInstance();
  uVar5 = Configuration::supportsShareableVAO(pCVar4);
  if ((uVar5 & 1) == 0) {
    GL::enableVertexAttribs(7);
    glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0x2fc));
    glVertexAttribPointer(0,2,0x1406,0,0x14,0);
    glVertexAttribPointer(1,4,0x1401,1,0x14,8);
    glVertexAttribPointer(2,2,0x1406,0,0x14,0xc);
  }
  else {
    GL::bindVAO(*(uint *)(param_1 + 0x2f8));
  }
  glDrawArrays(4,0,*(undefined4 *)(param_1 + 0x314));
  glBindBuffer(0x8892,0);
  pCVar4 = (Configuration *)Configuration::getInstance();
  uVar5 = Configuration::supportsShareableVAO(pCVar4);
  if ((uVar5 & 1) != 0) {
    GL::bindVAO(0);
  }
  lVar6 = Director::getInstance();
  lVar7 = *(long *)(lVar6 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar7);
  lVar6 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar7);
  *plVar1 = *plVar1 + 1;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar7) = lVar6 + *(int *)(param_1 + 0x314);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

