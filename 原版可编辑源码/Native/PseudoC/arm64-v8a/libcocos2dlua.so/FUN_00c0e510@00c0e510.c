
void FUN_00c0e510(undefined8 *param_1,long param_2,uint param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    FUN_00c0e3ac(param_1,lVar6 + 0x18,*(undefined4 *)(lVar6 + 0x10));
    goto LAB_00c0e5a8;
  }
  if (*(int *)(param_1 + 4) == 0) {
LAB_00c0e534:
    pcVar7 = (char *)*param_1;
  }
  else {
    pcVar7 = (char *)*param_1;
    if (param_1 + 5 < pcVar7) {
      *param_1 = pcVar7 + -1;
      pcVar7[-1] = ' ';
      goto LAB_00c0e534;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (pcVar7 < (char *)((long)param_1 + 0x33)) {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  else {
    uVar5 = (int)(param_2 - *(long *)param_1[2] >> 3) * -0x55555555;
    do {
      uVar1 = uVar5 / 10;
      cVar2 = (char)uVar5;
      uVar5 = uVar5 / 10;
      pcVar7 = pcVar7 + -1;
      *pcVar7 = (cVar2 - ((char)uVar1 * '\b' + (char)(uVar1 << 1))) + '0';
    } while (uVar5 != 0);
    *param_1 = pcVar7;
  }
  *(undefined4 *)(param_1 + 4) = 1;
LAB_00c0e5a8:
  sVar3 = strlen(param_4);
  FUN_00c0e3ac(param_1,param_4,sVar3);
  if ((param_3 >> 0x18 & 1) != 0) {
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 < (undefined1 *)((long)param_1 + 0x31)) {
      *(undefined4 *)((long)param_1 + 0x24) = 0;
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        puVar4 = puVar4 + -1;
        *puVar4 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      puVar4[-2] = 0x6c;
      puVar4[-6] = 0x6c;
      puVar4[-3] = 0x69;
      puVar4[-4] = 0x74;
      puVar4[-5] = 0x61;
      puVar4[-1] = 0x65;
      puVar4[-7] = 0x6f;
      puVar4[-8] = 0x76;
      *param_1 = puVar4 + -8;
    }
  }
  if ((param_3 >> 0x19 & 1) != 0) {
    puVar4 = (undefined1 *)*param_1;
    if ((undefined1 *)((long)param_1 + 0x2e) <= puVar4) {
      if (*(int *)(param_1 + 4) != 0) {
        puVar4 = puVar4 + -1;
        *puVar4 = 0x20;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      puVar4[-1] = 0x74;
      puVar4[-2] = 0x73;
      puVar4[-3] = 0x6e;
      puVar4[-4] = 0x6f;
      puVar4[-5] = 99;
      *param_1 = puVar4 + -5;
      return;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    return;
  }
  return;
}

