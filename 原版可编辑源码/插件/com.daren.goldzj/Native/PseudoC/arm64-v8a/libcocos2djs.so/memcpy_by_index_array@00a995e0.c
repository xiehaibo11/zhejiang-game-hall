
void memcpy_by_index_array
               (undefined4 *param_1,uint param_2,long param_3,uint param_4,char *param_5,
               undefined8 param_6,long param_7)

{
  undefined2 *puVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  switch(param_6) {
  case 1:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        uVar2 = (ulong)param_2;
        pcVar3 = param_5;
        puVar4 = param_1;
        if (param_2 != 0) {
          do {
            if ((long)*pcVar3 < 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined1 *)(param_3 + *pcVar3);
            }
            *(undefined1 *)puVar4 = uVar5;
            uVar2 = uVar2 - 1;
            pcVar3 = pcVar3 + 1;
            puVar4 = (undefined4 *)((long)puVar4 + 1);
          } while (uVar2 != 0);
          param_1 = (undefined4 *)((long)param_1 + (ulong)(param_2 - 1) + 1);
        }
        param_3 = param_3 + (ulong)param_4;
      } while (param_7 != 0);
    }
    break;
  case 2:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        uVar2 = (ulong)param_2;
        pcVar3 = param_5;
        puVar4 = param_1;
        if (param_2 != 0) {
          do {
            if ((long)*pcVar3 < 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined2 *)(param_3 + (long)*pcVar3 * 2);
            }
            *(undefined2 *)puVar4 = uVar6;
            uVar2 = uVar2 - 1;
            pcVar3 = pcVar3 + 1;
            puVar4 = (undefined4 *)((long)puVar4 + 2);
          } while (uVar2 != 0);
          param_1 = (undefined4 *)((long)param_1 + ((ulong)(param_2 - 1) + 1) * 2);
        }
        param_3 = param_3 + (ulong)param_4 * 2;
      } while (param_7 != 0);
    }
    break;
  case 3:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        uVar2 = (ulong)param_2;
        pcVar3 = param_5;
        puVar4 = param_1;
        if (param_2 != 0) {
          do {
            if ((long)*pcVar3 < 0) {
              *(undefined1 *)((long)puVar4 + 2) = 0;
              *(undefined2 *)puVar4 = 0;
            }
            else {
              puVar1 = (undefined2 *)(param_3 + (long)*pcVar3 * 3);
              uVar6 = *puVar1;
              *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)(puVar1 + 1);
              *(undefined2 *)puVar4 = uVar6;
            }
            uVar2 = uVar2 - 1;
            pcVar3 = pcVar3 + 1;
            puVar4 = (undefined4 *)((long)puVar4 + 3);
          } while (uVar2 != 0);
          param_1 = (undefined4 *)((long)param_1 + ((ulong)(param_2 - 1) + 1) * 3);
        }
        param_3 = param_3 + (ulong)param_4 * 3;
      } while (param_7 != 0);
    }
    break;
  case 4:
    if (param_7 != 0) {
      do {
        param_7 = param_7 + -1;
        uVar2 = (ulong)param_2;
        pcVar3 = param_5;
        puVar4 = param_1;
        if (param_2 != 0) {
          do {
            if ((long)*pcVar3 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(param_3 + (long)*pcVar3 * 4);
            }
            *puVar4 = uVar7;
            uVar2 = uVar2 - 1;
            pcVar3 = pcVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar2 != 0);
          param_1 = param_1 + (ulong)(param_2 - 1) + 1;
        }
        param_3 = param_3 + (ulong)param_4 * 4;
      } while (param_7 != 0);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}

