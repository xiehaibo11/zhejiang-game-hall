
undefined8 OPENSSL_LH_retrieve(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar2 = (*(code *)param_1[2])(param_2);
  uVar4 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar2 / uVar4;
  }
  uVar4 = uVar2 - uVar5 * uVar4;
  param_1[0xc] = param_1[0xc] + 1;
  if (uVar4 < *(uint *)(param_1 + 4)) {
    uVar5 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = uVar2 / uVar5;
    }
    uVar4 = uVar2 - uVar4 * uVar5;
  }
  puVar6 = (undefined8 *)(*param_1 + ((long)(uVar4 << 0x20) >> 0x1d));
  puVar7 = (undefined8 *)*puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    pcVar8 = (code *)param_1[1];
    do {
      param_1[0x14] = param_1[0x14] + 1;
      if (puVar7[2] == uVar2) {
        param_1[0xd] = param_1[0xd] + 1;
        iVar1 = (*pcVar8)(*puVar7,param_2);
        if (iVar1 == 0) {
          if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
            uVar3 = *(undefined8 *)*puVar6;
            param_1 = param_1 + 0x12;
            goto LAB_00b3d730;
          }
          break;
        }
      }
      puVar6 = puVar7 + 1;
      puVar7 = (undefined8 *)*puVar6;
    } while (puVar7 != (undefined8 *)0x0);
  }
  uVar3 = 0;
  param_1 = param_1 + 0x13;
LAB_00b3d730:
  *param_1 = *param_1 + 1;
  return uVar3;
}

