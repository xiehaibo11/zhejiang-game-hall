
/* InplaceSolverIslandCallback::processConstraints() */

void __thiscall InplaceSolverIslandCallback::processConstraints(InplaceSolverIslandCallback *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(int *)(this + 0x3c) == 0) {
    uVar3 = 0;
    iVar1 = *(int *)(this + 0x5c);
  }
  else {
    uVar3 = *(undefined8 *)(this + 0x48);
    iVar1 = *(int *)(this + 0x5c);
  }
  if (iVar1 == 0) {
    uVar4 = 0;
    iVar2 = *(int *)(this + 0x7c);
  }
  else {
    uVar4 = *(undefined8 *)(this + 0x68);
    iVar2 = *(int *)(this + 0x7c);
  }
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(this + 0x88);
  }
  (**(code **)(**(long **)(this + 0x10) + 0x18))
            (*(long **)(this + 0x10),uVar3,*(int *)(this + 0x3c),uVar4,iVar1,uVar5,iVar2,
             *(undefined8 *)(this + 8),*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  lVar6 = (long)*(int *)(this + 0x3c);
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
      *(undefined8 *)(*(long *)(this + 0x48) + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  lVar6 = (long)*(int *)(this + 0x5c);
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
      *(undefined8 *)(*(long *)(this + 0x68) + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  lVar6 = (long)*(int *)(this + 0x7c);
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
      *(undefined8 *)(*(long *)(this + 0x88) + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}

