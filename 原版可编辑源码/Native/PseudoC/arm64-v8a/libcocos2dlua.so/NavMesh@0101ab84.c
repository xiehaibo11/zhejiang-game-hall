
/* cocos2d::NavMesh::NavMesh() */

void __thiscall cocos2d::NavMesh::NavMesh(NavMesh *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 0101abbc to 0111abc3 has its CatchHandler @ 0101abf8 */
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
                    /* try { // try from 0101abc4 to 0111ac0b has its CatchHandler @ 0101ab74 */
  *(undefined ***)this = &PTR__NavMesh_01726fb8;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  NavMeshDebugDraw::NavMeshDebugDraw((NavMeshDebugDraw *)(this + 0xa0));
  this[400] = (NavMesh)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  return;
}

