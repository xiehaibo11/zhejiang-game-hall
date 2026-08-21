
/* FileImplement::getFileData(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char const*, long*) */

undefined8 __thiscall
FileImplement::getFileData(FileImplement *this,basic_string *param_1,char *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  Data aDStack_50 [16];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x20))(aDStack_50,plVar2,param_1);
  lVar3 = cocos2d::Data::getSize(aDStack_50);
  if (lVar3 < 1) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = cocos2d::Data::takeBuffer(aDStack_50,&local_40);
    lVar3 = local_40;
  }
  *param_3 = lVar3;
  cocos2d::Data::~Data(aDStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

