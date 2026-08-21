
/* cocos2d::experimental::TMXTiledMap::initWithTMXFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::experimental::TMXTiledMap::initWithTMXFile(TMXTiledMap *this,basic_string *param_1)

{
  TMXMapInfo *pTVar1;
  
                    /* try { // try from 00efbcb4 to 00ffbcb7 has its CatchHandler @ 00efbd10 */
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  pTVar1 = (TMXMapInfo *)TMXMapInfo::create(param_1);
  if (pTVar1 != (TMXMapInfo *)0x0) {
                    /* try { // try from 00efbcd8 to 00ffbce3 has its CatchHandler @ 00efbd20 */
    buildWithMapInfo(this,pTVar1);
  }
  return pTVar1 != (TMXMapInfo *)0x0;
}

