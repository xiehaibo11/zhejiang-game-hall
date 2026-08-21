
/* cocos2d::extension::ControlPotentiometer::distanceBetweenPointAndPoint(cocos2d::Vec2,
   cocos2d::Vec2) */

float cocos2d::extension::ControlPotentiometer::distanceBetweenPointAndPoint
                (float param_1,float param_2,float param_3,float param_4)

{
  return SQRT((param_1 - param_3) * (param_1 - param_3) + (param_2 - param_4) * (param_2 - param_4))
  ;
}

