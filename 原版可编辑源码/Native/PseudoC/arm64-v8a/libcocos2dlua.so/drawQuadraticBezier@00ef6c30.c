
/* cocos2d::DrawNode::drawQuadraticBezier(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, unsigned int, cocos2d::Color4F const&) */

void cocos2d::DrawNode::drawQuadraticBezier
               (Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,uint param_4,Color4F *param_5)

{
  Color4F *in_x5;
  
  drawQuadBezier((DrawNode *)param_1,param_2,param_3,(Vec2 *)(ulong)param_4,(uint)param_5,in_x5);
  return;
}

