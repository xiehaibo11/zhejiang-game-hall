
/* cocos2d::FileUtils::getNewFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::getNewFilename(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  long lVar4;
  basic_string *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                      *)(param_1 + 8),in_x1);
  if (lVar4 == 0) {
    if (in_x8 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 in_x1) {
      uVar1 = *(ulong *)(in_x1 + 8);
      pbVar2 = *(basic_string **)(in_x1 + 0x10);
      if (((byte)*in_x1 & 1) == 0) {
        pbVar2 = in_x1 + 1;
        uVar1 = (ulong)((byte)*in_x1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,(char *)pbVar2,uVar1);
    }
  }
  else {
    cocos2d::Value::asString();
    if (((byte)*in_x8 & 1) == 0) {
      *(undefined2 *)in_x8 = 0;
    }
    else {
      **(undefined1 **)(in_x8 + 0x10) = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
      if (((byte)*in_x8 & 1) != 0) {
        operator_delete(*(void **)(in_x8 + 0x10));
        *(undefined8 *)in_x8 = 0;
      }
    }
    *(undefined8 *)(in_x8 + 0x10) = local_40;
    *(undefined8 *)(in_x8 + 8) = uStack_48;
    *(undefined8 *)in_x8 = local_50;
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

