
/* cocos2d::PUBillboardChain::getTextureName() */

void __thiscall cocos2d::PUBillboardChain::getTextureName(PUBillboardChain *this)

{
  long lVar1;
  Director *this_00;
  TextureCache *this_01;
  long lVar2;
  Texture2D *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  lVar2 = TextureCache::getTextureForKey(this_01,(basic_string *)(this + 0xd0));
  if (lVar2 == 0) {
    *(undefined8 *)(this + 0x80) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    init(this,(basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    this_02 = *(Texture2D **)(this + 0x80);
joined_r0x00e5bc4c:
    if (this_02 == (Texture2D *)0x0) goto LAB_00e5bc54;
  }
  else {
    this_02 = *(Texture2D **)(this + 0x80);
    if (this_02 == (Texture2D *)0x0) {
      init(this,(basic_string *)(this + 0xd0));
      this_02 = *(Texture2D **)(this + 0x80);
      goto joined_r0x00e5bc4c;
    }
  }
  Texture2D::getName(this_02);
LAB_00e5bc54:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

