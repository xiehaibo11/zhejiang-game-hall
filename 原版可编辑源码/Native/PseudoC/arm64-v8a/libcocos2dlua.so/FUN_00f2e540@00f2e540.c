
long FUN_00f2e540(void)

{
  long lVar1;
  Director *pDVar2;
  TextureCache *pTVar3;
  long lVar4;
  ulong uVar5;
  Ref *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"/__firePngData");
  pDVar2 = (Director *)cocos2d::Director::getInstance();
  pTVar3 = (TextureCache *)cocos2d::Director::getTextureCache(pDVar2);
                    /* try { // try from 00f2e57c to 0102e7c3 has its CatchHandler @ 00f2e57c
                       catch() { ... } // from try @ 00f2e57c with catch @ 00f2e57c
                       catch() { ... } // from try @ 00f2e7d4 with catch @ 00f2e57c */
  lVar4 = cocos2d::TextureCache::getTextureForKey(pTVar3,(basic_string *)local_50);
  if (lVar4 == 0) {
    this = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this != (Ref *)0x0) {
      cocos2d::Image::Image((Image *)this);
      uVar5 = cocos2d::Image::initWithImageData((Image *)this,(uchar *)&PNG_0143c814,0x2d2);
      if ((uVar5 & 1) != 0) {
        pDVar2 = (Director *)cocos2d::Director::getInstance();
        pTVar3 = (TextureCache *)cocos2d::Director::getTextureCache(pDVar2);
        lVar4 = cocos2d::TextureCache::addImage(pTVar3,(Image *)this,(basic_string *)local_50);
        goto joined_r0x00f2e634;
      }
    }
    lVar4 = 0;
  }
  else {
    this = (Ref *)0x0;
  }
joined_r0x00f2e634:
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (this != (Ref *)0x0) {
    cocos2d::Ref::release(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

