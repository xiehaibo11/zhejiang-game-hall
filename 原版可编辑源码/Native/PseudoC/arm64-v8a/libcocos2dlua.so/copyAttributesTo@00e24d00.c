
/* cocos2d::PUColorAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUColorAffector::copyAttributesTo(PUColorAffector *this,PUAffector *param_1)

{
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  if (this != (PUColorAffector *)param_1) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__tree_node<std::__ndk1::__value_type<float,cocos2d::Vec4>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                *)(param_1 + 0xb0),*(undefined8 *)(this + 0xb0),this + 0xb8);
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(this + 200);
                    /* try { // try from 00e24d40 to 00f24d4b has its CatchHandler @ 00e24e20 */
  return;
}

