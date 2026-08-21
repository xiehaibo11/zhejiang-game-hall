
void lws_close_reason(long param_1,undefined4 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *(undefined1 *)(param_1 + 0x80) = (char)((uint)param_2 >> 8);
  puVar5 = (undefined1 *)(param_1 + 0x82);
  *(char *)(param_1 + 0x81) = (char)param_2;
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    puVar1 = (undefined1 *)(param_1 + 0xfd);
    puVar4 = (undefined1 *)(param_1 + 0x83);
    puVar2 = puVar1;
    if (puVar1 <= puVar4) {
      puVar2 = puVar4;
    }
    uVar6 = (param_1 - (long)puVar2) + 0x82;
    if (uVar6 <= (ulong)-param_4 && -uVar6 != param_4) {
      uVar6 = -param_4;
    }
    uVar6 = -uVar6;
    if (0x1f < uVar6) {
      puVar2 = (undefined1 *)(param_1 + 0xfdU);
      if ((undefined1 *)(param_1 + 0xfdU) <= puVar4) {
        puVar2 = puVar4;
      }
      uVar10 = param_1 + 0x70 + (0x12 - (long)puVar2);
      if (uVar10 <= (ulong)-param_4 && -uVar10 != param_4) {
        uVar10 = -param_4;
      }
      if (((long)param_3 - uVar10 <= param_1 + 0x82U) ||
         ((undefined1 *)(param_1 + 0x70 + (0x12 - uVar10)) <= param_3)) {
        uVar7 = uVar6 & 0xffffffffffffffe0;
        puVar8 = (undefined8 *)(param_1 + 0x92);
        param_4 = param_4 - uVar7;
        puVar5 = puVar5 + uVar7;
        puVar9 = (undefined8 *)(param_3 + 0x10);
        uVar10 = uVar7;
        do {
          puVar3 = puVar9 + -1;
          uVar11 = puVar9[-2];
          uVar13 = puVar9[1];
          uVar12 = *puVar9;
          uVar10 = uVar10 - 0x20;
          puVar9 = puVar9 + 4;
          puVar8[-1] = *puVar3;
          puVar8[-2] = uVar11;
          puVar8[1] = uVar13;
          *puVar8 = uVar12;
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
        param_3 = param_3 + uVar7;
        if (uVar7 == uVar6) goto LAB_01044034;
      }
    }
    param_4 = -param_4;
    puVar4 = puVar5;
    do {
      param_4 = param_4 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = *param_3;
      if (puVar1 <= puVar5) break;
      puVar4 = puVar5;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
LAB_01044034:
  *(char *)(param_1 + 0x102) = (char)puVar5 - (char)(undefined1 *)(param_1 + 0x80);
  return;
}

