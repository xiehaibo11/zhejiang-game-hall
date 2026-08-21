
/* cocos2d::Particle3DQuadRender::initQuadRender(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::Particle3DQuadRender::initQuadRender(Particle3DQuadRender *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  GLProgramCache *pGVar3;
  GLProgram *pGVar4;
  Director *this_00;
  TextureCache *this_01;
  long lVar5;
  Ref *this_02;
  MeshCommand *this_03;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pGVar3 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_3D_PARTICLE_COLOR);
  pGVar4 = (GLProgram *)GLProgramCache::getGLProgram(pGVar3,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
    lVar5 = TextureCache::addImage(this_01,param_1);
    if (lVar5 == 0) {
      *(undefined8 *)(this + 0x58) = 0;
    }
    else {
      *(long *)(this + 0x58) = lVar5;
      pGVar3 = (GLProgramCache *)GLProgramCache::getInstance();
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_3D_PARTICLE_TEXTURE);
      pGVar4 = (GLProgram *)GLProgramCache::getGLProgram(pGVar3,(basic_string *)local_50);
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  this_02 = (Ref *)GLProgramState::create(pGVar4);
  Ref::retain(this_02);
  GLProgramState::setVertexAttribPointer
            ((GLProgramState *)this_02,(basic_string *)&s_attributeNames,3,0x1406,'\0',0x24,
             (void *)0x0);
  GLProgramState::setVertexAttribPointer
            ((GLProgramState *)this_02,(basic_string *)&DAT_01792978,2,0x1406,'\0',0x24,(void *)0xc)
  ;
  GLProgramState::setVertexAttribPointer
            ((GLProgramState *)this_02,(basic_string *)&DAT_01792960,4,0x1406,'\0',0x24,(void *)0x14
            );
  *(Ref **)(this + 0x60) = this_02;
  this_03 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this_03 != (MeshCommand *)0x0) {
    MeshCommand::MeshCommand(this_03);
  }
  *(MeshCommand **)(this + 0x50) = this_03;
  *(undefined2 *)(this_03 + 0x10) = 0x101;
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0x30),(bool)this[0x48]);
  RenderState::StateBlock::setDepthWrite(*(StateBlock **)(this + 0x30),(bool)this[0x49]);
  RenderState::StateBlock::setCullFace(*(StateBlock **)(this + 0x30),true);
  RenderState::StateBlock::setCullFaceSide(*(StateBlock **)(this + 0x30),0x405);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

