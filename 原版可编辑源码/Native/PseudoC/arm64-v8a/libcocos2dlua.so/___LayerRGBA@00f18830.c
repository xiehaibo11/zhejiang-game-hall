
/* cocos2d::__LayerRGBA::~__LayerRGBA() */

void __thiscall cocos2d::__LayerRGBA::~__LayerRGBA(__LayerRGBA *this)

{
  Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

