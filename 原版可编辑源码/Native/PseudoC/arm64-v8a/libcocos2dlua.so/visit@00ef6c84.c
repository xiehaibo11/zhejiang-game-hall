
/* cocos2d::DrawNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::DrawNode::visit(DrawNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  if (this[0x453] != (DrawNode)0x0) {
    param_2 = (Mat4 *)Mat4::IDENTITY;
  }
  Node::visit((Node *)this,param_1,param_2,param_3);
  return;
}

