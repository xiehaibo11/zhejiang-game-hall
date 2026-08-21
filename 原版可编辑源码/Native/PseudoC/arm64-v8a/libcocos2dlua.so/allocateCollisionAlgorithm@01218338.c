
/* btCollisionDispatcher::allocateCollisionAlgorithm(int) */

void __thiscall
btCollisionDispatcher::allocateCollisionAlgorithm(btCollisionDispatcher *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x68);
  if (*(int *)(lVar1 + 8) != 0) {
    uVar2 = **(undefined8 **)(lVar1 + 0x10);
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    return;
  }
  btAlignedAllocInternal((long)param_1,0x10);
  return;
}

