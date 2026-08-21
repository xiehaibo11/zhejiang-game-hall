
/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> >,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> >, std::__ndk1::hash<int>,
   true>, std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> >,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> > >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> >, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> >, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocosbuilder::CCBSequenceProperty*> >, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>
           *this,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar3 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_00cf0c10;
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(param_2 + 2);
      if (param_2 != plVar3) {
        cocos2d::
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
        ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
                 *)(plVar3 + 3));
        *(undefined4 *)(plVar3 + 7) = *(undefined4 *)(param_2 + 7);
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>
        ::
        __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,void*>*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>
                    *)(plVar3 + 3),param_2[5],0);
        for (plVar4 = (long *)plVar3[5]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          cocos2d::Ref::retain((Ref *)plVar4[5]);
        }
      }
      lVar1 = *plVar3;
      FUN_00cf0c9c(this,plVar3);
      param_2 = (long *)*param_2;
      plVar3 = (long *)lVar1;
    }
  }
LAB_00cf0c40:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    __emplace_multi<std::__ndk1::pair<int_const,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>const&>
              (this,(pair *)(param_2 + 2));
  }
  return;
LAB_00cf0c10:
  do {
    pvVar5 = (void *)*plVar3;
    cocos2d::
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
    ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
            *)(plVar3 + 3));
    operator_delete(plVar3);
    plVar3 = pvVar5;
  } while (pvVar5 != (void *)0x0);
  goto LAB_00cf0c40;
}

