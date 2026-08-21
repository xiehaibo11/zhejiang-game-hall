
/* btSequentialImpulseConstraintSolver::getOrInitSolverBody(btCollisionObject&, float) */

int __thiscall
btSequentialImpulseConstraintSolver::getOrInitSolverBody
          (btSequentialImpulseConstraintSolver *this,btCollisionObject *param_1,float param_2)

{
  btCollisionObject *pbVar1;
  btSequentialImpulseConstraintSolver *pbVar2;
  int iVar3;
  btSolverBody abStack_138 [248];
  
  iVar3 = *(int *)(param_1 + 0xe8);
  if (iVar3 < 0) {
    pbVar1 = (btCollisionObject *)0x0;
    if ((*(uint *)(param_1 + 0x100) & 2) != 0) {
      pbVar1 = param_1;
    }
    if (((*(uint *)(param_1 + 0x100) >> 1 & 1) == 0) ||
       ((*(float *)(pbVar1 + 0x174) == 0.0 && (((byte)pbVar1[0xe0] >> 1 & 1) == 0)))) {
      iVar3 = *(int *)(this + 300);
      if (iVar3 < 0) {
        *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0xc);
        memset(abStack_138,0,0xf8);
        pbVar2 = (btSequentialImpulseConstraintSolver *)
                 btAlignedObjectArray<btSolverBody>::expand
                           ((btAlignedObjectArray<btSolverBody> *)(this + 8),abStack_138);
        initSolverBody(pbVar2,(btSolverBody *)pbVar2,(btCollisionObject *)0x0,param_2);
        iVar3 = *(int *)(this + 300);
      }
    }
    else {
      iVar3 = *(int *)(this + 0xc);
      memset(abStack_138,0,0xf8);
      pbVar2 = (btSequentialImpulseConstraintSolver *)
               btAlignedObjectArray<btSolverBody>::expand
                         ((btAlignedObjectArray<btSolverBody> *)(this + 8),abStack_138);
      initSolverBody(pbVar2,(btSolverBody *)pbVar2,param_1,param_2);
      *(int *)(param_1 + 0xe8) = iVar3;
    }
  }
  return iVar3;
}

