
/* non-virtual thunk to cocos2d::LayerColor::~LayerColor() */

void __thiscall cocos2d::LayerColor::~LayerColor(LayerColor *this)

{
  Node *this_00;
  
  this_00 = (Node *)(this + -800);
  *(undefined ***)this_00 = &PTR__LayerGradient_01700380;
  *(undefined ***)this = &PTR__LayerColor_017009f0;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x70));
  Node::~Node(this_00);
  operator_delete(this_00);
  return;
}

