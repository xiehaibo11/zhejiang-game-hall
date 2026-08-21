
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::list<int, std::__ndk1::allocator<int> > >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::list<int, std::__ndk1::allocator<int> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > > >
   >::erase(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > >, void*>*>) */

undefined8 __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
::erase(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  void *local_60 [2];
  char local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00a7015c with catch @ 00a702b4 */
                    /* catch() { ... } // from try @ 00a70150 with catch @ 00a702b8 */
                    /* catch() { ... } // from try @ 00a70130 with catch @ 00a702bc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = *param_2;
                    /* catch() { ... } // from try @ 00a70168 with catch @ 00a702cc */
  remove(local_60);
  pvVar4 = local_60[0];
  local_60[0] = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    if (local_50 != '\0') {
      if (*(long *)((long)pvVar4 + 0x38) != 0) {
        lVar1 = *(long *)((long)pvVar4 + 0x28);
        plVar2 = *(long **)((long)pvVar4 + 0x30);
        lVar5 = *plVar2;
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar5;
        *(undefined8 *)((long)pvVar4 + 0x38) = 0;
        while (plVar2 != (long *)((long)pvVar4 + 0x28)) {
          plVar7 = (long *)plVar2[1];
          operator_delete(plVar2);
                    /* try { // try from 00a70324 to 00b70383 has its CatchHandler @ 00a70324
                       catch() { ... } // from try @ 00a70324 with catch @ 00a70324
                       catch() { ... } // from try @ 00a706ec with catch @ 00a70324
                       catch() { ... } // from try @ 00a708fc with catch @ 00a70324
                       catch() { ... } // from try @ 00a70a94 with catch @ 00a70324
                       catch() { ... } // from try @ 00a70b60 with catch @ 00a70324
                       catch() { ... } // from try @ 00a70cb0 with catch @ 00a70324 */
          plVar2 = plVar7;
        }
      }
      if ((*(byte *)((long)pvVar4 + 0x10) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x20));
      }
    }
    operator_delete(pvVar4);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

