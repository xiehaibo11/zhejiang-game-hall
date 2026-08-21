
/* cocos2d::SpriteBatchNode::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long) */

Node * cocos2d::SpriteBatchNode::create(basic_string *param_1,long param_2)

{
  Node *this;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  ulong uVar2;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined ***)this = &PTR__SpriteBatchNode_01710b20;
    *(undefined ***)(this + 0x2f8) = &PTR__SpriteBatchNode_01711080;
    BatchCommand::BatchCommand((BatchCommand *)(this + 0x310));
    *(undefined8 *)(this + 0x398) = 0;
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
    pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_1);
    uVar2 = initWithTexture((SpriteBatchNode *)this,pTVar1,param_2);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

