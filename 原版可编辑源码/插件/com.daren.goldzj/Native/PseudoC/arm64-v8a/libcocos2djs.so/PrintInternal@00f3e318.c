
/* v8::internal::TransitionArray::PrintInternal(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TransitionArray::PrintInternal(TransitionArray *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(*(long *)this + 3) < 4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)(uint)(*(int *)(*(long *)this + 0xb) >> 1);
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Transition array #",0x12);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,(int)uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,":",1);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      uVar2 = *(ulong *)this;
      TransitionsAccessor::PrintOneTransition
                (param_1,uVar2 & 0xffffffff00000000 |
                         (ulong)*(uint *)(uVar2 + (long)((int)lVar4 + 0xf)),
                 uVar2 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar2 + (long)((int)lVar4 + 0xc) + 7) & 0xfffffffd);
      lVar4 = lVar4 + 8;
    } while (uVar3 * 8 - lVar4 != 0);
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1);
  return;
}

