
/* cocos2d::Terrain::setDetailMap(unsigned int, cocos2d::Terrain::DetailMap) */

void __thiscall cocos2d::Terrain::setDetailMap(Terrain *this,ulong param_2,basic_string *param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  Texture2D *this_00;
  Image *this_01;
  
                    /* try { // try from 00d46ef0 to 00e46f0b has its CatchHandler @ 00d46fc0 */
  param_2 = param_2 & 0xffffffff;
                    /* try { // try from 00d46f0c to 00e46f5f has its CatchHandler @ 00d46e94 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + param_2 * 0x20 + 0x3a8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + param_2 * 0x20 + 0x3a8),(char *)pbVar2,uVar1);
  }
  *(undefined4 *)(this + param_2 * 0x20 + 0x3c0) = *(undefined4 *)(param_3 + 0x18);
  if (*(Ref **)(this + param_2 * 8 + 0x458) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + param_2 * 8 + 0x458));
  }
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00d46f60 to 00e46f6b has its CatchHandler @ 00d46fd4 */
  if (this_00 != (Texture2D *)0x0) {
                    /* try { // try from 00d46f6c to 00e46fdb has its CatchHandler @ 00d46e94 */
    Texture2D::Texture2D(this_00);
  }
  *(Texture2D **)(this + param_2 * 8 + 0x458) = this_00;
  this_01 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_01 != (Image *)0x0) {
    Image::Image(this_01);
  }
  Image::initWithImageFile(this_01,param_3);
  Texture2D::initWithImage(*(Texture2D **)(this + param_2 * 8 + 0x458),this_01);
  if (this_01 != (Image *)0x0) {
                    /* catch() { ... } // from try @ 00d46ef0 with catch @ 00d46fc0 */
                    /* WARNING: Could not recover jumptable at 0x00d46fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this_01 + 8))(this_01);
    return;
  }
                    /* catch() { ... } // from try @ 00d46f60 with catch @ 00d46fd4 */
                    /* try { // try from 00d46fdc to 00e4703b has its CatchHandler @ 00d46fdc
                       catch() { ... } // from try @ 00d46fdc with catch @ 00d46fdc
                       catch() { ... } // from try @ 00d47048 with catch @ 00d46fdc */
  return;
}

