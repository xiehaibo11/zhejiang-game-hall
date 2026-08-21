
/* cocos2d::Sprite::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Sprite::addChild(Sprite *this,Node *param_1,int param_2,basic_string *param_3)

{
  Sprite *pSVar1;
  
  if (param_1 != (Node *)0x0) {
    if (*(int *)(this + 0x42c) == 3) {
      pSVar1 = (Sprite *)__dynamic_cast(param_1,&Node::typeinfo,&typeinfo,0);
      SpriteBatchNode::appendChild(*(SpriteBatchNode **)(this + 0x310),pSVar1);
      if (this[0x1fb] == (Sprite)0x0) {
        (**(code **)(*(long *)this + 0x650))(this);
      }
    }
                    /* try { // try from 00f405d0 to 010405d3 has its CatchHandler @ 00f407f4 */
                    /* try { // try from 00f405d8 to 010405e7 has its CatchHandler @ 00f407f0 */
    Node::addChild((Node *)this,param_1,param_2,param_3);
    return;
  }
  return;
}

