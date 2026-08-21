
void FUN_010f1c30(long *param_1,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 010f1b2c with catch @ 010f1c44 */
  lVar3 = param_1[1];
  if (param_2 < 2) {
                    /* catch() { ... } // from try @ 010f1cc8 with catch @ 010f1c74
                       catch() { ... } // from try @ 010f1d24 with catch @ 010f1c74 */
    if (param_2 == 1) {
      for (lVar4 = *(long *)(lVar3 + 0x88); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
        if (*(int *)(lVar4 + 0x2c) != 0) {
          *(undefined4 *)(lVar4 + 0x2c) = 0;
          (**(code **)(lVar4 + 0x48))(param_1,lVar4 + 0x38);
        }
      }
      lVar4 = *(long *)(lVar3 + 0x90);
      *(undefined8 *)(lVar3 + 0x88) = 0;
      for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
        if (*(int *)(lVar4 + 0x2c) != 0) {
                    /* try { // try from 010f1cc0 to 011f1cc7 has its CatchHandler @ 010f1d58 */
                    /* try { // try from 010f1cc8 to 011f1ce3 has its CatchHandler @ 010f1c74 */
          *(undefined4 *)(lVar4 + 0x2c) = 0;
          (**(code **)(lVar4 + 0x48))(param_1,lVar4 + 0x38);
        }
      }
      *(undefined8 *)(lVar3 + 0x90) = 0;
    }
  }
  else {
                    /* catch() { ... } // from try @ 010f1b64 with catch @ 010f1c58 */
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0xf;
    *(uint *)((long)puVar2 + 0x2c) = param_2;
    (*(code *)*puVar2)(param_1);
  }
  lVar4 = lVar3 + (long)(int)param_2 * 8;
  plVar1 = *(long **)(lVar4 + 0x78);
                    /* try { // try from 010f1ce4 to 011f1d23 has its CatchHandler @ 010f1d74 */
  *(undefined8 *)(lVar4 + 0x78) = 0;
  while (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    lVar4 = plVar1[1] + plVar1[2] + 0x18;
    jpeg_free_large(param_1,plVar1,lVar4);
    *(long *)(lVar3 + 0x98) = *(long *)(lVar3 + 0x98) - lVar4;
    plVar1 = (long *)lVar5;
  }
  lVar4 = lVar3 + (long)(int)param_2 * 8;
                    /* try { // try from 010f1d24 to 011f1d87 has its CatchHandler @ 010f1c74 */
  plVar1 = *(long **)(lVar4 + 0x68);
  *(undefined8 *)(lVar4 + 0x68) = 0;
  while (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    lVar4 = plVar1[1] + plVar1[2] + 0x18;
    jpeg_free_small(param_1,plVar1,lVar4);
                    /* catch() { ... } // from try @ 010f1cc0 with catch @ 010f1d58 */
    *(long *)(lVar3 + 0x98) = *(long *)(lVar3 + 0x98) - lVar4;
    plVar1 = (long *)lVar5;
  }
  return;
}

