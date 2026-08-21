
/* v8::internal::JSDataView::JSDataViewPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::JSDataView::JSDataViewPrint(JSDataView *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSDataView");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - buffer =",0xc);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - byte_offset: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(ulong *)(*(long *)this + 0xf));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - byte_length: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(ulong *)(*(long *)this + 0x17));
  uVar2 = *(ulong *)this;
  if ((*(uint *)(uVar2 + 0xb) & 1) != 0) {
    uVar3 = uVar2 & 0xffffffff00000000;
    uVar4 = uVar3 | *(uint *)(uVar2 + 0xb);
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x424) {
      if ((*(uint *)(uVar4 + 0x1b) >> 2 & 1) != 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n - detached",0xc);
        uVar2 = *(ulong *)this;
        uVar3 = uVar2 & 0xffffffff00000000;
      }
      FUN_00f3d880(param_1,uVar2,(*(uint *)((uVar3 | *(uint *)(uVar2 + 0xb)) + 0x1b) & 4) == 0);
      return;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n <invalid buffer>",0x12);
  return;
}

