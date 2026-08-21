
/* cocos2d::Console::Command::commandHelp(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::Console::Command::commandHelp(int param_1,basic_string *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)(uint)param_1;
  bVar1 = *(byte *)(uVar2 + 0x18);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_00f8d0fc:
      lVar3 = *(long *)(uVar2 + 0x78);
      goto joined_r0x00f8d100;
    }
  }
  else if (*(long *)(uVar2 + 0x20) == 0) goto LAB_00f8d0fc;
  if ((bVar1 & 1) == 0) {
    lVar3 = uVar2 + 0x19;
  }
  else {
    lVar3 = *(long *)(uVar2 + 0x28);
  }
  Utility::mydprintf((int)param_2,"%s\n",lVar3);
  lVar3 = *(long *)(uVar2 + 0x78);
joined_r0x00f8d100:
  if (lVar3 == 0) {
    return;
  }
  sendHelp((int)param_2,(unordered_map *)(uVar2 + 0x60),"");
  return;
}

