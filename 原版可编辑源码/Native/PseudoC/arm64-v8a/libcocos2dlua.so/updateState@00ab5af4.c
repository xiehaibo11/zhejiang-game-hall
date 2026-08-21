
/* fairygui::GearText::updateState() */

void __thiscall fairygui::GearText::updateState(GearText *this)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  piecewise_construct_t *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (**(code **)(**(long **)(this + 8) + 0x10))();
  local_40 = (piecewise_construct_t *)GController::getSelectedPageId(*(GController **)(this + 0x10))
  ;
                    /* try { // try from 00ab5b38 to 00bb5b3f has its CatchHandler @ 00ab5c34 */
                    /* try { // try from 00ab5b40 to 00bb5b63 has its CatchHandler @ 00ab5ad0 */
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x20),local_40,(tuple *)&DAT_013cf751,
                     (tuple *)&local_40);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar5 + 0x28) != pbVar4) {
                    /* try { // try from 00ab5b64 to 00bb5b6f has its CatchHandler @ 00ab5c34 */
    uVar1 = *(ulong *)(pbVar4 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar4 + 0x10);
                    /* try { // try from 00ab5b70 to 00bb5b97 has its CatchHandler @ 00ab5ad0 */
    if (((byte)*pbVar4 & 1) == 0) {
      pbVar2 = pbVar4 + 1;
      uVar1 = (ulong)((byte)*pbVar4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar5 + 0x28),(char *)pbVar2,uVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00ab5b98 to 00bb5b9f has its CatchHandler @ 00ab5c30 */
                    /* try { // try from 00ab5ba0 to 00bb5bbf has its CatchHandler @ 00ab5ad0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

