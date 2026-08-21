
/* cocos2d::Sprite::setSpriteFrame(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Sprite::setSpriteFrame(Sprite *this,basic_string *param_1)

{
  ulong uVar1;
  SpriteFrameCache *this_00;
  undefined8 uVar2;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    this_00 = (SpriteFrameCache *)SpriteFrameCache::getInstance();
    uVar2 = SpriteFrameCache::getSpriteFrameByName(this_00,param_1);
                    /* WARNING: Could not recover jumptable at 0x00f41398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x598))(this,uVar2);
    return;
  }
                    /* try { // try from 00f413a0 to 010413b7 has its CatchHandler @ 00f41404 */
  return;
}

