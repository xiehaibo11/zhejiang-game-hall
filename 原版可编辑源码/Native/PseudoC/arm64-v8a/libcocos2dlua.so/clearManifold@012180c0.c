
/* btCollisionDispatcher::clearManifold(btPersistentManifold*) */

btCollisionDispatcher * __thiscall
btCollisionDispatcher::clearManifold(btCollisionDispatcher *this,btPersistentManifold *param_1)

{
  btPersistentManifold *pbVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x318)) {
    lVar2 = 0;
    pbVar1 = param_1 + 8;
    do {
      this = (btCollisionDispatcher *)
             btPersistentManifold::clearUserCache(param_1,(btManifoldPoint *)pbVar1);
      lVar2 = lVar2 + 1;
      pbVar1 = pbVar1 + 0xc0;
    } while (lVar2 < *(int *)(param_1 + 0x318));
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  return this;
}

