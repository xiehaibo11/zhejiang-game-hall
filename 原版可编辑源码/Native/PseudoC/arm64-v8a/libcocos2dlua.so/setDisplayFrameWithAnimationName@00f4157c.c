
/* cocos2d::Sprite::setDisplayFrameWithAnimationName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, long) */

void __thiscall
cocos2d::Sprite::setDisplayFrameWithAnimationName(Sprite *this,basic_string *param_1,long param_2)

{
  ulong uVar1;
  AnimationCache *this_00;
  long lVar2;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    this_00 = (AnimationCache *)AnimationCache::getInstance();
    lVar2 = AnimationCache::getAnimation(this_00,param_1);
                    /* WARNING: Could not recover jumptable at 0x00f415e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x598))
              (this,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x40) + param_2 * 8) + 0x30));
    return;
  }
  return;
}

