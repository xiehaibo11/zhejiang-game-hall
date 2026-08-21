
/* cocos2d::AutoPolygon::AutoPolygon(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::AutoPolygon::AutoPolygon(AutoPolygon *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  Image *this_01;
  long lVar3;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(this_00,"");
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 00f630c4 to 010630db has its CatchHandler @ 00f630c4
                       catch() { ... } // from try @ 00f630c4 with catch @ 00f630c4
                       catch() { ... } // from try @ 00f630e0 with catch @ 00f630c4 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* try { // try from 00f630dc to 010630df has its CatchHandler @ 00f6312c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
                    /* try { // try from 00f630e0 to 0106313f has its CatchHandler @ 00f630c4 */
  this_01 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_01 != (Image *)0x0) {
    Image::Image(this_01);
  }
  *(Image **)this = this_01;
  Image::initWithImageFile(this_01,param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)this + 0x28);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(*(long *)this + 0x38);
  lVar3 = Director::getInstance();
                    /* catch() { ... } // from try @ 00f630dc with catch @ 00f6312c */
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar3 + 0x1a0);
  return;
}

