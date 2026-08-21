
/* cocos2d::Node::updateOrderOfArrival() */

void __thiscall cocos2d::Node::updateOrderOfArrival(Node *this)

{
  s_globalOrderOfArrival = s_globalOrderOfArrival + 1;
  *(int *)(this + 0x168) = s_globalOrderOfArrival;
  return;
}

