
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* dtAllocTileCache() */

void dtAllocTileCache(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)dtAlloc(0x390,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x51) = 0;
    *(undefined4 *)((long)puVar1 + 0x38c) = 0;
    puVar1[4] = 0;
    puVar1[0x10] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
  }
  return;
}

