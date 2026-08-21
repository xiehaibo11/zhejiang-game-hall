
void png_do_strip_channel(long param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  puVar1 = param_2 + lVar4;
  if (*(char *)(param_1 + 0x12) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      puVar2 = param_2 + 6;
      puVar7 = param_2 + 8;
      if (param_3 != 0) {
        puVar2 = param_2;
        puVar7 = param_2 + 2;
      }
      if (puVar7 < puVar1) {
        lVar4 = (lVar4 + -1) - (long)puVar7;
        puVar6 = puVar2;
        do {
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
          puVar6[3] = puVar7[3];
          puVar6[4] = puVar7[4];
          puVar8 = puVar7 + 5;
          puVar7 = puVar7 + 8;
          puVar6[5] = *puVar8;
          puVar6 = puVar6 + 6;
        } while (puVar7 < puVar1);
        puVar2 = puVar2 + ((ulong)(param_2 + lVar4) >> 3) * 6 + 6;
      }
      uVar3 = 0x30;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      puVar7 = param_2 + 4;
      puVar2 = param_2 + 3;
      if (param_3 != 0) {
        puVar7 = param_2 + 1;
        puVar2 = param_2;
      }
      if (puVar7 < puVar1) {
        lVar4 = (lVar4 + -1) - (long)puVar7;
        puVar6 = puVar2;
        do {
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar8 = puVar7 + 2;
          puVar7 = puVar7 + 4;
          puVar6[2] = *puVar8;
          puVar6 = puVar6 + 3;
        } while (puVar7 < puVar1);
        puVar2 = puVar2 + ((ulong)(param_2 + lVar4) >> 2) * 3 + 3;
      }
      uVar3 = 0x18;
    }
    *(undefined1 *)(param_1 + 0x13) = uVar3;
    *(undefined1 *)(param_1 + 0x12) = 3;
    if (*(char *)(param_1 + 0x10) == '\x06') {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\x02') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\x10') {
      puVar2 = param_2 + 2;
      puVar7 = param_2 + 4;
      if (param_3 != 0) {
        puVar2 = param_2;
        puVar7 = param_2 + 2;
      }
      if (puVar7 < puVar1) {
        lVar4 = (lVar4 + -1) - (long)puVar7;
        puVar6 = puVar2;
        do {
          *puVar6 = *puVar7;
          puVar8 = puVar7 + 1;
          puVar7 = puVar7 + 4;
          puVar6[1] = *puVar8;
          puVar6 = puVar6 + 2;
        } while (puVar7 < puVar1);
        puVar2 = puVar2 + ((ulong)(param_2 + lVar4) >> 1 & 0x7ffffffffffffffe) + 2;
      }
      uVar3 = 0x10;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      puVar7 = param_2 + 2;
      if (param_3 == 0) {
        puVar2 = param_2 + 1;
      }
      else {
        puVar7 = param_2 + 1;
        puVar2 = param_2;
      }
      if (puVar7 < puVar1) {
        puVar6 = puVar7;
        puVar8 = puVar2;
        do {
          puVar5 = puVar6 + 2;
          *puVar8 = *puVar6;
          puVar6 = puVar5;
          puVar8 = puVar8 + 1;
        } while (puVar5 < puVar1);
        puVar2 = puVar2 + ((ulong)(param_2 + ((lVar4 + -1) - (long)puVar7)) >> 1) + 1;
      }
      uVar3 = 8;
    }
    *(undefined1 *)(param_1 + 0x13) = uVar3;
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  *(long *)(param_1 + 8) = (long)puVar2 - (long)param_2;
  return;
}

