
/* cocos2d::DrawNode::drawCatmullRom(cocos2d::PointArray*, unsigned int, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawCatmullRom(DrawNode *this,PointArray *param_1,uint param_2,Color4F *param_3)

{
  drawCardinalSpline(this,param_1,0.5,param_2,param_3);
  return;
}

