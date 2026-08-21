
/* cocos2d::TintTo::create(float, cocos2d::Color3B const&) */

void cocos2d::TintTo::create(float param_1,Color3B *param_2)

{
  create(param_1,(uchar)*param_2,(uchar)param_2[1],(uchar)param_2[2]);
  return;
}

