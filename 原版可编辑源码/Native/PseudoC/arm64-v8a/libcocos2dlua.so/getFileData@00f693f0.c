
/* cocos2d::FileUtils::getFileData(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char const*, long*) const */

undefined8 __thiscall
cocos2d::FileUtils::getFileData(FileUtils *this,basic_string *param_1,char *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Data aDStack_68 [16];
  undefined **local_58;
  Data *pDStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Data::Data(aDStack_68);
  local_58 = &PTR__ResizableBuffer_016a7778;
  pDStack_50 = aDStack_68;
  iVar2 = (**(code **)(*(long *)this + 0x38))(this,param_1,&local_58);
  if (iVar2 == 0) {
    uVar3 = Data::takeBuffer(aDStack_68,param_3);
  }
  else {
    uVar3 = 0;
    *param_3 = 0;
  }
  Data::~Data(aDStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

