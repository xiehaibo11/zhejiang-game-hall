
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* dtAllocObstacleAvoidanceQuery() */

void dtAllocObstacleAvoidanceQuery(void)

{
  long lVar1;
  
  lVar1 = dtAlloc(0x50,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x48) = 0;
  }
  return;
}

