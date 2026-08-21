
/* cocos2d::Layer::~Layer() */

void __thiscall cocos2d::Layer::~Layer(Layer *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

