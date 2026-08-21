
/* cocos2d::Scene::stepPhysicsAndNavigation(float) */

void __thiscall cocos2d::Scene::stepPhysicsAndNavigation(Scene *this,float param_1)

{
  long *plVar1;
  undefined4 in_register_00005004;
  
                    /* try { // try from 00f3d444 to 0103d44b has its CatchHandler @ 00f3d518 */
                    /* try { // try from 00f3d454 to 0103d457 has its CatchHandler @ 00f3d4f4 */
  plVar1 = *(long **)(this + 0x348);
  if ((plVar1 != (long *)0x0) && ((char)plVar1[0xe] != '\0')) {
    (**(code **)(*plVar1 + 0x48))(CONCAT44(in_register_00005004,param_1),plVar1,0);
  }
  if (*(Physics3DWorld **)(this + 0x350) != (Physics3DWorld *)0x0) {
    Physics3DWorld::stepSimulate(*(Physics3DWorld **)(this + 0x350),param_1);
  }
  if (*(NavMesh **)(this + 0x360) != (NavMesh *)0x0) {
    NavMesh::update(*(NavMesh **)(this + 0x360),param_1);
    return;
  }
                    /* try { // try from 00f3d4ac to 0103d4b7 has its CatchHandler @ 00f3d538 */
  return;
}

