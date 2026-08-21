
/* btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btCompoundCollisionAlgorithm * __thiscall
btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm
          (SwappedCreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btCompoundCollisionAlgorithm *this_00;
  
  this_00 = (btCompoundCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x48);
  btCompoundCollisionAlgorithm(this_00,param_1,param_2,param_3,true);
  return this_00;
}

