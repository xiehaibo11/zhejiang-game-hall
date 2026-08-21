
/* cocos2d::PUColorAffector::clearColorMap() */

void __thiscall cocos2d::PUColorAffector::clearColorMap(PUColorAffector *this)

{
                    /* try { // try from 00e24960 to 00f2496b has its CatchHandler @ 00e24ea0 */
  std::__ndk1::
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  ::destroy((__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
             *)(this + 0xb0),*(__tree_node **)(this + 0xb8));
  *(PUColorAffector **)(this + 0xb0) = this + 0xb8;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}

