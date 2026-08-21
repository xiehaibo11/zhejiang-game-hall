
/* cocos2d::Scene::initWithPhysics() */

void __thiscall cocos2d::Scene::initWithPhysics(Scene *this)

{
  long lVar1;
  undefined8 uVar2;
  Director *this_00;
  Ref *this_01;
  Physics3DWorldDes local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = PhysicsWorld::construct(this);
  *(undefined8 *)(this + 0x348) = uVar2;
  this_00 = (Director *)Director::getInstance();
                    /* try { // try from 00f3d3b0 to 0103d3b3 has its CatchHandler @ 00f3d3d4 */
  uVar2 = 0;
  if (this_00 != (Director *)0x0) {
                    /* try { // try from 00f3d3b4 to 0103d3e7 has its CatchHandler @ 00f3d380 */
    uVar2 = Director::getWinSize(this_00);
    (**(code **)(*(long *)this + 0x160))(this,uVar2);
                    /* catch() { ... } // from try @ 00f3d3b0 with catch @ 00f3d3d4 */
    Vec3::Vec3((Vec3 *)((ulong)local_48 | 4));
                    /* try { // try from 00f3d3e8 to 0103d433 has its CatchHandler @ 00f3d3e8
                       catch() { ... } // from try @ 00f3d3e8 with catch @ 00f3d3e8
                       catch() { ... } // from try @ 00f3d4dc with catch @ 00f3d3e8 */
    local_48[0] = (Physics3DWorldDes)0x0;
    Vec3::Vec3((Vec3 *)&local_38,0.0,-9.8,0.0);
    local_44 = local_38;
    local_3c = local_30;
    this_01 = (Ref *)Physics3DWorld::create(local_48);
    *(Ref **)(this + 0x350) = this_01;
    uVar2 = 0;
    if (this_01 != (Ref *)0x0) {
      Ref::retain(this_01);
      uVar2 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00f3d434 to 0103d43b has its CatchHandler @ 00f3d530 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

