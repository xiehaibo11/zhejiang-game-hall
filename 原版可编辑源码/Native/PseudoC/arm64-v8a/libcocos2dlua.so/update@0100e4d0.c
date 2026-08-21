
/* cocos2d::PhysicsWorld::update(float, bool) */

void __thiscall cocos2d::PhysicsWorld::update(PhysicsWorld *this,float param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Mat4 *pMVar4;
  int iVar5;
  float fVar6;
  undefined4 in_register_00005004;
  float fVar7;
  float fVar8;
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x30))();
  }
  if ((*(long *)(this + 0x90) != *(long *)(this + 0x98)) ||
     (*(long *)(this + 0xa8) != *(long *)(this + 0xb0))) {
    (**(code **)(*(long *)this + 0xa0))(this);
  }
  pMVar4 = (Mat4 *)(**(code **)(**(long **)(this + 0x68) + 1000))();
  Mat4::Mat4(aMStack_98,pMVar4);
  beforeSimulation(this,*(Node **)(this + 0x68),aMStack_98,1.0,1.0,0.0);
  if ((*(long *)(this + 0xc0) != *(long *)(this + 200)) ||
     (*(long *)(this + 0xd8) != *(long *)(this + 0xe0))) {
    (**(code **)(*(long *)this + 0xa8))(this);
  }
  if (1.1920929e-07 <= param_1) {
    if (param_2) {
      cpHastySpaceStep(CONCAT44(in_register_00005004,param_1),*(undefined8 *)(this + 0x28));
    }
    else {
      fVar6 = *(float *)(this + 0x1c) + param_1;
      *(float *)(this + 0x1c) = fVar6;
      if (*(int *)(this + 0x24) == 0) {
        iVar5 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar5 + 1;
        if (*(int *)(this + 0x14) <= iVar5 + 1) {
          if (0 < *(int *)(this + 0x20)) {
            iVar5 = 0;
            fVar6 = (fVar6 * *(float *)(this + 0x10)) / (float)*(int *)(this + 0x20);
            do {
              cpHastySpaceStep(fVar6,*(undefined8 *)(this + 0x28));
              puVar2 = *(undefined8 **)(this + 0x40);
              for (puVar1 = *(undefined8 **)(this + 0x38); puVar1 != puVar2; puVar1 = puVar1 + 1) {
                (**(code **)(*(long *)*puVar1 + 0x30))(fVar6);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(this + 0x20));
          }
          *(undefined8 *)(this + 0x18) = 0;
        }
      }
      else {
                    /* try { // try from 0100e5e0 to 0110e5e7 has its CatchHandler @ 0100e6b0 */
        fVar8 = 1.0 / (float)*(int *)(this + 0x24);
                    /* try { // try from 0100e5e8 to 0110e6cb has its CatchHandler @ 0100e2e8 */
        if (fVar8 < fVar6) {
          fVar7 = *(float *)(this + 0x10);
          do {
            *(float *)(this + 0x1c) = fVar6 - fVar8;
            cpHastySpaceStep(fVar8 * fVar7,*(undefined8 *)(this + 0x28));
            fVar6 = *(float *)(this + 0x1c);
          } while (fVar8 < fVar6);
        }
      }
    }
    if (*(int *)(this + 0x80) != 0) {
                    /* catch() { ... } // from try @ 0100e5e0 with catch @ 0100e6b0 */
      (**(code **)(*(long *)this + 0x50))(this);
    }
    afterSimulation(this,*(Node **)(this + 0x68),aMStack_98,0.0);
                    /* catch() { ... } // from try @ 0100e708 with catch @ 0100e6cc */
    if (*(long **)(this + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x140) + 0x30))();
    }
  }
  Mat4::~Mat4(aMStack_98);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0100e700 to 0110e707 has its CatchHandler @ 0100e788 */
                    /* try { // try from 0100e708 to 0110e7a3 has its CatchHandler @ 0100e6cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

