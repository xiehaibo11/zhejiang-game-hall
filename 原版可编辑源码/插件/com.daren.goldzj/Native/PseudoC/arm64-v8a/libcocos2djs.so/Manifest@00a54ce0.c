
/* cocos2d::extension::Manifest::Manifest(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::Manifest::Manifest(Manifest *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
                    /* try { // try from 00a54d00 to 00b54d17 has its CatchHandler @ 00a54d48 */
  Ref::Ref((Ref *)this);
                    /* try { // try from 00a54d18 to 00b54d5b has its CatchHandler @ 00a54cbc */
  *(undefined2 *)(this + 0xc) = 0;
  this[0xe] = (Manifest)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* catch() { ... } // from try @ 00a54d00 with catch @ 00a54d48 */
  *(undefined ***)this = &PTR__Manifest_01c6e578;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x18);
  *(undefined8 *)this_00 = 0;
  this[0x19] = (Manifest)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 00a54d5c to 00b54dab has its CatchHandler @ 00a54d5c
                       catch() { ... } // from try @ 00a54d5c with catch @ 00a54d5c
                       catch() { ... } // from try @ 00a54e64 with catch @ 00a54d5c */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x49] = (Manifest)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x61] = (Manifest)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  this[0x79] = (Manifest)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 200) = 0x3f800000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0xd1] = (Manifest)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
                    /* try { // try from 00a54dac to 00b54dc3 has its CatchHandler @ 00a54f2c */
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0x400;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  puVar3 = operator_new(0x28);
                    /* try { // try from 00a54dd8 to 00b54deb has its CatchHandler @ 00a54f28 */
  puVar3[3] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00a54dec to 00b54dfb has its CatchHandler @ 00a54efc */
  puVar3[1] = 0x10000;
  puVar3[2] = 0;
  *puVar3 = 0;
  *(undefined8 **)(this + 0x140) = puVar3;
  *(undefined8 **)(this + 0x148) = puVar3;
  uVar4 = FileUtils::getInstance();
  *(undefined8 *)(this + 0x10) = uVar4;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 00a54e14 to 00b54e1b has its CatchHandler @ 00a54ee0 */
                    /* try { // try from 00a54e1c to 00b54e2b has its CatchHandler @ 00a54f10 */
                    /* try { // try from 00a54e2c to 00b54e33 has its CatchHandler @ 00a54ef8 */
                    /* try { // try from 00a54e34 to 00b54e63 has its CatchHandler @ 00a54f00 */
  if (((uVar1 != 0) && (loadJsonFromString(this,param_1), *(int *)(this + 0x180) == 0)) &&
     (*(short *)(this + 0x13e) == 3)) {
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pbVar2,uVar1);
    }
                    /* try { // try from 00a54e64 to 00b54f7b has its CatchHandler @ 00a54d5c */
    loadManifest(this,(GenericDocument *)(this + 0x128));
  }
  return;
}

