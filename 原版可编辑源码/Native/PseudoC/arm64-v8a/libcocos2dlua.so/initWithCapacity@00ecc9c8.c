
/* cocos2d::PointArray::initWithCapacity(long) */

undefined8 __thiscall cocos2d::PointArray::initWithCapacity(PointArray *this,long param_1)

{
  std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::reserve
            ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0x30),param_1);
  return 1;
}

