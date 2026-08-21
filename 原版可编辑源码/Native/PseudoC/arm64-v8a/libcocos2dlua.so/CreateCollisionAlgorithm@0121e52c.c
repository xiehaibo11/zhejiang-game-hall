
/* btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btConvexPlaneCollisionAlgorithm * __thiscall
btConvexPlaneCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btConvexPlaneCollisionAlgorithm *this_00;
  
  this_00 = (btConvexPlaneCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x30);
  btConvexPlaneCollisionAlgorithm
            (this_00,(btPersistentManifold *)0x0,param_1,param_2,param_3,this[8] != (CreateFunc)0x0,
             *(int *)(this + 0xc),*(int *)(this + 0x10));
  return this_00;
}

