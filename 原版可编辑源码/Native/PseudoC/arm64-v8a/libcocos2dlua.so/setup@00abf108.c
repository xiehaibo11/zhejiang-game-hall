
/* fairygui::ChangePageAction::setup(fairygui::ByteBuffer*) */

void __thiscall fairygui::ChangePageAction::setup(ChangePageAction *this,ByteBuffer *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  
  ControllerAction::setup((ControllerAction *)this,param_1);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
                    /* try { // try from 00abf134 to 00bbf17f has its CatchHandler @ 00abf134
                       catch() { ... } // from try @ 00abf134 with catch @ 00abf134
                       catch() { ... } // from try @ 00abf184 with catch @ 00abf134 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x38) != pbVar3) {
    uVar1 = *(ulong *)(pbVar3 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar3 + 0x10);
    if (((byte)*pbVar3 & 1) == 0) {
      pbVar2 = pbVar3 + 1;
      uVar1 = (ulong)((byte)*pbVar3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pbVar2,uVar1);
  }
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x50) != pbVar3) {
    uVar1 = *(ulong *)(pbVar3 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar3 + 0x10);
    if (((byte)*pbVar3 & 1) == 0) {
      pbVar2 = pbVar3 + 1;
      uVar1 = (ulong)((byte)*pbVar3 >> 1);
    }
                    /* try { // try from 00abf180 to 00bbf183 has its CatchHandler @ 00abf1b8 */
                    /* try { // try from 00abf184 to 00bbf1cb has its CatchHandler @ 00abf134 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x50),(char *)pbVar2,uVar1);
  }
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x68) != pbVar3) {
    uVar1 = *(ulong *)(pbVar3 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar3 + 0x10);
    if (((byte)*pbVar3 & 1) == 0) {
      pbVar2 = pbVar3 + 1;
      uVar1 = (ulong)((byte)*pbVar3 >> 1);
    }
                    /* catch() { ... } // from try @ 00abf180 with catch @ 00abf1b8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68),(char *)pbVar2,uVar1);
  }
  return;
}

