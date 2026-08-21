
/* btDbvtBroadphase::aabbTest(btVector3 const&, btVector3 const&, btBroadphaseAabbCallback&) */

void __thiscall
btDbvtBroadphase::aabbTest
          (btDbvtBroadphase *this,btVector3 *param_1,btVector3 *param_2,
          btBroadphaseAabbCallback *param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined **local_30;
  btBroadphaseAabbCallback *pbStack_28;
  
  local_30 = &PTR__ICollide_01731638;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  local_50 = *(undefined8 *)param_1;
  uStack_38 = *(undefined8 *)(param_2 + 8);
  local_40 = *(undefined8 *)param_2;
  pbStack_28 = param_3;
  btDbvt::collideTV((btDbvt *)(this + 8),*(btDbvtNode **)(this + 8),(btDbvtAabbMm *)&local_50,
                    (ICollide *)&local_30);
  btDbvt::collideTV((btDbvt *)(this + 0x68),*(btDbvtNode **)(this + 0x68),(btDbvtAabbMm *)&local_50,
                    (ICollide *)&local_30);
  return;
}

