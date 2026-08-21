
/* cocos2d::SpriteBatchNode::~SpriteBatchNode() */

void __thiscall cocos2d::SpriteBatchNode::~SpriteBatchNode(SpriteBatchNode *this)

{
  ~SpriteBatchNode(this);
  operator_delete(this);
  return;
}

