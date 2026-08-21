
/* fairygui::GearAnimation::addStatus(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, fairygui::ByteBuffer*) */

void __thiscall
fairygui::GearAnimation::addStatus(GearAnimation *this,basic_string *param_1,ByteBuffer *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  basic_string *local_50;
  long local_48;
  
                    /* try { // try from 00ac4e50 to 00bc4ec3 has its CatchHandler @ 00ac4e50
                       catch() { ... } // from try @ 00ac4e50 with catch @ 00ac4e50
                       catch() { ... } // from try @ 00ac4ed0 with catch @ 00ac4e50 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = ByteBuffer::readBool(param_2);
  lVar4 = ByteBuffer::readInt(param_2);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    *(ulong *)(this + 0x48) = uVar3 & 1 | lVar4 << 0x20;
  }
  else {
    local_50 = param_1;
                    /* try { // try from 00ac4ec4 to 00bc4ecf has its CatchHandler @ 00ac4f04 */
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearAnimation::GearAnimationValue>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x20),(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_013d02c0,(tuple *)&local_50);
                    /* try { // try from 00ac4ed0 to 00bc4f17 has its CatchHandler @ 00ac4e50 */
    *(ulong *)(lVar5 + 0x28) = uVar3 & 1 | lVar4 << 0x20;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00ac4ec4 with catch @ 00ac4f04 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

