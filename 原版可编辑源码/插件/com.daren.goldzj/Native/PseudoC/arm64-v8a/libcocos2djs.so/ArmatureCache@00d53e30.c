
/* dragonBones::ArmatureCache::ArmatureCache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
dragonBones::ArmatureCache::ArmatureCache
          (ArmatureCache *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  CCFactory *this_00;
  Ref *this_01;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ArmatureCache_01c91b10;
  cocos2d::Color4F::Color4F((Color4F *)(this + 0x18),-1.0,-1.0,-1.0,-1.0);
  cocos2d::Color4F::Color4F((Color4F *)(this + 0x28),1.0,1.0,1.0,1.0);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x61] = (ArmatureCache)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(ArmatureCache **)(this + 0x78) = this + 0x80;
  if (CCFactory::_factory == (CCFactory *)0x0) {
    this_00 = operator_new(0x70);
    CCFactory::CCFactory(this_00);
    CCFactory::_factory = this_00;
  }
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  this_01 = (Ref *)(**(code **)(*(long *)CCFactory::_factory + 0xf8))
                             (CCFactory::_factory,param_1,param_2,local_70,param_3);
  *(Ref **)(this + 0x38) = this_01;
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
    this_01 = *(Ref **)(this + 0x38);
  }
  if (this_01 != (Ref *)0x0) {
    cocos2d::Ref::retain(this_01);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

