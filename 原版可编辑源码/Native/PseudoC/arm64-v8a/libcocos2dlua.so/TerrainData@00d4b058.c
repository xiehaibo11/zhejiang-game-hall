
/* cocos2d::Terrain::TerrainData::TerrainData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Size const&, float, float) */

void __thiscall
cocos2d::Terrain::TerrainData::TerrainData
          (TerrainData *this,basic_string *param_1,basic_string *param_2,Size *param_3,float param_4
          ,float param_5)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  Size::Size((Size *)this);
                    /* try { // try from 00d4b094 to 00e4b0ab has its CatchHandler @ 00d4b878 */
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x50) = 0x420c0000;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00d4b0c0 to 00e4b0c3 has its CatchHandler @ 00d4b860 */
  *(undefined4 *)(this + 0x70) = 0x420c0000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
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
      (this + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 00d4b11c to 00e4b133 has its CatchHandler @ 00d4b880 */
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pbVar2,uVar1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"",0);
  Size::operator=((Size *)this,param_3);
                    /* try { // try from 00d4b150 to 00e4b193 has its CatchHandler @ 00d4b888 */
  *(float *)(this + 0xb8) = param_4;
  *(float *)(this + 0xbc) = param_5;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  return;
}

