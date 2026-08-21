
/* cocos2d::CardinalSplineBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::CardinalSplineBy::startWithTarget(CardinalSplineBy *this,Node *param_1)

{
  undefined8 *puVar1;
  
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  *(float *)(this + 0x60) =
       1.0 / (float)((*(long *)(*(long *)(this + 0x58) + 0x38) -
                      *(long *)(*(long *)(this + 0x58) + 0x30) >> 3) + -1);
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  *(undefined8 *)(this + 0x68) = *puVar1;
  *(undefined8 *)(this + 0x70) = 0;
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  *(undefined8 *)(this + 0x78) = *puVar1;
  return;
}

