
/* btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy*, btDispatcher*,
   btBroadphaseProxy*) */

void btGhostObject::removeOverlappingObjectInternal
               (btBroadphaseProxy *param_1,btDispatcher *param_2,btBroadphaseProxy *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 300);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x138) + lVar2 * 8) == *(long *)param_2) {
        if (iVar1 <= (int)lVar2) {
          return;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar2 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x138) + (long)(iVar1 + -1) * 8);
        *(int *)(param_1 + 300) = iVar1 + -1;
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

