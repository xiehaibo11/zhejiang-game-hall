
/* AppDelegate_convertToHex(unsigned long long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void AppDelegate_convertToHex(ulonglong param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve(in_x8,8);
  for (; param_1 != 0; param_1 = param_1 >> 4) {
    pbVar2 = param_2 + 1;
    if (((byte)*param_2 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_2 + 0x10);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(in_x8,(char)pbVar2[param_1 & 0xf]);
  }
  while( true ) {
    bVar3 = *in_x8;
    uVar1 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(in_x8 + 8);
    }
    if (7 < uVar1) break;
    pbVar2 = param_2 + 1;
    if (((byte)*param_2 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_2 + 0x10);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(in_x8,(char)*pbVar2);
  }
  pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (in_x8 + 0x10);
  if (((byte)bVar3 & 1) == 0) {
    pbVar7 = in_x8 + 1;
  }
  pbVar4 = pbVar7 + (uVar1 - 1);
  if (pbVar7 < pbVar4) {
    do {
      pbVar6 = pbVar7 + 1;
      bVar3 = *pbVar7;
      *pbVar7 = *pbVar4;
      pbVar5 = pbVar4 + -1;
      *pbVar4 = bVar3;
      pbVar4 = pbVar5;
      pbVar7 = pbVar6;
    } while (pbVar6 < pbVar5);
  }
  return;
}

