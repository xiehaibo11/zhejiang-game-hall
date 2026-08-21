
/* cocos2d::experimental::TMXTiledMap::initWithXML(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 __thiscall
cocos2d::experimental::TMXTiledMap::initWithXML
          (TMXTiledMap *this,basic_string *param_1,basic_string *param_2)

{
  TMXMapInfo *pTVar1;
  
                    /* try { // try from 00efbdf4 to 00ffbfc7 has its CatchHandler @ 00efbd90 */
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  pTVar1 = (TMXMapInfo *)TMXMapInfo::createWithXML(param_1,param_2);
  buildWithMapInfo(this,pTVar1);
  return 1;
}

