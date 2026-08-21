
/* std::__ndk1::__tree<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> >, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, cocos2d::Vector<cocostudio::timeline::Timeline*> >,
   std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   cocos2d::Vector<cocostudio::timeline::Timeline*> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
::destroy(__tree<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::Vector<cocostudio::timeline::Timeline*>>>>
          *this,__tree_node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 != puVar2) {
      do {
        cocos2d::Ref::release((Ref *)*puVar1);
        puVar1 = puVar1 + 1;
      } while (puVar2 != puVar1);
      puVar1 = *(undefined8 **)(param_1 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x30) = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x30) = puVar1;
      operator_delete(puVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

