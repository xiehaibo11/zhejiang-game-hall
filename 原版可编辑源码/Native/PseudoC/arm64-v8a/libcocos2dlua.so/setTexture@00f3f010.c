
/* cocos2d::Sprite::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::Sprite::setTexture(Sprite *this,Texture2D *param_1)

{
  long lVar1;
  undefined8 uVar2;
  TextureCache *pTVar3;
  Image *this_00;
  Ref *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x1d8) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
    uVar2 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_50,param_1);
    (**(code **)(*(long *)this + 0x310))(this,uVar2);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
                    /* try { // try from 00f3f084 to 0103f0a7 has its CatchHandler @ 00f3f504 */
  if (param_1 == (Texture2D *)0x0) {
    pTVar3 = (TextureCache *)Director::getTextureCache(*(Director **)(this + 0x198));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"/cc_2x2_white_image");
    param_1 = (Texture2D *)TextureCache::getTextureForKey(pTVar3,(basic_string *)local_50);
                    /* try { // try from 00f3f0b8 to 0103f0cf has its CatchHandler @ 00f3f4d0 */
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (param_1 == (Texture2D *)0x0) {
      this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
      if (this_00 != (Image *)0x0) {
        Image::Image(this_00);
      }
      Image::initWithRawData(this_00,&DAT_01777960,0x10,2,2,8,false);
      pTVar3 = (TextureCache *)Director::getTextureCache(*(Director **)(this + 0x198));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"/cc_2x2_white_image");
      param_1 = (Texture2D *)TextureCache::addImage(pTVar3,this_00,(basic_string *)local_50);
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (this_00 != (Image *)0x0) {
        Ref::release((Ref *)this_00);
      }
    }
  }
                    /* try { // try from 00f3f158 to 0103f17b has its CatchHandler @ 00f3f504 */
  if (*(int *)(this + 0x42c) != 3) {
    this_01 = *(Ref **)(this + 0x368);
    if (this_01 != (Ref *)param_1) {
      if (param_1 != (Texture2D *)0x0) {
        Ref::retain((Ref *)param_1);
        this_01 = *(Ref **)(this + 0x368);
      }
      if (this_01 != (Ref *)0x0) {
        Ref::release(this_01);
      }
      *(Texture2D **)(this + 0x368) = param_1;
    }
                    /* try { // try from 00f3f18c to 0103f1a3 has its CatchHandler @ 00f3f4c0 */
    (**(code **)(*(long *)this + 0x648))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

