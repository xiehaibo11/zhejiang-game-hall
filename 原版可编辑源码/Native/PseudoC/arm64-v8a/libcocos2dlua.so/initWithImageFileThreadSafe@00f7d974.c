
/* cocos2d::Image::initWithImageFileThreadSafe(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::Image::initWithImageFileThreadSafe(Image *this,basic_string *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uchar *puVar6;
  long lVar7;
  Data aDStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x158) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar5 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x158),(char *)pbVar1,uVar5);
  }
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x28))(aDStack_48,plVar4,param_1);
  uVar5 = Data::isNull(aDStack_48);
  if ((uVar5 & 1) == 0) {
    puVar6 = (uchar *)Data::getBytes(aDStack_48);
    lVar7 = Data::getSize(aDStack_48);
    uVar3 = initWithImageData(this,puVar6,lVar7);
  }
  else {
    uVar3 = 0;
  }
  Data::~Data(aDStack_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

