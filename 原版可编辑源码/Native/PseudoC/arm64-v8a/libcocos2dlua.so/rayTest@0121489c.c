
/* btDbvtBroadphase::rayTest(btVector3 const&, btVector3 const&, btBroadphaseRayCallback&, btVector3
   const&, btVector3 const&) */

void __thiscall
btDbvtBroadphase::rayTest
          (btDbvtBroadphase *this,btVector3 *param_1,btVector3 *param_2,
          btBroadphaseRayCallback *param_3,btVector3 *param_4,btVector3 *param_5)

{
  undefined **local_70;
  btBroadphaseRayCallback *pbStack_68;
  
  local_70 = &PTR__ICollide_017315d8;
  pbStack_68 = param_3;
  btDbvt::rayTestInternal
            ((btDbvt *)(this + 8),*(btDbvtNode **)(this + 8),param_1,param_2,
             (btVector3 *)(param_3 + 8),(uint *)(param_3 + 0x18),*(float *)(param_3 + 0x24),param_4,
             param_5,(ICollide *)&local_70);
  btDbvt::rayTestInternal
            ((btDbvt *)(this + 0x68),*(btDbvtNode **)(this + 0x68),param_1,param_2,
             (btVector3 *)(param_3 + 8),(uint *)(param_3 + 0x18),*(float *)(param_3 + 0x24),param_4,
             param_5,(ICollide *)&local_70);
  return;
}

