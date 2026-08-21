
/* btDbvtBroadphase::getAabb(btBroadphaseProxy*, btVector3&, btVector3&) const */

void __thiscall
btDbvtBroadphase::getAabb
          (btDbvtBroadphase *this,btBroadphaseProxy *param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)param_2 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)param_3 = uVar1;
  return;
}

