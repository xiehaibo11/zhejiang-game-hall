
/* cocos2d::NavMeshAgent::NavMeshAgent() */

void __thiscall cocos2d::NavMeshAgent::NavMeshAgent(NavMeshAgent *this)

{
  Component::Component((Component *)this);
  *(undefined8 *)(this + 0x90) = 0x4190000040e66667;
  *(undefined4 *)(this + 0x98) = 0x40000000;
  *(undefined2 *)(this + 0x9c) = 0x31b;
  *(undefined4 *)(this + 0xa0) = 3;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x9e] = (NavMeshAgent)0x0;
  *(undefined ***)this = &PTR__NavMeshAgent_01726ff0;
  *(undefined8 *)(this + 0x88) = 0x4060000041000000;
  *(undefined8 *)(this + 0x80) = 0x400000003f19999a;
  Vec3::Vec3((Vec3 *)(this + 0xa4));
  Vec3::Vec3((Vec3 *)(this + 0xb0));
  *(undefined2 *)(this + 200) = 0x101;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined2 *)(this + 0xd0) = 1;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined8 *)(this + 0xbc) = 0;
                    /* catch() { ... } // from try @ 0101c874 with catch @ 0101c844 */
  *(undefined4 *)(this + 0xec) = 0;
  return;
}

