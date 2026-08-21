
/* btCollisionDispatcher::findAlgorithm(btCollisionObjectWrapper const*, btCollisionObjectWrapper
   const*, btPersistentManifold*) */

void __thiscall
btCollisionDispatcher::findAlgorithm
          (btCollisionDispatcher *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btPersistentManifold *param_3)

{
  btCollisionDispatcher *local_20;
  btPersistentManifold *pbStack_18;
  
  local_20 = this;
  pbStack_18 = param_3;
  (**(code **)(**(long **)(this + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 8 +
                                  (long)*(int *)(*(long *)(param_1 + 8) + 8) * 0x120 + 0x78) + 0x10)
  )(*(long **)(this + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 8 +
                      (long)*(int *)(*(long *)(param_1 + 8) + 8) * 0x120 + 0x78),&local_20,param_1,
    param_2);
  return;
}

