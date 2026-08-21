
/* cocos2d::Sprite::initWithFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Rect const&) */

undefined8 __thiscall
cocos2d::Sprite::initWithFile(Sprite *this,basic_string *param_1,Rect *param_2)

{
  ulong uVar1;
  basic_string bVar2;
  TextureCache *this_00;
  long lVar3;
  undefined8 uVar4;
  basic_string *pbVar5;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x510) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      pbVar5 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x510),(char *)pbVar5,uVar1);
    }
    *(undefined4 *)(this + 0x528) = 0;
    this_00 = (TextureCache *)Director::getTextureCache(*(Director **)(this + 0x198));
    lVar3 = TextureCache::addImage(this_00,param_1);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00f3e9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(long *)this + 0x600))(this,lVar3,param_2);
      return uVar4;
    }
  }
  return 0;
}

