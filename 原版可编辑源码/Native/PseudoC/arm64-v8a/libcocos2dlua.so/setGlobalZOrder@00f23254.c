
/* cocos2d::Node::setGlobalZOrder(float) */

void __thiscall cocos2d::Node::setGlobalZOrder(Node *this,float param_1)

{
                    /* try { // try from 00f23254 to 0102325b has its CatchHandler @ 00f23598 */
                    /* try { // try from 00f2325c to 0102332f has its CatchHandler @ 00f22f58 */
  if (*(float *)(this + 0x170) != param_1) {
    *(float *)(this + 0x170) = param_1;
    EventDispatcher::setDirtyForNode(*(EventDispatcher **)(this + 0x1f0),this);
    return;
  }
  return;
}

