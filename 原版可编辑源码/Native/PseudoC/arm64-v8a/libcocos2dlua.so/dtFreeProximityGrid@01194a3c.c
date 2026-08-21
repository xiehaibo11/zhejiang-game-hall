
/* dtFreeProximityGrid(dtProximityGrid*) */

void dtFreeProximityGrid(dtProximityGrid *param_1)

{
  if (param_1 != (dtProximityGrid *)0x0) {
    dtFree(*(void **)(param_1 + 0x18));
    dtFree(*(void **)(param_1 + 8));
    dtFree(param_1);
    return;
  }
  return;
}

