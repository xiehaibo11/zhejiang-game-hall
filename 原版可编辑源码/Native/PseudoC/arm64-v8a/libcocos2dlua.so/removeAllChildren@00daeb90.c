
/* cocos2d::ui::Layout::removeAllChildren() */

void __thiscall cocos2d::ui::Layout::removeAllChildren(Layout *this)

{
  Node::removeAllChildren((Node *)this);
  this[0x7b0] = (Layout)0x1;
                    /* try { // try from 00daebac to 00eaebbb has its CatchHandler @ 00daece8 */
  return;
}

