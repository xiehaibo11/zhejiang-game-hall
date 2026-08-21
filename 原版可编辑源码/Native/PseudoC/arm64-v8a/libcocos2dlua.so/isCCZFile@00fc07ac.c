
/* cocos2d::ZipUtils::isCCZFile(char const*) */

bool cocos2d::ZipUtils::isCCZFile(char *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  bool bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  Data aDStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  (**(code **)(*plVar2 + 0x28))(aDStack_48,plVar2,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar3 = Data::isNull(aDStack_48);
  if ((uVar3 & 1) == 0) {
    pcVar4 = (char *)Data::getBytes(aDStack_48);
    uVar3 = Data::getSize(aDStack_48);
    if ((((0xf < uVar3) && (*pcVar4 == 'C')) && (pcVar4[1] == 'C')) && (pcVar4[2] == 'Z')) {
      bVar5 = pcVar4[3] == '!' || pcVar4[3] == 'p';
      goto LAB_00fc0878;
    }
  }
  bVar5 = false;
LAB_00fc0878:
  Data::~Data(aDStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

