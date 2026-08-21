
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,
   std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,
   std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,
   std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey> > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,
   std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
          *this,__tree_node *param_1)

{
  Quaternion *this_00;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 == (__tree_node *)0x0) {
    return;
  }
  destroy(this,*(__tree_node **)param_1);
  destroy(this,*(__tree_node **)(param_1 + 8));
  pvVar3 = *(void **)(param_1 + 0x38);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x40);
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        this_00 = (Quaternion *)((long)pvVar2 + -0x10);
        pvVar2 = (void *)((long)pvVar2 + -0x14);
        cocos2d::Quaternion::~Quaternion(this_00);
      } while (pvVar3 != pvVar2);
      pvVar1 = *(void **)(param_1 + 0x38);
    }
    *(void **)(param_1 + 0x40) = pvVar3;
    operator_delete(pvVar1);
  }
  if (((byte)param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  operator_delete(param_1);
  return;
}

