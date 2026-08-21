
int jpeg_read_scanlines(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_24;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
                    /* try { // try from 010e73bc to 011e7413 has its CatchHandler @ 010e7358 */
  if (iVar1 != 0xcd) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x15;
    *(int *)((long)puVar4 + 0x2c) = iVar1;
                    /* catch() { ... } // from try @ 010e7384 with catch @ 010e73dc */
    (*(code *)*puVar4)(param_1);
  }
  uVar2 = *(uint *)((long)param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x15) < uVar2) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = (ulong)*(uint *)(param_1 + 0x15);
      puVar4[2] = (ulong)uVar2;
      (*(code *)*puVar4)(param_1);
    }
    local_24 = 0;
                    /* catch() { ... } // from try @ 010e7450 with catch @ 010e7414
                       catch() { ... } // from try @ 010e749c with catch @ 010e7414 */
    (**(code **)(param_1[0x49] + 8))(param_1,param_2,&local_24,param_3);
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + local_24;
  }
  else {
    lVar3 = *param_1;
                    /* try { // try from 010e744c to 011e744f has its CatchHandler @ 010e749c */
                    /* try { // try from 010e7450 to 011e7493 has its CatchHandler @ 010e7414 */
    *(undefined4 *)(lVar3 + 0x28) = 0x7e;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    local_24 = 0;
  }
  return local_24;
}

