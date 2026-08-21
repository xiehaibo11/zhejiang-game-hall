
/* cocos2d::TMXTiledMap::initWithTMXFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall cocos2d::TMXTiledMap::initWithTMXFile(TMXTiledMap *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  TMXMapInfo *pTVar3;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x378) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00f4e5f8 to 0104e6df has its CatchHandler @ 00f4ed58 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x378),(char *)pbVar2,uVar1);
  }
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  pTVar3 = (TMXMapInfo *)TMXMapInfo::create(param_1);
  if (pTVar3 != (TMXMapInfo *)0x0) {
    buildWithMapInfo(this,pTVar3);
  }
  return pTVar3 != (TMXMapInfo *)0x0;
}

