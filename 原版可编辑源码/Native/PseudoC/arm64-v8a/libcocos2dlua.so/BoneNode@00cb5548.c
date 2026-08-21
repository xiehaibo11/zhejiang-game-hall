
/* cocostudio::timeline::BoneNode::BoneNode() */

void __thiscall cocostudio::timeline::BoneNode::BoneNode(BoneNode *this)

{
  undefined8 uVar1;
  
  cocos2d::Node::Node((Node *)this);
  *(undefined ***)this = &PTR__BoneNode_016cce88;
  *(undefined ***)(this + 0x2f8) = &PTR__BoneNode_016cd4c0;
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0x300));
  this[0x358] = (BoneNode)0x0;
  *(undefined8 *)(this + 0x350) = 0x30300000302;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  *(undefined8 *)(this + 0x364) = cocos2d::Color4F::WHITE._8_8_;
  *(undefined8 *)(this + 0x35c) = uVar1;
  *(undefined8 *)(this + 0x36c) = 0x1400000032;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  cocos2d::Color4F::Color4F((Color4F *)(this + 0x3d0));
  cocos2d::Color4F::Color4F((Color4F *)(this + 0x3e0));
  cocos2d::Color4F::Color4F((Color4F *)(this + 0x3f0));
  cocos2d::Color4F::Color4F((Color4F *)(this + 0x400));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x410));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x41c));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x428));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x434));
  return;
}

