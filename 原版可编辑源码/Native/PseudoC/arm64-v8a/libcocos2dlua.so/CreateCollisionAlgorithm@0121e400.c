
/* btSphereSphereCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btSphereSphereCollisionAlgorithm * __thiscall
btSphereSphereCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btSphereSphereCollisionAlgorithm *this_00;
  
  this_00 = (btSphereSphereCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x20);
  btSphereSphereCollisionAlgorithm(this_00,(btPersistentManifold *)0x0,param_1,param_2,param_3);
  return this_00;
}

