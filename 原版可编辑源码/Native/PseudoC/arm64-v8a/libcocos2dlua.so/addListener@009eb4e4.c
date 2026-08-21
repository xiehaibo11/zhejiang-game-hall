
/* universe::Downloader2::addListener(std::__ndk1::function<void (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&)> const&) */

void __thiscall universe::Downloader2::addListener(Downloader2 *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined4 local_7c [3];
  undefined4 *local_70 [4];
  undefined4 **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70[0] = local_7c;
  lVar4 = *(long *)(this + 0x128);
                    /* try { // try from 009eb514 to 00aeb51b has its CatchHandler @ 009eb530 */
                    /* try { // try from 009eb51c to 00aeb54f has its CatchHandler @ 009eb424 */
  *(long *)(this + 0x128) = lVar4 + 1;
                    /* catch() { ... } // from try @ 009eb478 with catch @ 009eb530
                       catch() { ... } // from try @ 009eb514 with catch @ 009eb530 */
                    /* catch() { ... } // from try @ 009eb45c with catch @ 009eb534
                       catch() { ... } // from try @ 009eb4c8 with catch @ 009eb534 */
  local_7c[0] = (undefined4)lVar4;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x130),(piecewise_construct_t *)local_7c,(tuple *)&DAT_012f4d1b,
                     (tuple *)local_70);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (undefined4 **)0x0;
  }
  else {
                    /* try { // try from 009eb550 to 00aeb587 has its CatchHandler @ 009eb550
                       catch() { ... } // from try @ 009eb550 with catch @ 009eb550
                       catch() { ... } // from try @ 009eb5cc with catch @ 009eb550
                       catch() { ... } // from try @ 009eb648 with catch @ 009eb550 */
    if ((long *)param_1 == plVar2) {
      local_50 = local_70;
                    /* try { // try from 009eb588 to 00aeb59f has its CatchHandler @ 009eb660 */
      (**(code **)(*plVar2 + 0x18))(plVar2,local_70);
    }
    else {
      local_50 = (undefined4 **)(**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  FUN_009ec7cc(local_70,lVar4 + 0x20);
                    /* try { // try from 009eb5a4 to 00aeb5cb has its CatchHandler @ 009eb65c */
  if (local_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 8);
  }
  else {
    if (local_50 == (undefined4 **)0x0) goto LAB_009eb5c8;
    pcVar3 = *(code **)(*local_50 + 10);
  }
  (*pcVar3)();
LAB_009eb5c8:
                    /* try { // try from 009eb5cc to 00aeb5f3 has its CatchHandler @ 009eb550 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_7c[0]);
}

