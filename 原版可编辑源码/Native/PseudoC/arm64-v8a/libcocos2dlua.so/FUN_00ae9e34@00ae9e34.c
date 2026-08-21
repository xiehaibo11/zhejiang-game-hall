
undefined8
FUN_00ae9e34(undefined8 *param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
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
  
                    /* try { // try from 00ae9e48 to 00be9e53 has its CatchHandler @ 00aea120 */
                    /* try { // try from 00ae9e64 to 00be9e6f has its CatchHandler @ 00aea0ec */
  if ((param_3 == 0) && (param_4 != 0)) {
LAB_00ae9e70:
    uVar2 = 0;
  }
  else {
    bVar1 = 1;
                    /* try { // try from 00ae9f14 to 00be9f7f has its CatchHandler @ 00aea108 */
    if (((0x23 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x80065fc21U) == 0)) &&
       ((param_2 != 0x3374 && (param_2 != 0xff01)))) {
      bVar1 = 0;
    }
    uVar2 = 0;
    if ((param_2 >> 0x10 == 0) && (!(bool)(param_2 != 0x12 & bVar1))) {
      uVar4 = param_1[1];
                    /* try { // try from 00ae9ed8 to 00be9f03 has its CatchHandler @ 00aea110 */
      if (uVar4 == 0) {
        addr = (ushort *)*param_1;
      }
      else {
        addr = (ushort *)*param_1;
        uVar6 = 0;
        puVar7 = addr;
        do {
          if (*puVar7 == param_2) {
            if (puVar7 != (ushort *)0x0) goto LAB_00ae9e70;
            break;
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 0x18;
        } while (uVar6 < uVar4);
      }
      pvVar3 = CRYPTO_realloc(addr,(int)uVar4 * 0x30 + 0x30,"ssl/t1_ext.c",0xb6);
      if (pvVar3 == (void *)0x0) {
                    /* try { // try from 00ae9f9c to 00be9fa7 has its CatchHandler @ 00aea0e4 */
                    /* try { // try from 00ae9fa8 to 00be9fb3 has its CatchHandler @ 00aea108 */
        CRYPTO_free((void *)*param_1);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
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

