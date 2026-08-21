
/* cocos2d::Node::~Node() */

void __thiscall cocos2d::Node::~Node(Node *this)

{
  ~Node(this);
  operator_delete(this);
  return;
}

