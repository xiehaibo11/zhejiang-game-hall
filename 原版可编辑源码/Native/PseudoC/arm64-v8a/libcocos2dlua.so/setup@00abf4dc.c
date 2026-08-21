
/* fairygui::PlayTransitionAction::setup(fairygui::ByteBuffer*) */

void __thiscall
fairygui::PlayTransitionAction::setup(PlayTransitionAction *this,ByteBuffer *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  ControllerAction::setup((ControllerAction *)this,param_1);
  pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x38) != pbVar5) {
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar5 + 0x10);
    if (((byte)*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)((byte)*pbVar5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pbVar2,uVar1);
  }
  uVar4 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0x50) = uVar4;
  uVar4 = ByteBuffer::readFloat(param_1);
  *(undefined4 *)(this + 0x54) = uVar4;
  bVar3 = ByteBuffer::readBool(param_1);
  this[0x58] = (PlayTransitionAction)(bVar3 & 1);
  return;
}

