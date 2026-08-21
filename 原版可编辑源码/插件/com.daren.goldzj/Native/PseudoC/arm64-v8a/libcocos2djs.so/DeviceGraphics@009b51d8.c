
/* cocos2d::renderer::DeviceGraphics::DeviceGraphics() */

void __thiscall cocos2d::renderer::DeviceGraphics::DeviceGraphics(DeviceGraphics *this)

{
  State *pSVar1;
  ulong uVar2;
  ulong uVar3;
  
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__DeviceGraphics_01c6ad88;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f800000;
  glGetIntegerv(0x8b4c,this + 0x34);
  glGetIntegerv(0x8869,this + 0x40);
  glGetIntegerv(0x8dfd,this + 0x38);
  glGetIntegerv(0x8872,this + 0x3c);
  *(undefined8 *)(this + 0x44) = 0x100000001;
  __android_log_print(3,"renderer",
                      " (616): Device caps: maxVextexTextures: %d, maxFragUniforms: %d, maxTextureUints: %d, maxVertexAttributes: %d, maxDrawBuffers: %d, maxColorAttatchments: %d\n"
                      ,*(undefined4 *)(this + 0x34),*(undefined4 *)(this + 0x38),
                      *(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x40),1,1);
  initStates();
  uVar2 = (ulong)*(int *)(this + 0x40);
  uVar3 = *(long *)(this + 0x80) - *(long *)(this + 0x78) >> 2;
  if (uVar3 < uVar2) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x78),uVar2 - uVar3);
    uVar2 = (ulong)*(int *)(this + 0x40);
  }
  else if (uVar3 != uVar2) {
                    /* try { // try from 009b52e0 to 00ab53c3 has its CatchHandler @ 009b50cc */
    *(ulong *)(this + 0x80) = *(long *)(this + 0x78) + uVar2 * 4;
  }
  uVar3 = *(long *)(this + 0x68) - *(long *)(this + 0x60) >> 2;
  if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
    if (uVar2 < uVar3) {
      *(ulong *)(this + 0x68) = *(long *)(this + 0x60) + uVar2 * 4;
    }
  }
  else {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x60),uVar2 - uVar3);
  }
  pSVar1 = operator_new(0xa8);
  State::State(pSVar1);
  *(State **)(this + 0xc0) = pSVar1;
  pSVar1 = operator_new(0xa8);
  State::State(pSVar1);
  *(State **)(this + 0xb8) = pSVar1;
  State::setTexture(*(State **)(this + 0xc0),(long)*(int *)(this + 0x3c),(Texture *)0x0);
                    /* catch() { ... } // from try @ 009b514c with catch @ 009b5354 */
                    /* catch() { ... } // from try @ 009b5140 with catch @ 009b5358 */
  State::setTexture(*(State **)(this + 0xb8),(long)*(int *)(this + 0x3c),(Texture *)0x0);
                    /* catch() { ... } // from try @ 009b5120 with catch @ 009b535c */
  glGetIntegerv(0x8ca6,this + 0x30);
                    /* catch() { ... } // from try @ 009b5158 with catch @ 009b536c */
  return;
}

