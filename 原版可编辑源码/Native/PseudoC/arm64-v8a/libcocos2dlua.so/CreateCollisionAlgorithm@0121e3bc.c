
/* btEmptyAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btEmptyAlgorithm *
btEmptyAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (btCollisionAlgorithmConstructionInfo *param_1,btCollisionObjectWrapper *param_2,
          btCollisionObjectWrapper *param_3)

{
  btEmptyAlgorithm *this;
  
  this = (btEmptyAlgorithm *)(**(code **)(**(long **)param_2 + 0x70))(*(long **)param_2,0x10);
  btEmptyAlgorithm(this,(btCollisionAlgorithmConstructionInfo *)param_2);
  return this;
}

