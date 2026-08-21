
void FUN_00d5fee4(long param_1,long param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x7c) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_00d5fee4(param_1);
    }
    *(undefined4 *)(param_2 + 0x7c) = 1;
    iVar3 = *(int *)(param_1 + 0x98);
    if (iVar3 == *(int *)(param_1 + 0x9c)) {
      *(int *)(param_1 + 0x9c) = iVar3 << 1;
      pvVar2 = realloc(*(void **)(param_1 + 0xa0),(long)iVar3 << 5);
      iVar3 = *(int *)(param_1 + 0x98);
      *(void **)(param_1 + 0xa0) = pvVar2;
    }
    else {
      pvVar2 = *(void **)(param_1 + 0xa0);
    }
    puVar1 = (undefined4 *)((long)pvVar2 + (long)iVar3 * 0x10);
    *puVar1 = 0;
                    /* try { // try from 00d5ff58 to 00e5ff5f has its CatchHandler @ 00d60040 */
    *(long *)(puVar1 + 2) = param_2;
    *(int *)(param_1 + 0x98) = iVar3 + 1;
  }
                    /* try { // try from 00d5ff60 to 00e5ff6f has its CatchHandler @ 00d60030 */
  return;
}

