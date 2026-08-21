
/* cocos2d::MotionStreak3D::create(float, float, float, cocos2d::Color3B const&,
   cocos2d::Texture2D*) */

Node * cocos2d::MotionStreak3D::create
                 (float param_1,float param_2,float param_3,Color3B *param_4,Texture2D *param_5)

{
  Node *this;
  
  this = operator_new(0x3d0,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    this[0x300] = (Node)0x0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined ***)this = &PTR__MotionStreak3D_016d3610;
    *(undefined ***)(this + 0x2f8) = &PTR__MotionStreak3D_016d3b70;
    *(undefined8 *)(this + 0x310) = 0x30300000302;
    Vec3::Vec3((Vec3 *)(this + 0x318));
    *(undefined8 *)(this + 0x324) = 0;
    Vec3::Vec3((Vec3 *)(this + 0x32c),0.0,1.0,0.0);
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
    CustomCommand::CustomCommand((CustomCommand *)(this + 0x380));
    initWithFade((MotionStreak3D *)this,param_1,param_2,param_3,param_4,param_5);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

