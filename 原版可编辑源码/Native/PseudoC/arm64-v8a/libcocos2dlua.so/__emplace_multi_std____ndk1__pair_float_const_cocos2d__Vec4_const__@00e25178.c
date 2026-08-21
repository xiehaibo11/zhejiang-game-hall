
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<float, cocos2d::Vec4>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::__map_value_compare<float, std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::less<float>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<float,
   cocos2d::Vec4> > >::__emplace_multi<std::__ndk1::pair<float const, cocos2d::Vec4>
   const&>(std::__ndk1::pair<float const, cocos2d::Vec4> const&) */

__tree_node_base * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
::__emplace_multi<std::__ndk1::pair<float_const,cocos2d::Vec4>const&>
          (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
           *this,pair *param_1)

{
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var5;
  
  p_Var2 = operator_new(0x30);
  *(undefined4 *)(p_Var2 + 0x1c) = *(undefined4 *)param_1;
  cocos2d::Vec4::Vec4((Vec4 *)(p_Var2 + 0x20),(Vec4 *)(param_1 + 4));
  p_Var4 = this + 8;
  p_Var5 = p_Var4;
  if (*(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
        **)p_Var4 !=
      (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
       *)0x0) {
    p_Var1 = *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
               **)p_Var4;
    do {
      while (p_Var4 = p_Var1, *(float *)(p_Var2 + 0x1c) < *(float *)(p_Var4 + 0x1c)) {
        p_Var1 = *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                   **)p_Var4;
        p_Var5 = p_Var4;
        if (*(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
              **)p_Var4 ==
            (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
             *)0x0) goto LAB_00e251f8;
      }
      p_Var1 = *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                 **)(p_Var4 + 8);
    } while (*(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
               **)(p_Var4 + 8) !=
             (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
              *)0x0);
    p_Var5 = p_Var4 + 8;
  }
LAB_00e251f8:
  *(undefined8 *)p_Var2 = 0;
  *(undefined8 *)(p_Var2 + 8) = 0;
  *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
    **)(p_Var2 + 0x10) = p_Var4;
  *(__tree_node_base **)p_Var5 = p_Var2;
  p_Var3 = p_Var2;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    p_Var3 = *(__tree_node_base **)p_Var5;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),p_Var3);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return p_Var2;
}

