
/* cocos2d::TMXTiledMap::initWithXML(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::TMXTiledMap::initWithXML(TMXTiledMap *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  TMXMapInfo *pTVar3;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x378) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x378),(char *)pbVar2,uVar1);
  }
                    /* try { // try from 00f4e760 to 0104e777 has its CatchHandler @ 00f4ed44 */
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  pTVar3 = (TMXMapInfo *)TMXMapInfo::createWithXML(param_1,param_2);
  buildWithMapInfo(this,pTVar3);
                    /* try { // try from 00f4e78c to 0104e7ab has its CatchHandler @ 00f4ed40 */
  return 1;
}

