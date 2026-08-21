
/* InplaceSolverIslandCallback::setup(btContactSolverInfo*, btTypedConstraint**, int, btIDebugDraw*)
    */

void __thiscall
InplaceSolverIslandCallback::setup
          (InplaceSolverIslandCallback *this,btContactSolverInfo *param_1,
          btTypedConstraint **param_2,int param_3,btIDebugDraw *param_4)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(this + 0x3c);
  *(btContactSolverInfo **)(this + 8) = param_1;
  *(btTypedConstraint ***)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = param_3;
  *(btIDebugDraw **)(this + 0x28) = param_4;
  if (*(int *)(this + 0x3c) < 0) {
    if (*(int *)(this + 0x40) < 0) {
      if (*(void **)(this + 0x48) != (void *)0x0) {
        if (this[0x50] != (InplaceSolverIslandCallback)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x48));
        }
        *(undefined8 *)(this + 0x48) = 0;
      }
      *(undefined8 *)(this + 0x48) = 0;
      this[0x50] = (InplaceSolverIslandCallback)0x1;
      *(undefined4 *)(this + 0x40) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x48) + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0);
  }
  lVar1 = (long)*(int *)(this + 0x5c);
  *(undefined4 *)(this + 0x3c) = 0;
  if (*(int *)(this + 0x5c) < 0) {
    if (*(int *)(this + 0x60) < 0) {
      if (*(void **)(this + 0x68) != (void *)0x0) {
        if (this[0x70] != (InplaceSolverIslandCallback)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x68));
        }
        *(undefined8 *)(this + 0x68) = 0;
      }
      *(undefined8 *)(this + 0x68) = 0;
      this[0x70] = (InplaceSolverIslandCallback)0x1;
      *(undefined4 *)(this + 0x60) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x68) + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0);
  }
  lVar1 = (long)*(int *)(this + 0x7c);
  *(undefined4 *)(this + 0x5c) = 0;
  if (*(int *)(this + 0x7c) < 0) {
    if (*(int *)(this + 0x80) < 0) {
      if (*(void **)(this + 0x88) != (void *)0x0) {
        if (this[0x90] != (InplaceSolverIslandCallback)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x88));
        }
        *(undefined8 *)(this + 0x88) = 0;
      }
      *(undefined8 *)(this + 0x88) = 0;
      this[0x90] = (InplaceSolverIslandCallback)0x1;
      *(undefined4 *)(this + 0x80) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x88) + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}

