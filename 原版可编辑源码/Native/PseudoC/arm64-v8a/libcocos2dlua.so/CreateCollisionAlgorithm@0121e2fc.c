
/* btCompoundCompoundCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btCompoundCompoundCollisionAlgorithm * __thiscall
btCompoundCompoundCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btCompoundCompoundCollisionAlgorithm *this_00;
  
  this_00 = (btCompoundCompoundCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x50);
  btCompoundCompoundCollisionAlgorithm(this_00,param_1,param_2,param_3,false);
  return this_00;
}

