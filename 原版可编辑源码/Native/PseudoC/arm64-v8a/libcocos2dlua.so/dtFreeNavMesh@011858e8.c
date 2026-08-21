
/* dtFreeNavMesh(dtNavMesh*) */

void dtFreeNavMesh(dtNavMesh *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != (dtNavMesh *)0x0) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (0 < iVar2) {
      lVar1 = *(long *)(param_1 + 0x50);
      lVar3 = 0;
      lVar4 = 0;
      do {
        if ((*(byte *)(lVar1 + lVar3 + 0x5c) & 1) != 0) {
          dtFree(*(void **)(lVar1 + lVar3 + 0x50));
          lVar1 = *(long *)(param_1 + 0x50);
          *(undefined8 *)(lVar1 + lVar3 + 0x50) = 0;
          *(undefined4 *)(lVar1 + lVar3 + 0x58) = 0;
          iVar2 = *(int *)(param_1 + 0x30);
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x68;
      } while (lVar4 < iVar2);
    }
    dtFree(*(void **)(param_1 + 0x40));
    dtFree(*(void **)(param_1 + 0x50));
    dtFree(param_1);
    return;
  }
  return;
}

