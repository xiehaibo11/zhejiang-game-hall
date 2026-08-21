
/* cocosbuilder::NodeLoader::onHandlePropTypeInteger(cocos2d::Node*, cocos2d::Node*, char const*,
   int, cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::onHandlePropTypeInteger
               (Node *param_1,Node *param_2,char *param_3,int param_4,CCBReader *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined1 *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp((char *)(ulong)(uint)param_4,"tag");
  if (iVar2 == 0) {
    (**(code **)(*(long *)param_2 + 0x2c0))(param_2,(ulong)param_5 & 0xffffffff);
  }
  else {
    cocos2d::Value::Value(aVStack_58,(int)param_5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,(char *)(ulong)(uint)param_4);
    local_60 = local_80;
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                      ((basic_string *)(param_1 + 0x28),(piecewise_construct_t *)local_80,
                       (tuple *)&DAT_01418785,(tuple *)&local_60);
    cocos2d::Value::operator=((Value *)(lVar3 + 0x28),aVStack_58);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    cocos2d::Value::~Value(aVStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

