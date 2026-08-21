
/* cocos2d::extension::ControlPotentiometer::angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(cocos2d::Vec2,
   cocos2d::Vec2, cocos2d::Vec2, cocos2d::Vec2) */

float cocos2d::extension::ControlPotentiometer::
      angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  
  fVar1 = atan2f(param_3 - param_1,param_4 - param_2);
  fVar2 = atan2f(param_7 - param_5,param_8 - param_6);
  return ((fVar1 - fVar2) * 180.0) / 3.1415927;
}

