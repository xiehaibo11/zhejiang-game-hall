
/* cocos2d::FileUtils::getFullPathForFilenameWithinDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

void cocos2d::FileUtils::getFullPathForFilenameWithinDirectory
               (basic_string *param_1,basic_string *param_2)

{
  byte *pbVar1;
  basic_string bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  basic_string *pbVar7;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,param_2);
  bVar2 = *param_2;
  uVar4 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (uVar4 == 0) goto LAB_00f6c9a8;
  pbVar7 = *(basic_string **)(param_2 + 0x10);
  if (((byte)bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  if (pbVar7[uVar4 - 1] == (basic_string)0x2f) goto LAB_00f6c9a8;
  bVar3 = *in_x8;
  if (((byte)bVar3 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar3 >> 1);
    uVar5 = 0x16;
    if (uVar4 == 0x16) goto LAB_00f6c96c;
LAB_00f6c948:
    if (((byte)bVar3 & 1) != 0) goto LAB_00f6c94c;
LAB_00f6c990:
    pbVar6 = in_x8 + 1;
    *in_x8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
             ((char)uVar4 * '\x02' + '\x02');
  }
  else {
    uVar4 = *(ulong *)(in_x8 + 8);
    uVar5 = (*(ulong *)in_x8 & 0xfffffffffffffffe) - 1;
    if (uVar4 != uVar5) goto LAB_00f6c948;
LAB_00f6c96c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by(in_x8,uVar5,1,uVar5,uVar5,0,0);
    if (((byte)*in_x8 & 1) == 0) goto LAB_00f6c990;
LAB_00f6c94c:
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    *(ulong *)(in_x8 + 8) = uVar4 + 1;
  }
  *(undefined2 *)(pbVar6 + uVar4) = 0x2f;
LAB_00f6c9a8:
  uVar4 = *(ulong *)(in_x2 + 8);
  pbVar1 = *(byte **)(in_x2 + 0x10);
  if ((*in_x2 & 1) == 0) {
    pbVar1 = in_x2 + 1;
    uVar4 = (ulong)(*in_x2 >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,(char *)pbVar1,uVar4);
  uVar4 = (**(code **)(*(long *)param_1 + 0x1e8))(param_1);
  if ((uVar4 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"",0);
  }
  return;
}

