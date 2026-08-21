
/* dtFreeTileCachePolyMesh(dtTileCacheAlloc*, dtTileCachePolyMesh*) */

void dtFreeTileCachePolyMesh(dtTileCacheAlloc *param_1,dtTileCachePolyMesh *param_2)

{
  if (param_2 != (dtTileCachePolyMesh *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x18));
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x20));
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x011965b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2);
    return;
  }
  return;
}

