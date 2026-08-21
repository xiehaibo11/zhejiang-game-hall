
/* MyXMLVisitor::tagAttrMapWithXMLElement(char const**) */

void MyXMLVisitor::tagAttrMapWithXMLElement(char **param_1)

{
  long lVar1;
  long lVar2;
  long *in_x1;
  char *pcVar3;
  basic_string *in_x8;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined4 *)(in_x8 + 0x20) = 0x3f800000;
  pcVar3 = (char *)*in_x1;
  if (pcVar3 != (char *)0x0) {
    plVar5 = in_x1 + 2;
    pcVar4 = (char *)in_x1[1];
    if (pcVar4 != (char *)0x0) goto LAB_00dd29dc;
LAB_00dd29cc:
    pcVar3 = (char *)*plVar5;
    plVar6 = plVar5;
    if (pcVar3 != (char *)0x0) {
      while( true ) {
        plVar5 = plVar6 + 2;
        pcVar4 = (char *)plVar6[1];
        if (pcVar4 == (char *)0x0) break;
LAB_00dd29dc:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_70,pcVar3);
        local_50 = local_70;
        lVar2 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                          (in_x8,(piecewise_construct_t *)local_70,(tuple *)&DAT_0141ecaa,
                           (tuple *)&local_50);
        cocos2d::Value::operator=((Value *)(lVar2 + 0x28),pcVar4);
        if (((byte)local_70[0] & 1) == 0) break;
        operator_delete(local_60);
        pcVar3 = (char *)*plVar5;
        plVar6 = plVar5;
        if (pcVar3 == (char *)0x0) goto LAB_00dd2a24;
      }
      goto LAB_00dd29cc;
    }
  }
LAB_00dd2a24:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

