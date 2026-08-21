
/* cocostudio::DisplayData::copy(cocostudio::DisplayData*) */

void __thiscall cocostudio::DisplayData::copy(DisplayData *this,DisplayData *param_1)

{
  ulong uVar1;
  DisplayData *pDVar2;
  
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    pDVar2 = *(DisplayData **)(param_1 + 0x38);
    if (((byte)param_1[0x28] & 1) == 0) {
      pDVar2 = param_1 + 0x29;
      uVar1 = (ulong)((byte)param_1[0x28] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),(char *)pDVar2,uVar1);
  }
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}

