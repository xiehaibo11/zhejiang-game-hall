
/* cocos2d::LayerGradient::~LayerGradient() */

void __thiscall cocos2d::LayerGradient::~LayerGradient(LayerGradient *this)

{
  *(undefined ***)this = &PTR__LayerGradient_01700380;
  *(undefined ***)(this + 800) = &PTR__LayerColor_017009f0;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x390));
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

