
/* cocos2d::ZipUtils::inflateCCZFile(char const*, unsigned char**) */

undefined4 cocos2d::ZipUtils::inflateCCZFile(char *param_1,uchar **param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  uchar *puVar5;
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
    puVar5 = (uchar *)Data::getBytes(aDStack_48);
    lVar6 = Data::getSize(aDStack_48);
    uVar2 = inflateCCZBuffer(puVar5,lVar6,param_2);
  }
  else {
    uVar2 = 0xffffffff;
  }
  Data::~Data(aDStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

