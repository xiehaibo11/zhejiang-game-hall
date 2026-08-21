
/* dragonBones::CCArmatureDisplay::~CCArmatureDisplay() */

void __thiscall dragonBones::CCArmatureDisplay::~CCArmatureDisplay(CCArmatureDisplay *this)

{
  cocos2d::Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

