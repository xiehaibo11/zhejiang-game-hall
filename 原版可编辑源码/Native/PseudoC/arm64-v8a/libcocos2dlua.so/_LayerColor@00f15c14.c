
/* non-virtual thunk to cocos2d::LayerColor::~LayerColor() */

void __thiscall cocos2d::LayerColor::~LayerColor(LayerColor *this)

{
  *(undefined ***)(this + -800) = &PTR__LayerGradient_01700380;
  *(undefined ***)this = &PTR__LayerColor_017009f0;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x70));
  Node::~Node((Node *)(this + -800));
  return;
}

