
void FUN_011a7d60(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  ssize_t sVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined4 local_70;
  int local_60;
  
  piVar3 = (int *)__errno();
  iVar2 = *piVar3;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  do {
    sVar4 = read(DAT_01781870,local_c8,1);
    if (-1 < (int)sVar4) {
      local_70 = 0;
      local_c0 = 0;
      local_60 = param_1;
      if (DAT_01793650 == (undefined1 *)0x0) goto LAB_011a7ee8;
      puVar6 = (undefined1 *)0x0;
      puVar8 = DAT_01793650;
      goto LAB_011a7dd0;
    }
  } while (*piVar3 == 4);
  goto LAB_011a7f18;
LAB_011a7dd0:
  do {
    iVar7 = *(int *)(puVar8 + 0x68);
    if (iVar7 <= param_1) {
      if (param_1 <= iVar7) {
        if (((((byte)puVar8[0x5b] >> 1 & 1) != 0) || (local_c8 < puVar8)) ||
           (*(long *)(puVar8 + 8) != 0)) goto LAB_011a7e14;
        if (local_c8 <= puVar8) goto LAB_011a7e30;
      }
      puVar1 = (undefined8 *)(puVar8 + 0x78);
      puVar8 = (undefined1 *)*puVar1;
      if ((undefined1 *)*puVar1 == (undefined1 *)0x0) break;
      goto LAB_011a7dd0;
    }
LAB_011a7e14:
    puVar1 = (undefined8 *)(puVar8 + 0x70);
    puVar6 = puVar8;
    puVar8 = (undefined1 *)*puVar1;
  } while ((undefined1 *)*puVar1 != (undefined1 *)0x0);
  if (puVar6 != (undefined1 *)0x0) {
    iVar7 = *(int *)(puVar6 + 0x68);
    puVar8 = puVar6;
LAB_011a7e30:
    if (iVar7 == param_1) {
LAB_011a7e38:
      do {
        if (*(int *)(puVar8 + 0x68) != param_1) break;
        local_d0 = CONCAT44(local_d0._4_4_,param_1);
        local_d8 = puVar8;
        do {
          sVar4 = write(*(int *)(*(long *)(puVar8 + 8) + 0x22c),&local_d8,0x10);
          if ((int)sVar4 != -1) {
            *(int *)(puVar8 + 0x90) = *(int *)(puVar8 + 0x90) + 1;
            puVar6 = *(undefined1 **)(puVar8 + 0x78);
            goto joined_r0x011a7ec0;
          }
        } while (*piVar3 == 4);
        puVar6 = *(undefined1 **)(puVar8 + 0x78);
joined_r0x011a7ec0:
        if (puVar6 == (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)(puVar8 + 0x80);
          if ((puVar5 != (undefined1 *)0x0) &&
             (puVar6 = puVar8, *(undefined1 **)(puVar5 + 0x70) != puVar8)) {
            do {
              puVar8 = puVar5;
              if (puVar6 != *(undefined1 **)(puVar8 + 0x78)) {
                if (puVar8 == (undefined1 *)0x0) goto LAB_011a7ee8;
                goto LAB_011a7e38;
              }
              puVar5 = *(undefined1 **)(puVar8 + 0x80);
              puVar6 = puVar8;
            } while (puVar5 != (undefined1 *)0x0);
          }
        }
        else {
          do {
            puVar5 = puVar6;
            puVar6 = *(undefined1 **)(puVar5 + 0x70);
          } while (*(undefined1 **)(puVar5 + 0x70) != (undefined1 *)0x0);
        }
        puVar8 = puVar5;
      } while (puVar5 != (undefined1 *)0x0);
    }
  }
LAB_011a7ee8:
  local_c8[0] = 0x2a;
  do {
    sVar4 = write(DAT_01781874,local_c8,1);
    if (-1 < (int)sVar4) break;
  } while (*piVar3 == 4);
LAB_011a7f18:
  *piVar3 = iVar2;
  return;
}

