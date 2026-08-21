
/* cocos2d::DrawNode::drawSolidCircle(cocos2d::Vec2 const&, float, float, unsigned int,
   cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawSolidCircle
          (DrawNode *this,Vec2 *param_1,float param_2,float param_3,uint param_4,Color4F *param_5)

{
                    /* try { // try from 00ef6b20 to 00ff6b27 has its CatchHandler @ 00ef6d3c */
  drawSolidCircle(this,param_1,param_2,param_3,param_4,1.0,1.0,param_5);
  return;
}

