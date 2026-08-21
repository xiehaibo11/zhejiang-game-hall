
/* cocos2d::__NodeRGBA::~__NodeRGBA() */

void __thiscall cocos2d::__NodeRGBA::~__NodeRGBA(__NodeRGBA *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

