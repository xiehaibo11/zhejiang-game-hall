
void FUN_010acdc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* catch() { ... } // from try @ 010accfc with catch @ 010acdc8 */
                    /* catch() { ... } // from try @ 010acd2c with catch @ 010acdcc */
                    /* catch() { ... } // from try @ 010accd4 with catch @ 010acdd0 */
  iVar2 = *(int *)((long)param_1 + 0x24);
  puVar1 = (undefined8 *)param_1[5];
  if (iVar2 != 0) {
    do {
      ft_mem_free(param_2,puVar1[1]);
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 3;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)param_1[5];
  }
  ft_mem_free(param_2,puVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  puVar1 = (undefined8 *)param_1[3];
                    /* catch() { ... } // from try @ 010ace80 with catch @ 010ace30 */
  if (iVar2 != 0) {
    do {
      ft_mem_free(param_2,puVar1[1]);
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 3;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)param_1[3];
  }
  ft_mem_free(param_2,puVar1);
  param_1[2] = 0;
  param_1[3] = 0;
  ft_mem_free(param_2,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 010ace74 to 011ace7f has its CatchHandler @ 010ace94 */
                    /* try { // try from 010ace80 to 011acf57 has its CatchHandler @ 010ace30 */
  return;
}

