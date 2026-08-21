
/* cocos2d::Skybox::Skybox() */

void __thiscall cocos2d::Skybox::Skybox(Skybox *this)

{
  Node::Node((Node *)this);
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined ***)this = &PTR__Skybox_016d4ba0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x310));
  *(undefined8 *)(this + 0x360) = 0;
  return;
}

