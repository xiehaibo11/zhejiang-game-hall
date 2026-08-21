
undefined8
FUN_00adaf80(undefined8 *param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  ushort *addr;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ushort *puVar7;
  
  if ((param_3 == 0) && (param_4 != 0)) {
LAB_00adafbc:
                    /* try { // try from 00adafbc to 00bdafcb has its CatchHandler @ 00adb1d4 */
    uVar2 = 0;
  }
  else {
    bVar1 = 1;
    if (((0x23 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x80065fc21U) == 0)) &&
       ((param_2 != 0x3374 && (param_2 != 0xff01)))) {
      bVar1 = 0;
    }
    uVar2 = 0;
    if ((param_2 >> 0x10 == 0) && (!(bool)(param_2 != 0x12 & bVar1))) {
      uVar4 = param_1[1];
      if (uVar4 == 0) {
                    /* try { // try from 00adb074 to 00bdb07b has its CatchHandler @ 00adb17c */
        addr = (ushort *)*param_1;
      }
      else {
        addr = (ushort *)*param_1;
        uVar6 = 0;
        puVar7 = addr;
        do {
          if (*puVar7 == param_2) {
                    /* try { // try from 00adb07c to 00bdb09f has its CatchHandler @ 00adae18 */
            if (puVar7 != (ushort *)0x0) goto LAB_00adafbc;
            break;
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 0x18;
        } while (uVar6 < uVar4);
      }
      pvVar3 = CRYPTO_realloc(addr,(int)uVar4 * 0x30 + 0x30,"ssl/t1_ext.c",0xb6);
      if (pvVar3 == (void *)0x0) {
        CRYPTO_free((void *)*param_1);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
                    /* try { // try from 00adb0a0 to 00bdb0b7 has its CatchHandler @ 00adb18c */
        *param_1 = pvVar3;
        puVar5 = (undefined8 *)((long)pvVar3 + param_1[1] * 0x30);
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[1] = param_3;
        puVar5[2] = param_4;
        *(short *)puVar5 = (short)param_2;
        puVar5[3] = param_5;
        puVar5[4] = param_6;
        puVar5[5] = param_7;
        uVar2 = 1;
        param_1[1] = param_1[1] + 1;
      }
    }
  }
  return uVar2;
}

