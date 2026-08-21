
/* cocos2d::TMXMapInfo::initWithTMXFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::TMXMapInfo::initWithTMXFile(TMXMapInfo *this,basic_string *param_1)

{
  long lVar1;
  uint uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
                    /* try { // try from 00f4f984 to 0104f993 has its CatchHandler @ 00f508d0 */
  internalInit(this,param_1,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
                    /* try { // try from 00f4f994 to 0104fa7b has its CatchHandler @ 00f4f410 */
    operator_delete(local_40);
  }
  uVar2 = parseXMLFile(this,(basic_string *)(this + 0xd8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

