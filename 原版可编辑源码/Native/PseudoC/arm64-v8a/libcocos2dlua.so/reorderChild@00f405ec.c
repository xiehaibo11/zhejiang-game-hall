
/* cocos2d::Sprite::reorderChild(cocos2d::Node*, int) */

void __thiscall cocos2d::Sprite::reorderChild(Sprite *this,Node *param_1,int param_2)

{
                    /* try { // try from 00f40604 to 0104060b has its CatchHandler @ 00f4084c */
                    /* try { // try from 00f40614 to 01040617 has its CatchHandler @ 00f40830 */
  if ((*(int *)(this + 0x42c) == 3) && (this[0x1fb] == (Sprite)0x0)) {
                    /* try { // try from 00f4061c to 01040627 has its CatchHandler @ 00f40834 */
    (**(code **)(*(long *)this + 0x650))(this);
                    /* try { // try from 00f40630 to 0104063f has its CatchHandler @ 00f40838 */
    SpriteBatchNode::reorderBatch(*(SpriteBatchNode **)(this + 0x310),true);
  }
  Node::reorderChild((Node *)this,param_1,param_2);
  return;
}

