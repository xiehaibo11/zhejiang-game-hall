
/* btCollisionWorld::contactTest(btCollisionObject*, btCollisionWorld::ContactResultCallback&) */

void __thiscall
btCollisionWorld::contactTest
          (btCollisionWorld *this,btCollisionObject *param_1,ContactResultCallback *param_2)

{
  undefined **local_70;
  btCollisionObject *pbStack_68;
  btCollisionWorld *local_60;
  ContactResultCallback *pCStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),param_1 + 8,auStack_40,auStack_50);
  local_70 = &PTR__btBroadphaseAabbCallback_01731e48;
  pbStack_68 = param_1;
  local_60 = this;
  pCStack_58 = param_2;
  (**(code **)(**(long **)(this + 0x60) + 0x38))
            (*(long **)(this + 0x60),auStack_40,auStack_50,&local_70);
  return;
}

