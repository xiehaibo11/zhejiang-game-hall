
/* cocos2d::Terrain::DetailMap::DetailMap(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

void __thiscall
cocos2d::Terrain::DetailMap::DetailMap(DetailMap *this,basic_string *param_1,float param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  
                    /* catch() { ... } // from try @ 00d4b5d0 with catch @ 00d4b79c */
                    /* catch() { ... } // from try @ 00d4b5c8 with catch @ 00d4b7a0 */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (this != (DetailMap *)param_1) {
                    /* catch() { ... } // from try @ 00d4b5b4 with catch @ 00d4b7c0 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00d4b5a0 with catch @ 00d4b7d0 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* catch() { ... } // from try @ 00d4b5f0 with catch @ 00d4b7d4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
           (char *)pbVar2,uVar1);
  }
  *(float *)(this + 0x18) = param_2;
  return;
}

