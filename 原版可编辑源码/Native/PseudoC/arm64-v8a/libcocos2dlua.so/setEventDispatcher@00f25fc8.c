
/* cocos2d::Node::setEventDispatcher(cocos2d::EventDispatcher*) */

void __thiscall cocos2d::Node::setEventDispatcher(Node *this,EventDispatcher *param_1)

{
                    /* catch() { ... } // from try @ 00f25ffc with catch @ 00f25fd0 */
  if (*(EventDispatcher **)(this + 0x1f0) != param_1) {
    EventDispatcher::removeEventListenersForTarget(*(EventDispatcher **)(this + 0x1f0),this,false);
                    /* try { // try from 00f25ff4 to 01025ffb has its CatchHandler @ 00f26014 */
    if (param_1 != (EventDispatcher *)0x0) {
                    /* try { // try from 00f25ffc to 0102602f has its CatchHandler @ 00f25fd0 */
      Ref::retain((Ref *)param_1);
    }
    if (*(Ref **)(this + 0x1f0) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x1f0));
    }
    *(EventDispatcher **)(this + 0x1f0) = param_1;
  }
                    /* catch() { ... } // from try @ 00f25ff4 with catch @ 00f26014 */
  return;
}

