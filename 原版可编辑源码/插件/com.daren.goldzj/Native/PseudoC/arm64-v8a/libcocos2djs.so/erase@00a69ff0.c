
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff> >
   >::erase(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>, void*>*>) */

undefined8 __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
::erase(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *local_50 [2];
  char local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a69f44 with catch @ 00a69ff8 */
                    /* catch() { ... } // from try @ 00a69ed4 with catch @ 00a69ffc */
                    /* catch() { ... } // from try @ 00a69f4c with catch @ 00a6a000 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00a69ec0 with catch @ 00a6a010 */
  uVar4 = *param_2;
                    /* catch() { ... } // from try @ 00a69e94 with catch @ 00a6a014 */
  remove(local_50);
  pvVar3 = local_50[0];
  local_50[0] = (void *)0x0;
                    /* catch() { ... } // from try @ 00a69f2c with catch @ 00a6a024 */
  if (pvVar3 == (void *)0x0) goto LAB_00a6a058;
  if (local_40 != '\0') {
    if ((*(byte *)((long)pvVar3 + 0x40) & 1) == 0) {
      if ((*(byte *)((long)pvVar3 + 0x28) & 1) == 0) goto LAB_00a6a040;
LAB_00a6a090:
      operator_delete(*(void **)((long)pvVar3 + 0x38));
      bVar1 = *(byte *)((long)pvVar3 + 0x10);
    }
    else {
      operator_delete(*(void **)((long)pvVar3 + 0x50));
      if ((*(byte *)((long)pvVar3 + 0x28) & 1) != 0) goto LAB_00a6a090;
LAB_00a6a040:
      bVar1 = *(byte *)((long)pvVar3 + 0x10);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete(*(void **)((long)pvVar3 + 0x20));
    }
  }
  operator_delete(pvVar3);
LAB_00a6a058:
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a6a07c to 00b6a0bf has its CatchHandler @ 00a6a07c
                       catch() { ... } // from try @ 00a6a07c with catch @ 00a6a07c
                       catch() { ... } // from try @ 00a6a0f8 with catch @ 00a6a07c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

