
/* cocos2d::RenderTexture::initWithWidthAndHeight(int, int, cocos2d::Texture2D::PixelFormat,
   unsigned int) */

undefined4 __thiscall
cocos2d::RenderTexture::initWithWidthAndHeight
          (RenderTexture *this,int param_1,int param_2,undefined4 param_4,int param_5)

{
  long lVar1;
  undefined4 uVar2;
  Rect *pRVar3;
  long lVar4;
  Configuration *pCVar5;
  ulong uVar6;
  void *__s;
  Texture2D *pTVar7;
  Ref *this_00;
  int iVar8;
  int iVar9;
  size_t __size;
  float fVar10;
  float fVar11;
  Rect local_98 [16];
  void *local_88;
  undefined4 local_7c;
  long local_78;
  
                    /* try { // try from 00f3a934 to 0103aaf7 has its CatchHandler @ 00f3ab60 */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  Rect::Rect(local_98,0.0,0.0,(float)param_1,(float)param_2);
  pRVar3 = (Rect *)Rect::operator=((Rect *)(this + 0x2fc),local_98);
  Rect::operator=((Rect *)(this + 0x30c),pRVar3);
  lVar4 = Director::getInstance();
  iVar8 = (int)(*(float *)(lVar4 + 0x1a0) * (float)param_1);
  lVar4 = Director::getInstance();
  fVar10 = (float)iVar8;
  iVar9 = (int)(*(float *)(lVar4 + 0x1a0) * (float)param_2);
  fVar11 = (float)iVar9;
  Rect::Rect(local_98,0.0,0.0,fVar10,fVar11);
  Rect::operator=((Rect *)(this + 0x31c),local_98);
  glGetIntegerv(0x8ca6,this + 0x338);
  pCVar5 = (Configuration *)Configuration::getInstance();
  uVar6 = Configuration::supportsNPOT(pCVar5);
  if ((uVar6 & 1) == 0) {
    iVar8 = ccNextPOT(iVar8);
    iVar9 = ccNextPOT(iVar9);
  }
  __size = (size_t)(iVar8 * iVar9 * 4);
  __s = malloc(__size);
  if (__s == (void *)0x0) {
    uVar2 = 0;
    goto LAB_00f3ac60;
  }
  memset(__s,0,__size);
  *(undefined4 *)(this + 0x358) = param_4;
  pTVar7 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (pTVar7 == (Texture2D *)0x0) {
    uVar2 = 0;
    *(undefined8 *)(this + 0x340) = 0;
  }
  else {
    Texture2D::Texture2D(pTVar7);
    uVar2 = *(undefined4 *)(this + 0x358);
    *(Texture2D **)(this + 0x340) = pTVar7;
    Size::Size((Size *)local_98,fVar10,fVar11);
    Texture2D::initWithData(pTVar7,__s,__size,uVar2,iVar8,iVar9,local_98);
    glGetIntegerv(0x8ca7,&local_7c);
    pCVar5 = (Configuration *)Configuration::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_98,"GL_QCOM");
    uVar6 = Configuration::checkForGLExtension(pCVar5,(basic_string *)local_98);
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((uVar6 & 1) != 0) {
      pTVar7 = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (pTVar7 == (Texture2D *)0x0) {
        uVar2 = 0;
        *(undefined8 *)(this + 0x348) = 0;
        goto LAB_00f3ac58;
      }
                    /* try { // try from 00f3aaf8 to 0103ab7b has its CatchHandler @ 00f3a824 */
      Texture2D::Texture2D(pTVar7);
      uVar2 = *(undefined4 *)(this + 0x358);
      *(Texture2D **)(this + 0x348) = pTVar7;
      Size::Size((Size *)local_98,fVar10,fVar11);
      Texture2D::initWithData(pTVar7,__s,__size,uVar2,iVar8,iVar9,local_98);
    }
    glGenFramebuffers(1,this + 0x32c);
    glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x32c));
    uVar2 = Texture2D::getName(*(Texture2D **)(this + 0x340));
                    /* catch() { ... } // from try @ 00f3a934 with catch @ 00f3ab60 */
    glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar2,0);
    if (param_5 != 0) {
      *(int *)(this + 0x35c) = param_5;
      setupDepthAndStencil(this,iVar8,iVar9);
    }
    Texture2D::setAntiAliasTexParameters(*(Texture2D **)(this + 0x340));
    if (*(Texture2D **)(this + 0x348) != (Texture2D *)0x0) {
      Texture2D::setAntiAliasTexParameters(*(Texture2D **)(this + 0x348));
    }
    this_00 = (Ref *)Sprite::createWithTexture(*(Texture2D **)(this + 0x340));
    if (this_00 != (Ref *)0x0) {
      Ref::retain(this_00);
    }
    if (*(Ref **)(this + 0x380) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x380));
    }
                    /* catch() { ... } // from try @ 00f3abec with catch @ 00f3abc0 */
    *(Ref **)(this + 0x380) = this_00;
    Ref::release(*(Ref **)(this + 0x340));
    uVar2 = 1;
    Sprite::setFlippedY(*(Sprite **)(this + 0x380),true);
                    /* try { // try from 00f3abe4 to 0103abeb has its CatchHandler @ 00f3ac14 */
                    /* try { // try from 00f3abec to 0103ac2f has its CatchHandler @ 00f3abc0 */
    (**(code **)(**(long **)(this + 0x380) + 0x5e0))
              (*(long **)(this + 0x380),&BlendFunc::ALPHA_PREMULTIPLIED);
    (**(code **)(**(long **)(this + 0x380) + 0x4e0))(*(long **)(this + 0x380),1);
    glBindRenderbuffer(0x8d41,local_7c);
                    /* catch() { ... } // from try @ 00f3abe4 with catch @ 00f3ac14 */
    glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x338));
    this[0x37c] = (RenderTexture)0x0;
    (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x380));
  }
LAB_00f3ac58:
  free(__s);
LAB_00f3ac60:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

