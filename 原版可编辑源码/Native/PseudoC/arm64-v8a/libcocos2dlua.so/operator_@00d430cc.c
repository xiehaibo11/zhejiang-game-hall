
/* cocos2d::Terrain::TerrainData::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Terrain::TerrainData const&) */

TerrainData * __thiscall
cocos2d::Terrain::TerrainData::operator=(TerrainData *this,TerrainData *param_1)

{
  ulong uVar1;
  TerrainData *pTVar2;
  undefined8 uVar3;
  
  Size::operator=((Size *)this,(Size *)param_1);
  if (this == param_1) {
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    pTVar2 = *(TerrainData **)(param_1 + 0x18);
    if (((byte)param_1[8] & 1) == 0) {
      pTVar2 = param_1 + 9;
      uVar1 = (ulong)((byte)param_1[8] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 8),(char *)pTVar2,uVar1);
                    /* try { // try from 00d43110 to 00e4311b has its CatchHandler @ 00d43210 */
                    /* try { // try from 00d4311c to 00e4317b has its CatchHandler @ 00d43050 */
    uVar1 = (ulong)((byte)param_1[0x20] >> 1);
    pTVar2 = param_1 + 0x21;
    if (((byte)param_1[0x20] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      pTVar2 = *(TerrainData **)(param_1 + 0x30);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),(char *)pTVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0x38] >> 1);
    pTVar2 = param_1 + 0x39;
    if (((byte)param_1[0x38] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      pTVar2 = *(TerrainData **)(param_1 + 0x48);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pTVar2,uVar1);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    uVar1 = (ulong)((byte)param_1[0x58] >> 1);
    pTVar2 = param_1 + 0x59;
    if (((byte)param_1[0x58] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x60);
      pTVar2 = *(TerrainData **)(param_1 + 0x68);
    }
                    /* try { // try from 00d4317c to 00e43183 has its CatchHandler @ 00d43228 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x58),(char *)pTVar2,uVar1);
                    /* try { // try from 00d4318c to 00e43197 has its CatchHandler @ 00d43224 */
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
    uVar1 = (ulong)((byte)param_1[0x78] >> 1);
    pTVar2 = param_1 + 0x79;
    if (((byte)param_1[0x78] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x80);
      pTVar2 = *(TerrainData **)(param_1 + 0x88);
    }
                    /* try { // try from 00d431a8 to 00e431c7 has its CatchHandler @ 00d4322c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),(char *)pTVar2,uVar1);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
                    /* try { // try from 00d431c8 to 00e431d3 has its CatchHandler @ 00d43214 */
    uVar1 = (ulong)((byte)param_1[0x98] >> 1);
    pTVar2 = param_1 + 0x99;
    if (((byte)param_1[0x98] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xa0);
      pTVar2 = *(TerrainData **)(param_1 + 0xa8);
    }
                    /* try { // try from 00d431d4 to 00e4323f has its CatchHandler @ 00d43050 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x98),(char *)pTVar2,uVar1);
  }
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0xb8) = uVar3;
                    /* catch() { ... } // from try @ 00d43110 with catch @ 00d43210 */
                    /* catch() { ... } // from try @ 00d431c8 with catch @ 00d43214 */
  return this;
}

