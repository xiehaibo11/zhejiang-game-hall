
/* cocos2d::extension::Manifest::Manifest(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::Manifest(Manifest *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00a54764 to 00b5483b has its CatchHandler @ 00a54704 */
  Ref::Ref((Ref *)this);
  *(undefined2 *)(this + 0xc) = 0;
  this[0xe] = (Manifest)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Manifest_01c6e578;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x19] = (Manifest)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
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
                    /* catch() { ... } // from try @ 00a54750 with catch @ 00a54820 */
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
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
                    /* try { // try from 00a5483c to 00b5488f has its CatchHandler @ 00a5483c
                       catch() { ... } // from try @ 00a5483c with catch @ 00a5483c
                       catch() { ... } // from try @ 00a549b8 with catch @ 00a5483c */
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0x400;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  puVar2 = operator_new(0x28);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0x10000;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined8 **)(this + 0x140) = puVar2;
  *(undefined8 **)(this + 0x148) = puVar2;
  uVar3 = FileUtils::getInstance();
  *(undefined8 *)(this + 0x10) = uVar3;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
                    /* try { // try from 00a54890 to 00b548a7 has its CatchHandler @ 00a54a34 */
    parseFile(this,param_1);
  }
                    /* try { // try from 00a548b0 to 00b548bb has its CatchHandler @ 00a54a30 */
  return;
}

