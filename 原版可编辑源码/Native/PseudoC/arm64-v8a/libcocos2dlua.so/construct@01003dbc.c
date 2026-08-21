
/* cocos2d::PhysicsJointLimit::construct(cocos2d::PhysicsBody*, cocos2d::PhysicsBody*, cocos2d::Vec2
   const&, cocos2d::Vec2 const&) */

void cocos2d::PhysicsJointLimit::construct
               (PhysicsBody *param_1,PhysicsBody *param_2,Vec2 *param_3,Vec2 *param_4)

{
  float fVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  
  fVar1 = (float)PhysicsBody::local2World(param_2,param_3);
  fVar3 = in_s1;
  fVar2 = (float)PhysicsBody::local2World(param_1,param_4);
  construct(param_1,param_2,param_3,param_4,0.0,
            SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (in_s1 - fVar3) * (in_s1 - fVar3)));
  return;
}

