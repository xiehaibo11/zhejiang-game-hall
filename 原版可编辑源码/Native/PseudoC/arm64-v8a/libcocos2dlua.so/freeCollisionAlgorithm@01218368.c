
/* btCollisionDispatcher::freeCollisionAlgorithm(void*) */

void __thiscall
btCollisionDispatcher::freeCollisionAlgorithm(btCollisionDispatcher *this,void *param_1)

{
  int *piVar1;
  
  if (param_1 != (void *)0x0) {
    piVar1 = *(int **)(this + 0x68);
    if ((*(void **)(piVar1 + 6) <= param_1) &&
       (param_1 < (void *)((long)*(void **)(piVar1 + 6) + (long)*piVar1 * (long)piVar1[1]))) {
      *(undefined8 *)param_1 = *(undefined8 *)(piVar1 + 4);
      *(void **)(piVar1 + 4) = param_1;
      piVar1[2] = piVar1[2] + 1;
      return;
    }
  }
  btAlignedFreeInternal(param_1);
  return;
}

