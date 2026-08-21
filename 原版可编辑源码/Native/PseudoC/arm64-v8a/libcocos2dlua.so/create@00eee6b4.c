
/* cocos2d::AtlasNode::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, int, int) */

Node * cocos2d::AtlasNode::create(basic_string *param_1,int param_2,int param_3,int param_4)

{
  Node *this;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  ulong uVar2;
  
  this = operator_new(0x3f0,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined ***)this = &PTR__AtlasNode_016fa528;
    *(undefined ***)(this + 0x2f8) = &PTR__AtlasNode_016faa90;
    Color3B::Color3B((Color3B *)(this + 0x310));
    *(undefined8 *)(this + 0x318) = 0;
    this[800] = (Node)0x0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined4 *)(this + 0x338) = 0;
    this[0x33c] = (Node)0x0;
    QuadCommand::QuadCommand((QuadCommand *)(this + 0x340));
  }
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
  uVar2 = initWithTexture((AtlasNode *)this,pTVar1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    if (this != (Node *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
  }
  else {
    Ref::autorelease((Ref *)this);
  }
  return this;
}

