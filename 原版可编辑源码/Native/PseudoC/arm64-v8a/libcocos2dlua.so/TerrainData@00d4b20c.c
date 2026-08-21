
/* cocos2d::Terrain::TerrainData::TerrainData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Terrain::DetailMap const&, cocos2d::Terrain::DetailMap const&,
   cocos2d::Terrain::DetailMap const&, cocos2d::Terrain::DetailMap const&, cocos2d::Size const&,
   float, float) */

void __thiscall
cocos2d::Terrain::TerrainData::TerrainData
          (TerrainData *this,basic_string *param_1,basic_string *param_2,DetailMap *param_3,
          DetailMap *param_4,DetailMap *param_5,DetailMap *param_6,Size *param_7,float param_8,
          float param_9)

{
  ulong uVar1;
  basic_string *pbVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_03;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_04;
  
                    /* try { // try from 00d4b220 to 00e4b263 has its CatchHandler @ 00d4b88c */
  Size::Size((Size *)this);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined2 *)this_01 = 0;
  *(undefined4 *)(this + 0x50) = 0x420c0000;
  this_02 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x58);
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0x420c0000;
  this_04 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x78);
  *(undefined8 *)this_04 = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0x420c0000;
  this_03 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x98);
  *(undefined8 *)this_03 = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined2 *)this_03 = 0;
  *(undefined4 *)(this + 0xb0) = 0x420c0000;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00d4b2d4 to 00e4b2eb has its CatchHandler @ 00d4b880 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x20) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
                    /* try { // try from 00d4b308 to 00e4b347 has its CatchHandler @ 00d4b884 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),(char *)pbVar2,uVar1);
  }
  if (this_01 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pcVar3 = *(char **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pcVar3 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01,pcVar3,uVar1);
  }
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_3 + 0x18);
  if (this_02 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pcVar3 = *(char **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pcVar3 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_02,pcVar3,uVar1);
  }
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_4 + 0x18);
  if (this_04 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5) {
                    /* try { // try from 00d4b380 to 00e4b38b has its CatchHandler @ 00d4b780 */
    uVar1 = *(ulong *)(param_5 + 8);
    pcVar3 = *(char **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pcVar3 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_04,pcVar3,uVar1);
  }
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_5 + 0x18);
  if (this_03 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_6) {
    uVar1 = *(ulong *)(param_6 + 8);
    pcVar3 = *(char **)(param_6 + 0x10);
    if ((*param_6 & 1) == 0) {
      pcVar3 = param_6 + 1;
      uVar1 = (ulong)((byte)*param_6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_03,pcVar3,uVar1);
  }
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_6 + 0x18);
                    /* try { // try from 00d4b3ec to 00e4b473 has its CatchHandler @ 00d4b870 */
  Size::operator=((Size *)this,param_7);
  *(float *)(this + 0xb8) = param_8;
  *(float *)(this + 0xbc) = param_9;
  *(undefined8 *)(this + 0xc0) = 0x3f80000000000004;
  return;
}

