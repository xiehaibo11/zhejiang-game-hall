
/* cocos2d::MotionStreak::create(float, float, float, cocos2d::Color3B const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

Node * cocos2d::MotionStreak::create
                 (float param_1,float param_2,float param_3,Color3B *param_4,basic_string *param_5)

{
  Node *this;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  
  this = operator_new(0x3b0,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x300) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined ***)this = &PTR__MotionStreak_01706668;
    *(undefined ***)(this + 0x2f8) = &PTR__MotionStreak_01706bc8;
    *(undefined8 *)(this + 0x310) = 0x30300000302;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x318) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    CustomCommand::CustomCommand((CustomCommand *)(this + 0x360));
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
    pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_5);
    initWithFade((MotionStreak *)this,param_1,param_2,param_3,param_4,pTVar1);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

