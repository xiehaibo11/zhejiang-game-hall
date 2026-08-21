
/* btStridingMeshInterface::calculateAabbBruteForce(btVector3&, btVector3&) */

void __thiscall
btStridingMeshInterface::calculateAabbBruteForce
          (btStridingMeshInterface *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_58 = &PTR__btInternalTriangleIndexCallback_01734808;
  local_50 = 0x5d5e0b6b;
  uStack_4c = 0x5d5e0b6b;
  uStack_48 = 0x5d5e0b6b;
  uStack_44 = 0;
  local_40 = 0xdd5e0b6b;
  uStack_3c = 0xdd5e0b6b;
  uStack_38 = 0xdd5e0b6b;
  uStack_34 = 0;
  *(undefined8 *)param_1 = 0xdd5e0b6bdd5e0b6b;
  *(undefined8 *)(param_1 + 8) = 0xdd5e0b6b;
  *(undefined8 *)param_2 = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(param_2 + 8) = 0x5d5e0b6b;
  (**(code **)(*(long *)this + 0x10))(this,&local_58,param_1,param_2);
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_44,uStack_48);
  *(ulong *)param_1 = CONCAT44(uStack_4c,local_50);
  *(ulong *)(param_2 + 8) = CONCAT44(uStack_34,uStack_38);
  *(ulong *)param_2 = CONCAT44(uStack_3c,local_40);
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)&local_58);
  return;
}

