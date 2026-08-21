
/* cocostudio::timeline::InnerActionFrame::clone() */

InnerActionFrame * __thiscall cocostudio::timeline::InnerActionFrame::clone(InnerActionFrame *this)

{
  ulong uVar1;
  InnerActionFrame *pIVar2;
  InnerActionFrame *pIVar3;
  
  pIVar3 = (InnerActionFrame *)create();
  *(undefined4 *)(pIVar3 + 0x58) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(pIVar3 + 100) = *(undefined4 *)(this + 100);
  if (this[0x80] == (InnerActionFrame)0x0) {
    if (pIVar3[0x80] == (InnerActionFrame)0x0) {
      *(undefined8 *)(pIVar3 + 0x5c) = *(undefined8 *)(this + 0x5c);
    }
  }
  else {
    pIVar3[0x80] = (InnerActionFrame)0x1;
    if (pIVar3 != this) {
      uVar1 = *(ulong *)(this + 0x70);
      pIVar2 = *(InnerActionFrame **)(this + 0x78);
      if (((byte)this[0x68] & 1) == 0) {
        pIVar2 = this + 0x69;
        uVar1 = (ulong)((byte)this[0x68] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (pIVar3 + 0x68),(char *)pIVar2,uVar1);
    }
  }
  (**(code **)(*(long *)pIVar3 + 0xa8))(pIVar3,this);
  return pIVar3;
}

