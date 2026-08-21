
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,
   std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,
   std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,
   std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,
   std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    pvVar1 = *(void **)(param_1 + 0x38);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x40) = pvVar1;
      operator_delete(pvVar1);
    }
    if (((byte)param_1[0x20] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
    operator_delete(param_1);
    return;
  }
  return;
}

