
/* btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy*, btDispatcher*,
   btBroadphaseProxy*) */

void __thiscall
btPairCachingGhostObject::removeOverlappingObjectInternal
          (btPairCachingGhostObject *this,btBroadphaseProxy *param_1,btDispatcher *param_2,
          btBroadphaseProxy *param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == (btBroadphaseProxy *)0x0) {
    param_3 = *(btBroadphaseProxy **)(this + 0xc0);
  }
  iVar1 = *(int *)(this + 300);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x138) + lVar2 * 8) == *(long *)param_1) {
        if (iVar1 <= (int)lVar2) {
          return;
        }
        *(undefined8 *)(*(long *)(this + 0x138) + lVar2 * 8) =
             *(undefined8 *)(*(long *)(this + 0x138) + (long)(iVar1 + -1) * 8);
        *(int *)(this + 300) = iVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x0121ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x148) + 0x18))
                  (*(long **)(this + 0x148),param_3,param_1,param_2);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

