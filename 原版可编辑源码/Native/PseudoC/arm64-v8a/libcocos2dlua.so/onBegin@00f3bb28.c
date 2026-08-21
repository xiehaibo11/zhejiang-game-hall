
/* cocos2d::RenderTexture::onBegin() */

void __thiscall cocos2d::RenderTexture::onBegin(RenderTexture *this)

{
  long lVar1;
  undefined4 uVar2;
  Director *pDVar3;
  undefined8 *puVar4;
  float *pfVar5;
  Configuration *this_00;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float local_90;
  float fStack_8c;
  ulong local_88;
  float local_80;
  float local_7c;
  void *local_78;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pDVar3 = (Director *)Director::getInstance();
  puVar4 = (undefined8 *)Director::getMatrix(pDVar3,1);
  uVar7 = *puVar4;
  uVar15 = puVar4[3];
  uVar14 = puVar4[2];
  uVar12 = puVar4[5];
  uVar11 = puVar4[4];
  uVar9 = puVar4[7];
  uVar8 = puVar4[6];
  *(undefined8 *)(this + 0x608) = puVar4[1];
  *(undefined8 *)(this + 0x600) = uVar7;
  *(undefined8 *)(this + 0x638) = uVar9;
  *(undefined8 *)(this + 0x630) = uVar8;
  *(undefined8 *)(this + 0x628) = uVar12;
  *(undefined8 *)(this + 0x620) = uVar11;
  *(undefined8 *)(this + 0x618) = uVar15;
  *(undefined8 *)(this + 0x610) = uVar14;
  Director::loadMatrix(pDVar3,1,this + 0x680);
                    /* try { // try from 00f3bb90 to 0103bb97 has its CatchHandler @ 00f3bc4c */
  puVar4 = (undefined8 *)Director::getMatrix(pDVar3,0);
  uVar7 = *puVar4;
  uVar15 = puVar4[3];
  uVar14 = puVar4[2];
  uVar12 = puVar4[5];
  uVar11 = puVar4[4];
  uVar9 = puVar4[7];
  uVar8 = puVar4[6];
  *(undefined8 *)(this + 0x5c8) = puVar4[1];
  *(undefined8 *)(this + 0x5c0) = uVar7;
  *(undefined8 *)(this + 0x5f8) = uVar9;
  *(undefined8 *)(this + 0x5f0) = uVar8;
  *(undefined8 *)(this + 0x5e8) = uVar12;
  *(undefined8 *)(this + 0x5e0) = uVar11;
  *(undefined8 *)(this + 0x5d8) = uVar15;
  *(undefined8 *)(this + 0x5d0) = uVar14;
  Director::loadMatrix(pDVar3,0,this + 0x640);
  if (this[0x2f8] == (RenderTexture)0x0) {
    Director::setProjection(pDVar3,*(undefined4 *)(pDVar3 + 0x194));
    pfVar5 = (float *)Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x340));
                    /* try { // try from 00f3bbd8 to 0103bbdf has its CatchHandler @ 00f3bc48 */
                    /* try { // try from 00f3bbe0 to 0103bc6b has its CatchHandler @ 00f3b3b8 */
    Director::getWinSizeInPixels();
    fVar10 = *pfVar5;
    fVar13 = pfVar5[1];
    Mat4::Mat4((Mat4 *)&local_88);
    Mat4::createOrthographicOffCenter
              (-1.0 / (local_90 / fVar10),1.0 / (local_90 / fVar10),-1.0 / (fStack_8c / fVar13),
               1.0 / (fStack_8c / fVar13),-1.0,1.0,(Mat4 *)&local_88);
    Director::multiplyMatrix(pDVar3,1,&local_88);
    Mat4::~Mat4((Mat4 *)&local_88);
  }
  Rect::Rect((Rect *)&local_88);
  local_80 = *(float *)(this + 0x324);
                    /* catch() { ... } // from try @ 00f3b768 with catch @ 00f3bc48
                       catch() { ... } // from try @ 00f3bbd8 with catch @ 00f3bc48 */
                    /* catch() { ... } // from try @ 00f3b694 with catch @ 00f3bc4c
                       catch() { ... } // from try @ 00f3bb90 with catch @ 00f3bc4c */
  local_7c = *(float *)(this + 0x328);
                    /* catch() { ... } // from try @ 00f3b54c with catch @ 00f3bc50
                       catch() { ... } // from try @ 00f3bab8 with catch @ 00f3bc50 */
  fVar10 = (local_80 / (float)*(undefined8 *)(this + 0x314)) *
           ((float)*(undefined8 *)(this + 0x30c) - (float)*(undefined8 *)(this + 0x2fc));
  fVar13 = (local_7c / (float)((ulong)*(undefined8 *)(this + 0x314) >> 0x20)) *
           ((float)((ulong)*(undefined8 *)(this + 0x30c) >> 0x20) -
           (float)((ulong)*(undefined8 *)(this + 0x2fc) >> 0x20));
  local_88 = CONCAT44(fVar13,fVar10);
  glViewport((int)fVar10,(int)fVar13,(int)local_80,(int)local_7c);
  glGetIntegerv(0x8ca6,this + 0x338);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x32c));
  this_00 = (Configuration *)Configuration::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,"GL_QCOM");
  uVar6 = Configuration::checkForGLExtension(this_00,(basic_string *)&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((uVar6 & 1) != 0) {
    uVar2 = Texture2D::getName(*(Texture2D **)(this + 0x348));
    glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar2,0);
    glClear(0x4100);
    uVar2 = Texture2D::getName(*(Texture2D **)(this + 0x340));
    glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

