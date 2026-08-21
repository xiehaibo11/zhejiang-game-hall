
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,
   std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam> > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,
   std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam> > >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,
   std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,
   std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam> > > >
   >::erase(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,
   std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam> > >, void*>*>) */

undefined8 __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::AudioPlayerProvider::PreloadCallbackParam,std::__ndk1::allocator<cocos2d::AudioPlayerProvider::PreloadCallbackParam>>>>>
::erase(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  void *local_60 [2];
  char local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00a7764c with catch @ 00a778b4 */
                    /* catch() { ... } // from try @ 00a77640 with catch @ 00a778b8 */
                    /* catch() { ... } // from try @ 00a77620 with catch @ 00a778bc */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a77658 with catch @ 00a778cc
                       catch() { ... } // from try @ 00a776d8 with catch @ 00a778cc
                       catch() { ... } // from try @ 00a777e8 with catch @ 00a778cc */
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_2;
  remove(local_60);
  pvVar2 = local_60[0];
  local_60[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if (local_50 != '\0') {
      plVar6 = *(long **)((long)pvVar2 + 0x28);
      if (plVar6 != (long *)0x0) {
        plVar7 = *(long **)((long)pvVar2 + 0x30);
        plVar3 = plVar6;
        if (plVar7 != plVar6) {
          do {
            plVar3 = (long *)plVar7[-4];
            plVar7 = plVar7 + -8;
            if (plVar7 == plVar3) {
              pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_00a77934:
              (*pcVar4)();
            }
            else if (plVar3 != (long *)0x0) {
                    /* try { // try from 00a77924 to 00b7797b has its CatchHandler @ 00a77924
                       catch() { ... } // from try @ 00a77924 with catch @ 00a77924
                       catch() { ... } // from try @ 00a77bc0 with catch @ 00a77924 */
              pcVar4 = *(code **)(*plVar3 + 0x28);
              goto LAB_00a77934;
            }
          } while (plVar6 != plVar7);
          plVar3 = *(long **)((long)pvVar2 + 0x28);
        }
        *(long **)((long)pvVar2 + 0x30) = plVar6;
        operator_delete(plVar3);
      }
      if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x20));
      }
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00a7797c to 00b77993 has its CatchHandler @ 00a77c6c */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

