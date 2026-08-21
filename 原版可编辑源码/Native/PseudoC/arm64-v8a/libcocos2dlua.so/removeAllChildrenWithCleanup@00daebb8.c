
/* cocos2d::ui::Layout::removeAllChildrenWithCleanup(bool) */

void __thiscall cocos2d::ui::Layout::removeAllChildrenWithCleanup(Layout *this,bool param_1)

{
                    /* try { // try from 00daebbc to 00eaebcf has its CatchHandler @ 00daece4 */
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  this[0x7b0] = (Layout)0x1;
  return;
}

