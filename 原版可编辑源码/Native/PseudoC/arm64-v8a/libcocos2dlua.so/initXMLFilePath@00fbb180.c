
/* cocos2d::UserDefault::initXMLFilePath() */

void cocos2d::UserDefault::initXMLFilePath(void)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong *puVar4;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (_isFilePathInitialized == '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,"getCocos2dxPackageName");
    JniHelper::callStaticStringMethod<>((JniHelper *)&DAT_0178fd50,(basic_string *)&local_60,in_x2);
    if (((byte)local_60._0_1_ & 1) != 0) {
      operator_delete(local_50);
    }
    std::__ndk1::operator+((__ndk1 *)"/data/data/",(char *)local_40,in_x2);
    puVar4 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_98,"/",1);
    local_70 = (void *)puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_80,"UserDefault.xml",0xf);
    local_50 = (char *)puVar4[2];
    uStack_58 = puVar4[1];
    local_60 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar1 = local_60 >> 1 & 0x7f;
    pcVar3 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      uVar1 = uStack_58;
      pcVar3 = local_50;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &_filePath,pcVar3,uVar1);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    _isFilePathInitialized = '\x01';
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

