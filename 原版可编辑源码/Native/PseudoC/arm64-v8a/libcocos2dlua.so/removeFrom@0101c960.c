
/* cocos2d::NavMeshAgent::removeFrom(dtCrowd*) */

void __thiscall cocos2d::NavMeshAgent::removeFrom(NavMeshAgent *this,dtCrowd *param_1)

{
  dtCrowd::removeAgent(param_1,*(int *)(this + 0xcc));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  return;
}

