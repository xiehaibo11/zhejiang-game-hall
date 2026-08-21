
void FUN_00c0e418(undefined8 *param_1,uint param_2)

{
  undefined1 *puVar1;
  
  if ((param_2 >> 0x18 & 1) != 0) {
    puVar1 = (undefined1 *)*param_1;
    if (puVar1 < (undefined1 *)((long)param_1 + 0x31)) {
      *(undefined4 *)((long)param_1 + 0x24) = 0;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        puVar1 = puVar1 + -1;
        *puVar1 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      puVar1[-2] = 0x6c;
      puVar1[-6] = 0x6c;
      puVar1[-3] = 0x69;
      puVar1[-4] = 0x74;
      puVar1[-5] = 0x61;
      puVar1[-1] = 0x65;
      puVar1[-7] = 0x6f;
      puVar1[-8] = 0x76;
      *param_1 = puVar1 + -8;
    }
  }
  if ((param_2 >> 0x19 & 1) != 0) {
    puVar1 = (undefined1 *)*param_1;
    if ((undefined1 *)((long)param_1 + 0x2e) <= puVar1) {
      if (*(int *)(param_1 + 4) != 0) {
        puVar1 = puVar1 + -1;
        *puVar1 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      puVar1[-1] = 0x74;
      puVar1[-2] = 0x73;
      puVar1[-3] = 0x6e;
      puVar1[-4] = 0x6f;
      puVar1[-5] = 99;
      *param_1 = puVar1 + -5;
      return;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    return;
  }
  return;
}

