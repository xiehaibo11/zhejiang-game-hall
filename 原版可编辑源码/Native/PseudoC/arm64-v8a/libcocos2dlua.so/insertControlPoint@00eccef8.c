
/* cocos2d::PointArray::insertControlPoint(cocos2d::Vec2 const&, long) */

void __thiscall cocos2d::PointArray::insertControlPoint(PointArray *this,Vec2 *param_1,long param_2)

{
  std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::insert
            ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0x30),
             *(long *)(this + 0x30) + param_2 * 8,param_1);
  return;
}

