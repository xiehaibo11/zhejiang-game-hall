
/* btSphereTriangleCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btSphereTriangleCollisionAlgorithm * __thiscall
btSphereTriangleCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  btSphereTriangleCollisionAlgorithm *this_00;
  
  this_00 = (btSphereTriangleCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x28);
  btSphereTriangleCollisionAlgorithm
            (this_00,*(btPersistentManifold **)(param_1 + 8),param_1,param_2,param_3,(bool)this[8]);
  return this_00;
}

