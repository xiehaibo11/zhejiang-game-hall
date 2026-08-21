
/* cocos2d::FileUtils::writeStringToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

uint __thiscall
cocos2d::FileUtils::writeStringToFile(FileUtils *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  uint uVar4;
  Data aDStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  Data::Data(aDStack_48);
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  Data::fastSet(aDStack_48,(uchar *)pbVar2,uVar1);
  uVar4 = (**(code **)(*(long *)this + 0xd0))(this,aDStack_48,param_2);
  Data::takeBuffer(aDStack_48,(long *)0x0);
  Data::~Data(aDStack_48);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

