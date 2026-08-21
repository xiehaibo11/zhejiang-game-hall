
/* cocos2d::AttachNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void cocos2d::AttachNode::visit(Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Node::visit((Node *)param_1,(Renderer *)param_2,(Mat4 *)(ulong)param_3,3);
  return;
}

