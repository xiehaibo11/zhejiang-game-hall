
/* cocos2d::SpriteBatchNode::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::SpriteBatchNode::addChild
          (SpriteBatchNode *this,Node *param_1,int param_2,basic_string *param_3)

{
  Node::addChild((Node *)this,param_1,param_2,param_3);
  appendChild(this,(Sprite *)param_1);
  return;
}

