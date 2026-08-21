
void FUN_010fad24(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[0x4e];
  iVar2 = (**(code **)(param_1[0x4d] + 0x10))();
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
  }
  if (0 < (int)param_1[0x38]) {
    lVar6 = 0;
    do {
      lVar4 = param_1[lVar6 + 0x39];
      if (*(int *)((long)param_1 + 0x13c) == 0) {
LAB_010fada4:
        lVar1 = lVar5 + lVar6 * 4;
        puVar3 = *(undefined8 **)(lVar5 + (long)*(int *)(lVar4 + 0x14) * 8 + 0x50);
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(lVar1 + 0x2c) = 0;
        *(undefined4 *)(lVar1 + 0x3c) = 0;
        if (*(int *)((long)param_1 + 0x13c) == 0) {
          iVar2 = (int)param_1[0x47];
        }
        else {
          iVar2 = *(int *)((long)param_1 + 0x21c);
        }
        if (iVar2 != 0) {
LAB_010fadd8:
          memset(*(void **)(lVar5 + (long)*(int *)(lVar4 + 0x18) * 8 + 0xd0),0,0x100);
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x21c) != 0) goto LAB_010fadd8;
        if (*(int *)((long)param_1 + 0x224) == 0) goto LAB_010fada4;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x38]);
  }
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined4 *)(lVar5 + 0x28) = 0xfffffff0;
  *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}

