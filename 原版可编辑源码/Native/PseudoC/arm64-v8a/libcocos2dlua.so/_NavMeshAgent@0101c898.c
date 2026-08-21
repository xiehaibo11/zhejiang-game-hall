
/* cocos2d::NavMeshAgent::~NavMeshAgent() */

void __thiscall cocos2d::NavMeshAgent::~NavMeshAgent(NavMeshAgent *this)

{
  NavMeshAgent *pNVar1;
  code *pcVar2;
  
  pNVar1 = *(NavMeshAgent **)(this + 0x70);
  *(undefined ***)this = &PTR__NavMeshAgent_01726ff0;
  if (this + 0x50 == pNVar1) {
    pcVar2 = *(code **)(*(long *)pNVar1 + 0x20);
  }
  else {
    if (pNVar1 == (NavMeshAgent *)0x0) goto LAB_0101c8e4;
                    /* catch() { ... } // from try @ 0101c868 with catch @ 0101c8cc */
    pcVar2 = *(code **)(*(long *)pNVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0101c8e4:
  Component::~Component((Component *)this);
  return;
}

