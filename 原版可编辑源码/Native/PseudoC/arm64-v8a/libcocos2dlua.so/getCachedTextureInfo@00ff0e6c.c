
/* cocos2d::TextureCache::getCachedTextureInfo() const */

void cocos2d::TextureCache::getCachedTextureInfo(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  size_t sVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long *plVar6;
  uint uVar7;
  Texture2D *this;
  char acStack_1070 [4096];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  plVar6 = *(long **)(in_x0 + 0x158);
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
                    /* catch() { ... } // from try @ 00ff0d74 with catch @ 00ff0ec4 */
      memset(acStack_1070,0,0x1000);
      this = (Texture2D *)plVar6[5];
      iVar2 = Texture2D::getBitsPerPixelForFormat(this);
      iVar3 = Texture2D::getPixelsWide(this);
      iVar4 = Texture2D::getPixelsHigh(this);
      Ref::getReferenceCount((Ref *)this);
      Texture2D::getName(this);
      Texture2D::getPixelsWide(this);
      Texture2D::getPixelsHigh(this);
      FUN_00ff1058(acStack_1070);
      sVar5 = strlen(acStack_1070);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,acStack_1070,sVar5);
      plVar6 = (long *)*plVar6;
      uVar7 = uVar7 + ((uint)(iVar3 * iVar2 * iVar4) >> 3);
    } while (plVar6 != (long *)0x0);
  }
  FUN_00ff1058((double)((float)uVar7 * 9.536743e-07),acStack_1070);
  sVar5 = strlen(acStack_1070);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,acStack_1070,sVar5);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

