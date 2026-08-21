
/* cocos2d::ui::EditBoxImplAndroid::~EditBoxImplAndroid() */

void __thiscall cocos2d::ui::EditBoxImplAndroid::~EditBoxImplAndroid(EditBoxImplAndroid *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00debc6c to 00eebc73 has its CatchHandler @ 00debc78 */
                    /* try { // try from 00debc74 to 00eebc9b has its CatchHandler @ 00debb58 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00debc6c with catch @ 00debc78
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00debc14 with catch @ 00debc7c
                        */
  lVar1 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00debbb8 with catch @ 00debc80
                        */
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__EditBoxImplAndroid_016e6108;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>>>
  ::__erase_unique<int>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::EditBoxImplAndroid*>>>
              *)&DAT_01788ae0,(int *)(this + 0xb8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"removeEditBox");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01788ac8,(basic_string *)local_50,*(int *)(this + 0xb8));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  EditBoxImplCommon::~EditBoxImplCommon((EditBoxImplCommon *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

