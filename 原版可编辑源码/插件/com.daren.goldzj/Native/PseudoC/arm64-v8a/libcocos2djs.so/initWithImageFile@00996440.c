
/* cocos2d::Image::initWithImageFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::Image::initWithImageFile(Image *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uchar *puVar6;
  long lVar7;
  Data aDStack_48 [16];
  long local_38;
  
                    /* try { // try from 00996440 to 00a9644f has its CatchHandler @ 00996690 */
                    /* try { // try from 00996450 to 00a96463 has its CatchHandler @ 00996694 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x138);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar5 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00996478 to 00a964df has its CatchHandler @ 0099671c */
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar1,uVar5);
  }
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x20))(aDStack_48,plVar4,this_00);
  uVar5 = Data::isNull(aDStack_48);
  if ((uVar5 & 1) == 0) {
    puVar6 = (uchar *)Data::getBytes(aDStack_48);
    lVar7 = Data::getSize(aDStack_48);
    uVar3 = initWithImageData(this,puVar6,lVar7);
  }
  else {
    uVar3 = 0;
  }
                    /* try { // try from 009964e4 to 00a96527 has its CatchHandler @ 009966ec */
  Data::~Data(aDStack_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

