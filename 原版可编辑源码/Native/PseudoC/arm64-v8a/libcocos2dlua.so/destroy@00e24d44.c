
/* std::__ndk1::__tree<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::__map_value_compare<float, std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::less<float>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<float,
   cocos2d::Vec4> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<float,
   cocos2d::Vec4>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
::destroy(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    cocos2d::Vec4::~Vec4((Vec4 *)(param_1 + 0x20));
    operator_delete(param_1);
    return;
  }
  return;
}

