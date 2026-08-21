
/* cocos2d::PhysicsBody::beforeSimulation(cocos2d::Mat4 const&, cocos2d::Mat4 const&, float, float,
   float) */

void __thiscall
cocos2d::PhysicsBody::beforeSimulation
          (PhysicsBody *this,Mat4 *param_1,Mat4 *param_2,float param_3,float param_4,float param_5)

{
  long lVar1;
  float fVar2;
  float *pfVar3;
  Mat4 *extraout_x1;
  ulong uVar4;
  float fVar5;
  undefined4 in_register_00005044;
  undefined8 local_98;
  float local_90;
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(float *)(this + 0xf4) != param_3) || (*(float *)(this + 0xf8) != param_4)) {
    *(float *)(this + 0xf4) = param_3;
    *(float *)(this + 0xf8) = param_4;
    (**(code **)(*(long *)this + 0xe8))(this);
    param_1 = extraout_x1;
  }
  if (*(float *)(this + 0xd0) != param_5) {
    (**(code **)(*(long *)this + 0xe0))(CONCAT44(in_register_00005044,param_5),this,param_1);
  }
  uVar4 = *(ulong *)(this + 0xe0);
  local_90 = *(float *)(this + 0xe8);
                    /* try { // try from 010013f4 to 011014bb has its CatchHandler @ 010013f4
                       catch() { ... } // from try @ 010013f4 with catch @ 010013f4
                       catch() { ... } // from try @ 010014c4 with catch @ 010013f4
                       catch() { ... } // from try @ 010017dc with catch @ 010013f4 */
  local_98._0_4_ = (float)uVar4;
  local_98._4_4_ = (float)(uVar4 >> 0x20);
  fVar2 = local_98._4_4_;
  fVar5 = (float)local_98;
  local_98 = uVar4;
  Mat4::transformVector(param_2,fVar5,fVar2,local_90,1.0,(Vec3 *)&local_98);
  (**(code **)(*(long *)this + 0xd8))(local_98 & 0xffffffff,local_98._4_4_,this);
  *(ulong *)(this + 0xfc) = local_98;
  pfVar3 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))();
  if ((*pfVar3 != 0.5) || (pfVar3[1] != 0.5)) {
    Mat4::getInversed();
    Mat4::transformVector(aMStack_88,(float)local_98,local_98._4_4_,local_90,1.0,(Vec3 *)&local_98);
    Mat4::~Mat4(aMStack_88);
    fVar2 = (float)local_98;
    fVar5 = (float)(**(code **)(**(long **)(this + 0x28) + 0xe0))();
    *(float *)(this + 0xec) = fVar2 - fVar5;
    fVar2 = local_98._4_4_;
    fVar5 = (float)(**(code **)(**(long **)(this + 0x28) + 0xf0))();
    *(float *)(this + 0xf0) = fVar2 - fVar5;
  }
                    /* try { // try from 010014bc to 011014c3 has its CatchHandler @ 010017e0 */
                    /* try { // try from 010014c4 to 011014e7 has its CatchHandler @ 010013f4 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

