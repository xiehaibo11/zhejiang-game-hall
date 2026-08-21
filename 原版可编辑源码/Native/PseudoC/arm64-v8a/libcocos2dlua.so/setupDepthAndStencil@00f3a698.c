
/* cocos2d::RenderTexture::setupDepthAndStencil(int, int) */

void __thiscall
cocos2d::RenderTexture::setupDepthAndStencil(RenderTexture *this,int param_1,int param_2)

{
  Configuration *pCVar1;
  ulong uVar2;
  undefined4 uVar3;
  RenderTexture *pRVar4;
  
  pCVar1 = (Configuration *)Configuration::getInstance();
  uVar2 = Configuration::supportsOESPackedDepthStencil(pCVar1);
  pRVar4 = this + 0x330;
  glGenRenderbuffers(1,pRVar4);
  if ((uVar2 & 1) == 0) {
    pRVar4 = this + 0x334;
    glGenRenderbuffers(1,pRVar4);
                    /* try { // try from 00f3a740 to 0103a747 has its CatchHandler @ 00f3a780 */
                    /* try { // try from 00f3a748 to 0103a79b has its CatchHandler @ 00f3a71c */
    glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0x330));
    pCVar1 = (Configuration *)Configuration::getInstance();
    uVar2 = Configuration::supportsOESDepth24(pCVar1);
    uVar3 = 0x81a5;
    if ((uVar2 & 1) != 0) {
      uVar3 = 0x81a6;
    }
    glRenderbufferStorage(0x8d41,uVar3,param_1,param_2);
    glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0x334));
                    /* catch() { ... } // from try @ 00f3a740 with catch @ 00f3a780 */
    glRenderbufferStorage(0x8d41,0x8d48,param_1,param_2);
    glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,*(undefined4 *)(this + 0x330));
  }
  else {
    glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0x330));
    glRenderbufferStorage(0x8d41,*(undefined4 *)(this + 0x35c),param_1,param_2);
    glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,*(undefined4 *)(this + 0x330));
    if (*(int *)(this + 0x35c) != 0x88f0) {
                    /* catch() { ... } // from try @ 00f3a748 with catch @ 00f3a71c */
      return;
    }
  }
  glFramebufferRenderbuffer(0x8d40,0x8d20,0x8d41,*(undefined4 *)pRVar4);
  return;
}

