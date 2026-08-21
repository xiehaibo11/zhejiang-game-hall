
/* cocos2d::NavMeshAgent::~NavMeshAgent() */

void __thiscall cocos2d::NavMeshAgent::~NavMeshAgent(NavMeshAgent *this)

{
  NavMeshAgent *pNVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 0101c948 with catch @ 0101c904 */
  pNVar1 = *(NavMeshAgent **)(this + 0x70);
  *(undefined ***)this = &PTR__NavMeshAgent_01726ff0;
  if (this + 0x50 == pNVar1) {
    pcVar2 = *(code **)(*(long *)pNVar1 + 0x20);
  }
  else {
    if (pNVar1 == (NavMeshAgent *)0x0) goto LAB_0101c940;
    pcVar2 = *(code **)(*(long *)pNVar1 + 0x28);
  }
  (*pcVar2)();
LAB_0101c940:
                    /* try { // try from 0101c940 to 0111c947 has its CatchHandler @ 0101ca34 */
  Component::~Component((Component *)this);
                    /* try { // try from 0101c948 to 0111ca4f has its CatchHandler @ 0101c904 */
  operator_delete(this);
  return;
}

