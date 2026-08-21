
/* btClosestNotMeConvexResultCallback::needsCollision(btBroadphaseProxy*) const */

undefined8 __thiscall
btClosestNotMeConvexResultCallback::needsCollision
          (btClosestNotMeConvexResultCallback *this,btBroadphaseProxy *param_1)

{
  undefined8 uVar1;
  
  if (((*(long *)param_1 != *(long *)(this + 0x58)) &&
      ((*(ushort *)(this + 0xe) & *(ushort *)(param_1 + 8)) != 0)) &&
     ((*(ushort *)(param_1 + 10) & *(ushort *)(this + 0xc)) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x011cdd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x70) + 0x38))();
    return uVar1;
  }
  return 0;
}

