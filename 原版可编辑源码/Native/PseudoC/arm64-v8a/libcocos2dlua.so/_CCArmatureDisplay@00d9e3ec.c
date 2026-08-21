
/* virtual thunk to dragonBones::CCArmatureDisplay::~CCArmatureDisplay() */

void __thiscall dragonBones::CCArmatureDisplay::~CCArmatureDisplay(CCArmatureDisplay *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  cocos2d::Node::~Node((Node *)(this + lVar1));
  operator_delete((Node *)(this + lVar1));
  return;
}

