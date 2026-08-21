
/* btCollisionWorld::contactPairTest(btCollisionObject*, btCollisionObject*,
   btCollisionWorld::ContactResultCallback&) */

void __thiscall
btCollisionWorld::contactPairTest
          (btCollisionWorld *this,btCollisionObject *param_1,btCollisionObject *param_2,
          ContactResultCallback *param_3)

{
  long *plVar1;
  undefined **local_b8 [6];
  ContactResultCallback *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  btCollisionObject *local_70;
  btCollisionObject *pbStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  btCollisionObject *local_48;
  btCollisionObject *pbStack_40;
  undefined8 local_38;
  
  uStack_50 = *(undefined8 *)(param_1 + 200);
  pbStack_40 = param_1 + 8;
  pbStack_68 = param_2 + 8;
  local_58 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_78 = *(undefined8 *)(param_2 + 200);
  local_60 = 0xffffffffffffffff;
  local_80 = 0;
  local_70 = param_2;
  local_48 = param_1;
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x10))
                             (*(long **)(this + 0x28),&local_58,&local_80,0);
  if (plVar1 != (long *)0x0) {
    btManifoldResult::btManifoldResult
              ((btManifoldResult *)local_b8,(btCollisionObjectWrapper *)&local_58,
               (btCollisionObjectWrapper *)&local_80);
    local_b8[0] = &PTR__Result_01731e88;
    local_88 = param_3;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_58,&local_80,this + 0x30,local_b8);
    (**(code **)*plVar1)(plVar1);
    (**(code **)(**(long **)(this + 0x28) + 0x78))(*(long **)(this + 0x28),plVar1);
  }
  return;
}

