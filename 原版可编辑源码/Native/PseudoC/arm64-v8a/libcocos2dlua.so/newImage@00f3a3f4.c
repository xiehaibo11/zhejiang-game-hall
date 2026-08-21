
/* cocos2d::RenderTexture::newImage(bool) */

Image * __thiscall cocos2d::RenderTexture::newImage(RenderTexture *this,bool param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  float *pfVar4;
  Image *this_00;
  uchar *puVar5;
  uchar *puVar6;
  Configuration *this_01;
  ulong uVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(Texture2D **)(this + 0x340) == (Texture2D *)0x0) {
    this_00 = (Image *)0x0;
  }
  else {
    pfVar4 = (float *)Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x340));
    fVar13 = *pfVar4;
    fVar14 = pfVar4[1];
                    /* catch() { ... } // from try @ 00f3a46c with catch @ 00f3a440 */
    this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this_00 != (Image *)0x0) {
      Image::Image(this_00);
    }
    iVar9 = (int)fVar13;
    uVar10 = (uint)fVar14;
                    /* try { // try from 00f3a464 to 0103a46b has its CatchHandler @ 00f3a498 */
                    /* try { // try from 00f3a46c to 0103a4b3 has its CatchHandler @ 00f3a440 */
    iVar1 = uVar10 * iVar9 * 4;
    iVar11 = iVar1;
    if ((int)(uVar10 * iVar9) < 0) {
      iVar11 = -1;
    }
    puVar5 = operator_new__((long)iVar11,(nothrow_t *)&std::nothrow);
    if (puVar5 != (uchar *)0x0) {
                    /* catch() { ... } // from try @ 00f3a464 with catch @ 00f3a498 */
      puVar6 = operator_new__((long)iVar11,(nothrow_t *)&std::nothrow);
      if (puVar6 != (uchar *)0x0) {
        glGetIntegerv(0x8ca6);
        glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x32c));
        this_01 = (Configuration *)Configuration::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_90,"GL_QCOM");
        uVar7 = Configuration::checkForGLExtension(this_01,(basic_string *)local_90);
        if (((byte)local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        if ((uVar7 & 1) != 0) {
          uVar3 = Texture2D::getName(*(Texture2D **)(this + 0x348));
          glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar3,0);
          glClear(0x4100);
          uVar3 = Texture2D::getName(*(Texture2D **)(this + 0x340));
                    /* catch() { ... } // from try @ 00f3a578 with catch @ 00f3a54c */
          glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar3,0);
        }
        glPixelStorei(0xd05,1);
                    /* try { // try from 00f3a570 to 0103a577 has its CatchHandler @ 00f3a5a0 */
                    /* try { // try from 00f3a578 to 0103a5bb has its CatchHandler @ 00f3a54c */
        glReadPixels(0,0,iVar9,uVar10,0x1908,0x1401,puVar6);
        glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x338));
        puVar8 = puVar6;
                    /* catch() { ... } // from try @ 00f3a570 with catch @ 00f3a5a0 */
        if ((param_1) && (puVar8 = puVar5, 0 < (int)uVar10)) {
          iVar11 = 0;
          uVar7 = (ulong)uVar10;
          iVar12 = iVar9 * (uVar10 - 1) * 4;
          do {
            memcpy(puVar5 + iVar11,puVar6 + iVar12,(long)(iVar9 * 4));
            iVar12 = iVar12 + iVar9 * -4;
            uVar7 = uVar7 - 1;
            iVar11 = iVar11 + iVar9 * 4;
          } while (uVar7 != 0);
        }
        Image::initWithRawData(this_00,puVar8,(long)iVar1,iVar9,uVar10,8,false);
        operator_delete__(puVar5);
        puVar5 = puVar6;
      }
      operator_delete__(puVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

