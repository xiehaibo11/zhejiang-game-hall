
/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::Vector<fairygui::GObject*> >, void*> >
   >::__destroy<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Vector<fairygui::GObject*> >
   >(std::__ndk1::integral_constant<bool, false>,
   std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::Vector<fairygui::GObject*> >, void*> >&,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Vector<fairygui::GObject*> >*) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,void*>>>
     ::
     __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Vector<fairygui::GObject*>>>
               (undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_3 + 0x18);
  puVar2 = *(undefined8 **)(param_3 + 0x20);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(param_3 + 0x18);
  }
  *(undefined8 **)(param_3 + 0x20) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(param_3 + 0x20) = puVar1;
    operator_delete(puVar1);
  }
  if ((*param_3 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_3 + 0x10));
  return;
}

