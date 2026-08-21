
/* cocos2d::Sprite::addChild(cocos2d::Node*, int, int) */

void __thiscall cocos2d::Sprite::addChild(Sprite *this,Node *param_1,int param_2,int param_3)

{
  Sprite *pSVar1;
  
  if (param_1 != (Node *)0x0) {
                    /* try { // try from 00f404cc to 0104054b has its CatchHandler @ 00f407e8 */
    if (*(int *)(this + 0x42c) == 3) {
      pSVar1 = (Sprite *)__dynamic_cast(param_1,&Node::typeinfo,&typeinfo,0);
      SpriteBatchNode::appendChild(*(SpriteBatchNode **)(this + 0x310),pSVar1);
      if (this[0x1fb] == (Sprite)0x0) {
        (**(code **)(*(long *)this + 0x650))(this);
      }
    }
                    /* try { // try from 00f4054c to 010405cf has its CatchHandler @ 00f403fc */
    Node::addChild((Node *)this,param_1,param_2,param_3);
    return;
  }
  return;
}

