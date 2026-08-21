
/* std::__ndk1::__tree<std::__ndk1::__value_type<int, std::__ndk1::pair<cocos2d::Sprite*, int> >,
   std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int,
   std::__ndk1::pair<cocos2d::Sprite*, int> >, std::__ndk1::less<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<int, std::__ndk1::pair<cocos2d::Sprite*, int> >
   > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   std::__ndk1::pair<cocos2d::Sprite*, int> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>>>
::destroy(__tree<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
                    /* try { // try from 00efadcc to 00ffaddf has its CatchHandler @ 00efb070 */
    destroy(this,*(__tree_node **)(param_1 + 8));
                    /* try { // try from 00efade0 to 00ffb03b has its CatchHandler @ 00efa57c */
    operator_delete(param_1);
    return;
  }
  return;
}

