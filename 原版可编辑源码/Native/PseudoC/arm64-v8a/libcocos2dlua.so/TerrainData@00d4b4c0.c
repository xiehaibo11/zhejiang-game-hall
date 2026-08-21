
/* cocos2d::Terrain::TerrainData::TerrainData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Terrain::DetailMap const&, cocos2d::Terrain::DetailMap const&,
   cocos2d::Terrain::DetailMap const&, cocos2d::Size const&, float, float) */

void __thiscall
cocos2d::Terrain::TerrainData::TerrainData
          (TerrainData *this,basic_string *param_1,basic_string *param_2,DetailMap *param_3,
          DetailMap *param_4,DetailMap *param_5,Size *param_6,float param_7,float param_8)

{
  ulong uVar1;
  basic_string *pbVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_03;
  
  Size::Size((Size *)this);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this_03 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)this_03 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined2 *)this_03 = 0;
  *(undefined4 *)(this + 0x50) = 0x420c0000;
  this_02 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x58);
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0x420c0000;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x78);
  *(undefined8 *)this_01 = 0;
                    /* try { // try from 00d4b558 to 00e4b55f has its CatchHandler @ 00d4b840 */
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0x420c0000;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined2 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb0) = 0x420c0000;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
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
                    /* try { // try from 00d4b5a0 to 00e4b5b3 has its CatchHandler @ 00d4b7d0 */
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
                    /* try { // try from 00d4b5b4 to 00e4b5c7 has its CatchHandler @ 00d4b7c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),(char *)pbVar2,uVar1);
  }
  if (this_03 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
                    /* try { // try from 00d4b5c8 to 00e4b5cb has its CatchHandler @ 00d4b7a0 */
    uVar1 = *(ulong *)(param_3 + 8);
    pcVar3 = *(char **)(param_3 + 0x10);
                    /* try { // try from 00d4b5d0 to 00e4b5df has its CatchHandler @ 00d4b79c */
    if ((*param_3 & 1) == 0) {
      pcVar3 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
                    /* try { // try from 00d4b5e0 to 00e4b5ef has its CatchHandler @ 00d4b820 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_03,pcVar3,uVar1);
  }
                    /* try { // try from 00d4b5f0 to 00e4b603 has its CatchHandler @ 00d4b7d4 */
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
  if (this_01 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5) {
    uVar1 = *(ulong *)(param_5 + 8);
    pcVar3 = *(char **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pcVar3 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01,pcVar3,uVar1);
  }
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_5 + 0x18);
  Size::operator=((Size *)this,param_6);
  *(float *)(this + 0xb8) = param_7;
  *(float *)(this + 0xbc) = param_8;
  *(undefined8 *)(this + 0xc0) = 0x3f80000000000003;
  return;
}

