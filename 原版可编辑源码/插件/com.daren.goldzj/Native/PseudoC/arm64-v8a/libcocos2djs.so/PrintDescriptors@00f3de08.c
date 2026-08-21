
/* v8::internal::DescriptorArray::PrintDescriptors(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::DescriptorArray::PrintDescriptors(DescriptorArray *this,basic_ostream *param_1)

{
  short sVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_68;
  
  uVar3 = *(ulong *)this;
  sVar1 = *(short *)(uVar3 + 5);
  if (sVar1 != 0) {
    lVar4 = 0;
    lVar5 = 0x1000000000;
    while( true ) {
      uVar6 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + (lVar5 >> 0x20) + -1);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n  [",4);
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(int)lVar4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]: ",3);
      local_68 = uVar6;
      if (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40) {
        String::StringPrint((String *)&local_68,param_1);
      }
      else {
        internal::operator<<(param_1,(Brief *)&local_68);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
      PrintDescriptorDetails(this,param_1,lVar4,0xffffffff);
      if ((long)sVar1 + -1 == lVar4) break;
      uVar3 = *(ulong *)this;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xc00000000;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

