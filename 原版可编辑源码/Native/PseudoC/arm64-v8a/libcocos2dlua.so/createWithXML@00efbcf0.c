
/* cocos2d::experimental::TMXTiledMap::createWithXML(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

Node * cocos2d::experimental::TMXTiledMap::createWithXML
                 (basic_string *param_1,basic_string *param_2)

{
  Node *this;
  TMXMapInfo *pTVar1;
  
                    /* try { // try from 00efbd08 to 00ffbd0f has its CatchHandler @ 00efbd10 */
                    /* catch() { ... } // from try @ 00efbcb4 with catch @ 00efbd10
                       catch() { ... } // from try @ 00efbd08 with catch @ 00efbd10
                       try { // try from 00efbd10 to 00ffbd87 has its CatchHandler @ 00efbc64 */
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
                    /* catch() { ... } // from try @ 00efbcd8 with catch @ 00efbd20 */
    Node::Node(this);
    *(undefined ***)this = &PTR__TMXTiledMap_016fcaa8;
    Size::Size((Size *)(this + 0x2f8),(Size *)&Size::ZERO);
    Size::Size((Size *)(this + 0x300),(Size *)&Size::ZERO);
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x318) = 0;
    *(undefined8 *)(this + 0x310) = 0;
    *(undefined4 *)(this + 0x348) = 0x3f800000;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined4 *)(this + 0x370) = 0x3f800000;
  }
  (**(code **)(*(long *)this + 0x160))(this,&Size::ZERO);
                    /* try { // try from 00efbd90 to 00ffbdcf has its CatchHandler @ 00efbd90
                       catch() { ... } // from try @ 00efbd90 with catch @ 00efbd90
                       catch() { ... } // from try @ 00efbdf4 with catch @ 00efbd90 */
  pTVar1 = (TMXMapInfo *)TMXMapInfo::createWithXML(param_1,param_2);
  buildWithMapInfo((TMXTiledMap *)this,pTVar1);
  Ref::autorelease((Ref *)this);
  return this;
}

