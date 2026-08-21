
/* cocos2d::Sprite::initWithSpriteFrameName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::Sprite::initWithSpriteFrameName(Sprite *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  SpriteFrameCache *this_00;
  undefined8 uVar3;
  basic_string *pbVar4;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
                    /* try { // try from 00f3e9f0 to 0103e9f7 has its CatchHandler @ 00f3f4d4 */
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x510) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar4 = param_1 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x510),(char *)pbVar4,uVar1);
    }
    *(undefined4 *)(this + 0x528) = 1;
    this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
    uVar3 = SpriteFrameCache::getSpriteFrameByName(this_00,param_1);
                    /* WARNING: Could not recover jumptable at 0x00f3ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(long *)this + 0x610))(this,uVar3);
    return uVar3;
  }
  return 0;
}

