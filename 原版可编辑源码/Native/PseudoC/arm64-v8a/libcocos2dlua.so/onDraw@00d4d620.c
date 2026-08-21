
/* cocos2d::Skybox::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::Skybox::onDraw(Mat4 *param_1,uint param_2)

{
  long lVar1;
  Camera *this;
  Mat4 *pMVar2;
  GLProgramState *this_00;
  Configuration *pCVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [16];
  void *local_d0;
  Vec4 aVStack_c8 [16];
  float local_b8 [5];
  float local_a4;
  Mat4 aMStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Camera *)Camera::getVisitingCamera();
  (**(code **)(*(long *)this + 0x430))(aMStack_78);
  pMVar2 = (Mat4 *)Camera::getProjectionMatrix(this);
  Mat4::Mat4((Mat4 *)local_b8,pMVar2);
  local_40 = 0;
  local_48 = 0;
  Mat4::scale(aMStack_78,1.0 / local_b8[0],1.0 / local_a4,1.0);
  this_00 = (GLProgramState *)Node::getGLProgramState((Node *)param_1);
  GLProgramState::apply(this_00,(Mat4 *)(ulong)param_2);
                    /* catch() { ... } // from try @ 00d4d5ec with catch @ 00d4d6b8 */
  fVar6 = (float)NEON_ucvtf((uint)(byte)param_1[0x21a]);
  fVar8 = (float)NEON_ucvtf((uint)(byte)param_1[0x21b]);
  fVar9 = (float)NEON_ucvtf((uint)(byte)param_1[0x21c]);
                    /* catch() { ... } // from try @ 00d4d5bc with catch @ 00d4d6cc */
                    /* catch() { ... } // from try @ 00d4d72c with catch @ 00d4d6e0 */
  Vec4::Vec4(aVStack_c8,fVar6 / 255.0,fVar8 / 255.0,fVar9 / 255.0,1.0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,"u_color");
  GLProgramState::setUniformVec4(this_00,(basic_string *)local_e0,aVStack_c8);
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,"u_cameraRot");
                    /* try { // try from 00d4d724 to 00e4d72b has its CatchHandler @ 00d4d8cc */
                    /* try { // try from 00d4d72c to 00e4d8e7 has its CatchHandler @ 00d4d6e0 */
  GLProgramState::setUniformMat4(this_00,(basic_string *)local_e0,aMStack_78);
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  glEnable(0xb71);
  RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
  glDepthFunc(0x203);
  RenderState::StateBlock::setDepthFunction(RenderState::StateBlock::_defaultState,0x203);
  glEnable(0xb44);
  RenderState::StateBlock::setCullFace(RenderState::StateBlock::_defaultState,true);
  glCullFace(0x405);
  RenderState::StateBlock::setCullFaceSide(RenderState::StateBlock::_defaultState,0x405);
  glDisable(0xbe2);
  RenderState::StateBlock::setBlend(RenderState::StateBlock::_defaultState,false);
  pCVar3 = (Configuration *)Configuration::getInstance();
  uVar4 = Configuration::supportsShareableVAO(pCVar3);
  if ((uVar4 & 1) == 0) {
    GL::enableVertexAttribs(1);
    glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0x2fc));
    glVertexAttribPointer(0,3,0x1406,0,0xc,0);
    glBindBuffer(0x8893,*(undefined4 *)(param_1 + 0x300));
  }
  else {
    GL::bindVAO(*(uint *)(param_1 + 0x2f8));
  }
  glDrawElements(4,6,0x1401,0);
  pCVar3 = (Configuration *)Configuration::getInstance();
  uVar4 = Configuration::supportsShareableVAO(pCVar3);
  if ((uVar4 & 1) == 0) {
    glBindBuffer(0x8892,0);
    glBindBuffer(0x8893,0);
  }
  else {
    GL::bindVAO(0);
  }
  lVar5 = Director::getInstance();
  lVar5 = *(long *)(lVar5 + 0x1b0);
  lVar7 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar5);
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5) + 4;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar5) = lVar7 + 1;
  Vec4::~Vec4(aVStack_c8);
  Mat4::~Mat4((Mat4 *)local_b8);
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

