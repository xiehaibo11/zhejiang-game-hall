
/* cocos2d::NavMeshAgent::setOrientationRefAxes(cocos2d::Vec3 const&) */

void __thiscall cocos2d::NavMeshAgent::setOrientationRefAxes(NavMeshAgent *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xbc) = uVar1;
  return;
}

