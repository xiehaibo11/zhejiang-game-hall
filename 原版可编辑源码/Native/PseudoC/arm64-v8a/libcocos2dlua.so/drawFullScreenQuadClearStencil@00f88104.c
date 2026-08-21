
/* cocos2d::StencilStateManager::drawFullScreenQuadClearStencil() */

void cocos2d::StencilStateManager::drawFullScreenQuadClearStencil(void)

{
  long lVar1;
  int iVar2;
  Director *pDVar3;
  GLProgramCache *this;
  GLProgram *this_00;
  long lVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar3 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar3,0);
  Director::loadIdentityMatrix(pDVar3,0);
  Director::pushMatrix(pDVar3,1);
  Director::loadIdentityMatrix(pDVar3,1);
  uStack_58 = 0xbf8000003f800000;
  local_60 = 0xbf800000bf800000;
  uStack_48 = 0x3f800000bf800000;
  uStack_50 = 0x3f8000003f800000;
  this = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,GLProgram::SHADER_NAME_POSITION_U_COLOR);
  this_00 = (GLProgram *)GLProgramCache::getGLProgram(this,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"u_color");
  iVar2 = GLProgram::getUniformLocation(this_00,(basic_string *)local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  Color4F::Color4F((Color4F *)local_78,1.0,1.0,1.0,1.0);
  GLProgram::use(this_00);
  GLProgram::setUniformsForBuiltins(this_00);
  GLProgram::setUniformLocationWith4fv(this_00,iVar2,(float *)local_78,1);
  glBindBuffer(0x8892,0);
  GL::enableVertexAttribs(1);
  glVertexAttribPointer(0,2,0x1406,0,0,&local_60);
  glDrawArrays(6,0,4);
  lVar4 = Director::getInstance();
  lVar4 = *(long *)(lVar4 + 0x1b0);
  lVar5 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) + 4;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4) = lVar5 + 1;
  Director::popMatrix(pDVar3,1);
  Director::popMatrix(pDVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

