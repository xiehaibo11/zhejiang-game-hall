
/* MyXMLVisitor::endElement(void*, char const*) */

void __thiscall MyXMLVisitor::endElement(MyXMLVisitor *this,void *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70 [4];
  void **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,param_2);
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>>>
                      *)_tagTables,(basic_string *)local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70[0]);
  }
  if (lVar2 != 0) {
    local_80[0] = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(lVar2 + 0x30);
    plVar3 = *(long **)(lVar2 + 0x60);
    if (plVar3 == (long *)0x0) {
      local_50 = (void **)0x0;
    }
    else if ((long *)(lVar2 + 0x40) == plVar3) {
      local_50 = local_70;
      (**(code **)(*plVar3 + 0x18))();
    }
    else {
      local_50 = (void **)(**(code **)(*plVar3 + 0x10))();
    }
    if (local_80[0] !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0) {
      lVar2 = *(long *)(this + 0x10);
      if ((*(byte *)(lVar2 + -0x48) & 1) != 0) {
        operator_delete(*(void **)(lVar2 + -0x38));
      }
      if ((*(byte *)(lVar2 + -0x60) & 1) != 0) {
        operator_delete(*(void **)(lVar2 + -0x50));
      }
      *(byte **)(this + 0x10) = (byte *)(lVar2 + -0x60);
    }
    if (local_70 == local_50) {
      pcVar4 = *(code **)((long)*local_50 + 0x20);
    }
    else {
      if (local_50 == (void **)0x0) goto LAB_00dd3ae8;
      pcVar4 = *(code **)((long)*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00dd3ae8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

