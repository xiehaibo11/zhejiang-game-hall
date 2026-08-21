
/* cocos2d::TMXTiledMap::createWithXML(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

TMXTiledMap * cocos2d::TMXTiledMap::createWithXML(basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  TMXTiledMap *this;
  TMXMapInfo *pTVar3;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TMXTiledMap *)0x0) {
    TMXTiledMap(this);
  }
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
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
  pTVar3 = (TMXMapInfo *)TMXMapInfo::createWithXML(param_1,param_2);
  buildWithMapInfo(this,pTVar3);
  Ref::autorelease((Ref *)this);
  return this;
}

