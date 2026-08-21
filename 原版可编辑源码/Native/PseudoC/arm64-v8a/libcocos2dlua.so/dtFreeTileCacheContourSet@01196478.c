
/* dtFreeTileCacheContourSet(dtTileCacheAlloc*, dtTileCacheContourSet*) */

void dtFreeTileCacheContourSet(dtTileCacheAlloc *param_1,dtTileCacheContourSet *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != (dtTileCacheContourSet *)0x0) {
    if (0 < *(int *)param_2) {
      lVar1 = 0;
      lVar2 = 8;
      do {
        (**(code **)(*(long *)param_1 + 0x20))
                  (param_1,*(undefined8 *)(*(long *)(param_2 + 8) + lVar2));
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x18;
      } while (lVar1 < *(int *)param_2);
    }
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x01196504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2);
    return;
  }
  return;
}

