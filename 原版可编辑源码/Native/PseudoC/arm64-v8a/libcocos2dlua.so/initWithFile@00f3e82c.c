
/* cocos2d::Sprite::initWithFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::Sprite::initWithFile(Sprite *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  uint uVar4;
  TextureCache *this_00;
  long lVar5;
  basic_string *pbVar6;
  Size aSStack_50 [8];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x510) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      pbVar6 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
                    /* try { // try from 00f3e884 to 0103e9ef has its CatchHandler @ 00f3e884
                       catch() { ... } // from try @ 00f3e884 with catch @ 00f3e884
                       catch() { ... } // from try @ 00f3f418 with catch @ 00f3e884 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x510),(char *)pbVar6,uVar1);
    }
    *(undefined4 *)(this + 0x528) = 0;
    this_00 = (TextureCache *)Director::getTextureCache(*(Director **)(this + 0x198));
    lVar5 = TextureCache::addImage(this_00,param_1);
    uVar4 = 0;
    if (lVar5 != 0) {
      Rect::Rect(aRStack_48,(Rect *)Rect::ZERO);
      Texture2D::getContentSize();
      Size::operator=(aSStack_40,aSStack_50);
      uVar4 = (**(code **)(*(long *)this + 0x600))(this,lVar5,aRStack_48);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

