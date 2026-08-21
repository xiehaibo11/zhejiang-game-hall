
/* cocos2d::TMXMapInfo::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::TMXMapInfo::create(basic_string *param_1)

{
  long lVar1;
  Ref *this;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x180,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 00f4f7cc to 0104f7d7 has its CatchHandler @ 00f508f4 */
                    /* try { // try from 00f4f7d8 to 0104f8a3 has its CatchHandler @ 00f4f410 */
    *(undefined ***)this = &PTR__TMXMapInfo_01711d40;
    *(undefined ***)(this + 0x28) = &PTR__TMXMapInfo_01711d78;
    *(undefined8 *)(this + 0x38) = 1;
    *(undefined8 *)(this + 0x30) = 0x100000000;
    Size::Size((Size *)(this + 0x40),(Size *)&Size::ZERO);
    Size::Size((Size *)(this + 0x48),(Size *)&Size::ZERO);
    *(undefined4 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x9d) = 0;
    *(undefined4 *)(this + 200) = 0x3f800000;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x140) = 0x3f800000;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined4 *)(this + 0x148) = 0xffffffff;
    this[0x14c] = (Ref)0x1;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined8 *)(this + 0x178) = 0;
    *(undefined8 *)(this + 0x170) = 0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  internalInit((TMXMapInfo *)this,param_1,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
                    /* try { // try from 00f4f8a4 to 0104f8b3 has its CatchHandler @ 00f508d4 */
  uVar2 = parseXMLFile((TMXMapInfo *)this,(basic_string *)(this + 0xd8));
  if ((uVar2 & 1) == 0) {
    if (this != (Ref *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
  }
  else {
    Ref::autorelease(this);
                    /* try { // try from 00f4f8b4 to 0104f983 has its CatchHandler @ 00f4f410 */
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

