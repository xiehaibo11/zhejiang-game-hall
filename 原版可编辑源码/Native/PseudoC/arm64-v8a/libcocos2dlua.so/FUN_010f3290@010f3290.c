
void FUN_010f3290(long *param_1,char param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  
  lVar9 = param_1[0x46];
  FUN_010f2070();
  puVar3 = (undefined8 *)param_1[5];
  puVar6 = (undefined1 *)*puVar3;
  *puVar3 = puVar6 + 1;
  *puVar6 = 0xff;
  lVar7 = puVar3[1];
  puVar3[1] = lVar7 + -1;
  if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  plVar4 = (long *)param_1[5];
  pcVar8 = (char *)*plVar4;
  *plVar4 = (long)(pcVar8 + 1);
  *pcVar8 = param_2 + -0x30;
  lVar7 = plVar4[1];
  plVar4[1] = lVar7 + -1;
  if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)plVar4[3])(param_1), iVar2 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x174)) {
    lVar7 = 0;
    do {
      lVar5 = param_1[lVar7 + 0x2f];
                    /* catch() { ... } // from try @ 010f33f4 with catch @ 010f33a4 */
      if ((*(int *)((long)param_1 + 0x1cc) == 0) && (*(int *)((long)param_1 + 0x1d4) == 0)) {
        lVar1 = lVar9 + lVar7 * 4;
        puVar3 = *(undefined8 **)(lVar9 + (long)*(int *)(lVar5 + 0x14) * 8 + 0x68);
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 0x50) = 0;
        iVar2 = (int)param_1[0x3a];
      }
      else {
        iVar2 = (int)param_1[0x3a];
      }
      if (iVar2 != 0) {
        memset(*(void **)(lVar9 + (long)*(int *)(lVar5 + 0x18) * 8 + 0xe8),0,0x100);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x174));
  }
                    /* try { // try from 010f33ec to 011f33f3 has its CatchHandler @ 010f3438 */
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0x10000;
  *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* try { // try from 010f33f4 to 011f3453 has its CatchHandler @ 010f33a4 */
  *(undefined8 *)(lVar9 + 0x38) = 0xffffffff0000000b;
  return;
}

