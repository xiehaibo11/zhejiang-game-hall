
/* cocos2d::CameraBackgroundSkyBoxBrush::drawBackground(cocos2d::Camera*) */

void __thiscall
cocos2d::CameraBackgroundSkyBoxBrush::drawBackground
          (CameraBackgroundSkyBoxBrush *this,Camera *param_1)

{
  long lVar1;
  Configuration *pCVar2;
  ulong uVar3;
  long lVar4;
  GLProgramState *pGVar5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  Vec4 aVStack_88 [16];
  Mat4 aMStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x50] != (CameraBackgroundSkyBoxBrush)0x0) {
    (**(code **)(*(long *)param_1 + 0x430))(aMStack_78,param_1);
    Vec4::Vec4(aVStack_88,1.0,1.0,1.0,1.0);
    pGVar5 = *(GLProgramState **)(this + 0x28);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a0,"u_color");
    GLProgramState::setUniformVec4(pGVar5,(basic_string *)local_a0,aVStack_88);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    local_40 = 0;
    local_48 = 0;
    pGVar5 = *(GLProgramState **)(this + 0x28);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a0,"u_cameraRot");
    GLProgramState::setUniformMat4(pGVar5,(basic_string *)local_a0,aMStack_78);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    GLProgramState::apply(*(GLProgramState **)(this + 0x28),(Mat4 *)Mat4::IDENTITY);
    glEnable(0xb71);
                    /* catch() { ... } // from try @ 00ef17a4 with catch @ 00ef18ac */
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
    glDepthMask(1);
    RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,true);
    glDepthFunc(0x207);
    RenderState::StateBlock::setDepthFunction(RenderState::StateBlock::_defaultState,0x207);
    glEnable(0xb44);
    RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,true);
    glCullFace(0x405);
    RenderState::StateBlock::setCullFaceSide(RenderState::StateBlock::_defaultState,0x405);
    glDisable(0xbe2);
    RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,false);
    pCVar2 = (Configuration *)Configuration::getInstance();
    uVar3 = Configuration::supportsShareableVAO(pCVar2);
    if ((uVar3 & 1) == 0) {
      GL::enableVertexAttribs(1);
      glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
      glVertexAttribPointer(0,3,0x1406,0,0xc,0);
      glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
    }
    else {
      GL::bindVAO(*(uint *)(this + 0x30));
    }
    glDrawElements(4,0x24,0x1401,0);
    pCVar2 = (Configuration *)Configuration::getInstance();
    uVar3 = Configuration::supportsShareableVAO(pCVar2);
    if ((uVar3 & 1) == 0) {
      glBindBuffer(0x8892,0);
      glBindBuffer(0x8893,0);
    }
    else {
      GL::bindVAO(0);
    }
    lVar4 = Director::getInstance();
    lVar4 = *(long *)(lVar4 + 0x1b0);
    lVar6 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
    *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) =
         *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) + 8;
    *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4) = lVar6 + 1;
    Vec4::~Vec4(aVStack_88);
    Mat4::~Mat4(aMStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

