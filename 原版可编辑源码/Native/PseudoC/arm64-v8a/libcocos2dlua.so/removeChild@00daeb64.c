
/* cocos2d::ui::Layout::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::ui::Layout::removeChild(Layout *this,Node *param_1,bool param_2)

{
                    /* try { // try from 00daeb70 to 00eaeb7f has its CatchHandler @ 00daecf0 */
  Node::removeChild((Node *)this,param_1,param_2);
                    /* try { // try from 00daeb80 to 00eaeb93 has its CatchHandler @ 00daecec */
  this[0x7b0] = (Layout)0x1;
  return;
}

