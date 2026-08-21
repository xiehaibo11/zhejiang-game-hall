
/* btConvexConcaveCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btConvexConcaveCollisionAlgorithm * __thiscall
btConvexConcaveCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btConvexConcaveCollisionAlgorithm *this_00;
  
  this_00 = (btConvexConcaveCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x78);
  btConvexConcaveCollisionAlgorithm(this_00,param_1,param_2,param_3,false);
  return this_00;
}

