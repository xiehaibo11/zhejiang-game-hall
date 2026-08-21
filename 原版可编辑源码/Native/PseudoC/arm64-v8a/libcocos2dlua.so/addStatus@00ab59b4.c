
/* fairygui::GearText::addStatus(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, fairygui::ByteBuffer*) */

void __thiscall
fairygui::GearText::addStatus(GearText *this,basic_string *param_1,ByteBuffer *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  basic_string *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00ab59d0 to 00bb59d7 has its CatchHandler @ 00ab5acc */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00ab59d8 to 00bb59fb has its CatchHandler @ 00ab5968 */
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_2);
                    /* try { // try from 00ab59fc to 00bb5a07 has its CatchHandler @ 00ab5acc */
  if (uVar1 == 0) {
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x48);
  }
  else {
                    /* try { // try from 00ab5a08 to 00bb5a2f has its CatchHandler @ 00ab5968 */
    local_50 = param_1;
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x20),(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_013cf751,(tuple *)&local_50);
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar5 + 0x28);
  }
  if (this_00 != pbVar4) {
                    /* try { // try from 00ab5a30 to 00bb5a37 has its CatchHandler @ 00ab5ac8 */
    uVar1 = *(ulong *)(pbVar4 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar4 + 0x10);
                    /* try { // try from 00ab5a38 to 00bb5a57 has its CatchHandler @ 00ab5968 */
    if (((byte)*pbVar4 & 1) == 0) {
      pbVar2 = pbVar4 + 1;
      uVar1 = (ulong)((byte)*pbVar4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
                    /* try { // try from 00ab5a58 to 00bb5a5f has its CatchHandler @ 00ab5ac8 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00ab5a60 to 00bb5a7f has its CatchHandler @ 00ab5968 */
  return;
}

