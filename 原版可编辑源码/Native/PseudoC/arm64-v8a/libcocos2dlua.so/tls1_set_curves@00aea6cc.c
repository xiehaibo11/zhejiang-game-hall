
undefined8 tls1_set_curves(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined1 *ptr;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  
  ptr = CRYPTO_malloc((int)(param_4 << 1),"ssl/t1_lib.c",0x1b4);
  uVar2 = 0;
  if (ptr != (undefined1 *)0x0) {
    if (param_4 != 0) {
      uVar3 = 0;
      uVar4 = 0;
      puVar5 = ptr;
      do {
        uVar6 = 0;
        piVar8 = &DAT_013d35f0;
        do {
          if (0x1c < uVar6) goto LAB_00aea7a0;
          iVar1 = *piVar8;
          uVar6 = uVar6 + 1;
                    /* try { // try from 00aea748 to 00bea863 has its CatchHandler @ 00aea8e8 */
          piVar8 = piVar8 + 3;
        } while (iVar1 != *(int *)(param_3 + uVar4 * 4));
        if (((int)uVar6 == 0) || (uVar7 = 1L << (uVar6 & 0x3f), (uVar7 & uVar3) != 0)) {
LAB_00aea7a0:
          CRYPTO_free(ptr);
          return 0;
        }
        uVar3 = uVar7 | uVar3;
        uVar4 = uVar4 + 1;
        puVar5[1] = (char)uVar6;
        *puVar5 = (char)(uVar6 >> 8);
        puVar5 = puVar5 + 2;
      } while (uVar4 < param_4);
    }
    CRYPTO_free((void *)*param_1);
    uVar2 = 1;
    *param_1 = ptr;
    *param_2 = param_4 << 1;
  }
  return uVar2;
}

