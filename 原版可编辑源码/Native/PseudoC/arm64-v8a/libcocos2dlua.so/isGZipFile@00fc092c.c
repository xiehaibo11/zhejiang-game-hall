
/* cocos2d::ZipUtils::isGZipFile(char const*) */

bool cocos2d::ZipUtils::isGZipFile(char *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  Data aDStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  (**(code **)(*plVar3 + 0x28))(aDStack_48,plVar3,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar4 = Data::isNull(aDStack_48);
  if ((uVar4 & 1) == 0) {
    pcVar5 = (char *)Data::getBytes(aDStack_48);
    lVar6 = Data::getSize(aDStack_48);
    if ((1 < lVar6) && (*pcVar5 == '\x1f')) {
      bVar2 = pcVar5[1] == -0x75;
      goto LAB_00fc09d4;
    }
  }
  bVar2 = false;
LAB_00fc09d4:
  Data::~Data(aDStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

