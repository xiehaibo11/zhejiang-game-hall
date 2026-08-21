
undefined8 _spUtil_readFile(char *param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  Data aDStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 00d55cfc with catch @ 00d5560c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,param_1);
  (**(code **)(*plVar3 + 0x50))(&local_70,plVar3,local_88);
  (**(code **)(*plVar2 + 0x28))(aDStack_58,plVar2,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  uVar4 = cocos2d::Data::isNull(aDStack_58);
  if ((uVar4 & 1) == 0) {
    uVar5 = cocos2d::Data::takeBuffer(aDStack_58,(long *)&local_70);
    *param_2 = (int)CONCAT71(uStack_6f,local_70);
  }
  else {
    uVar5 = 0;
  }
  cocos2d::Data::~Data(aDStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

