
/* cocos2d::ui::ScrollViewBar::onEnter() */

void __thiscall cocos2d::ui::ScrollViewBar::onEnter(ScrollViewBar *this)

{
  ulong uVar1;
  
                    /* try { // try from 00dbfa88 to 00ebfaaf has its CatchHandler @ 00dbf8e8 */
                    /* catch() { ... } // from try @ 00dbf978 with catch @ 00dbfa94 */
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) != 0)) {
    return;
  }
  ProtectedNode::onEnter((ProtectedNode *)this);
  Node::scheduleUpdate((Node *)this);
  return;
}

