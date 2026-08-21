
/* btCollisionDispatcher::registerCollisionCreateFunc(int, int, btCollisionAlgorithmCreateFunc*) */

void __thiscall
btCollisionDispatcher::registerCollisionCreateFunc
          (btCollisionDispatcher *this,int param_1,int param_2,
          btCollisionAlgorithmCreateFunc *param_3)

{
  *(btCollisionAlgorithmCreateFunc **)(this + (long)param_2 * 8 + (long)param_1 * 0x120 + 0x78) =
       param_3;
  return;
}

