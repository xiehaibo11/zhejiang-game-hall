
/* cocos2d::Console::commandDebugMsgSubCommandOnOff(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Console::commandDebugMsgSubCommandOnOff(Console *this,int param_1,basic_string *param_2)

{
  ulong uVar1;
  size_t __n;
  basic_string bVar2;
  uint uVar3;
  basic_string *__s1;
  
  bVar2 = *param_2;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  __n = 2;
  if (uVar1 < 3) {
    __n = uVar1;
  }
  if (__n != 0) {
    __s1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    uVar3 = memcmp(__s1,"on",__n);
    if (uVar3 != 0) goto LAB_00f92c04;
  }
  uVar3 = (uint)(2 < uVar1);
  if (uVar1 < 2) {
    uVar3 = 0xffffffff;
  }
LAB_00f92c04:
  this[0x100] = (Console)(uVar3 == 0);
  return;
}

