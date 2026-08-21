
/* cocos2d::TMXTiledMap::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

TMXTiledMap * cocos2d::TMXTiledMap::create(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  TMXTiledMap *this;
  TMXMapInfo *pTVar3;
  
                    /* try { // try from 00f4e4fc to 0104e557 has its CatchHandler @ 00f4ed48 */
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
                    /* try { // try from 00f4e568 to 0104e56b has its CatchHandler @ 00f4ecf4 */
  pTVar3 = (TMXMapInfo *)TMXMapInfo::create(param_1);
  if (pTVar3 == (TMXMapInfo *)0x0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (TMXTiledMap *)0x0;
  }
  else {
    buildWithMapInfo(this,pTVar3);
    Ref::autorelease((Ref *)this);
                    /* try { // try from 00f4e588 to 0104e5c7 has its CatchHandler @ 00f4ed00 */
  }
  return this;
}

