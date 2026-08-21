
/* MyXMLVisitor::setTagDescription(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::function<std::__ndk1::pair<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >,
   cocos2d::ui::RichElement*> (std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >
   const&)>) */

void MyXMLVisitor::setTagDescription(piecewise_construct_t *param_1,byte param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  piecewise_construct_t *local_88;
  byte local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = param_2 & 1;
  plVar4 = (long *)param_3[4];
  if (plVar4 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_3 == plVar4) {
    local_50 = alStack_70;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  }
  local_88 = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MyXMLVisitor::TagBehavior>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)_tagTables,param_1,(tuple *)&DAT_0141ecaa,(tuple *)&local_88);
  plVar3 = *(long **)(lVar2 + 0x60);
  plVar4 = (long *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(byte *)(lVar2 + 0x30) = local_80;
  if (plVar4 == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00dd137c:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00dd137c;
  }
  if (local_50 == (long *)0x0) {
    *(undefined8 *)(lVar2 + 0x60) = 0;
  }
  else if (alStack_70 == local_50) {
    *(long **)(lVar2 + 0x60) = plVar4;
    (**(code **)(*local_50 + 0x18))(local_50,plVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd1690 with catch @ 00dd13c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00dd1700 with catch @ 00dd13c0
                        */
    if (alStack_70 == local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00dd13f0;
      pcVar5 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar5)();
  }
  else {
    *(long **)(lVar2 + 0x60) = local_50;
    local_50 = (long *)0x0;
  }
LAB_00dd13f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

