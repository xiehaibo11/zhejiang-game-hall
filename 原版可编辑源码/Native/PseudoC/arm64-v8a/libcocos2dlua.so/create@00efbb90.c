
/* cocos2d::experimental::TMXTiledMap::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Node * cocos2d::experimental::TMXTiledMap::create(basic_string *param_1)

{
  Node *this;
  TMXMapInfo *pTVar1;
  
                    /* catch() { ... } // from try @ 00efb86c with catch @ 00efbb90 */
                    /* catch() { ... } // from try @ 00efb8b4 with catch @ 00efbba0 */
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
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
  pTVar1 = (TMXMapInfo *)TMXMapInfo::create(param_1);
  if (pTVar1 == (TMXMapInfo *)0x0) {
    if (this != (Node *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
  }
  else {
    buildWithMapInfo((TMXTiledMap *)this,pTVar1);
    Ref::autorelease((Ref *)this);
  }
                    /* catch() { ... } // from try @ 00efbd10 with catch @ 00efbc64 */
  return this;
}

