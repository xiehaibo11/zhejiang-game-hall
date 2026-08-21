
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* dtAllocProximityGrid() */

void dtAllocProximityGrid(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)dtAlloc(0x38,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[8] = 0;
  }
  return;
}

