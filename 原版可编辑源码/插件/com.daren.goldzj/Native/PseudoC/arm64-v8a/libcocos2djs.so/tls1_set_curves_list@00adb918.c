
undefined4 tls1_set_curves_list(undefined8 *param_1,long *param_2,char *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ptr;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong local_b8;
  int local_b0 [28];
  
                    /* try { // try from 00adb94c to 00bdb95b has its CatchHandler @ 00adb990 */
  local_b8 = 0;
  iVar2 = CONF_parse_list(param_3,0x3a,1,FUN_00adba50,&local_b8);
  uVar1 = local_b8;
                    /* try { // try from 00adb95c to 00bdb9ab has its CatchHandler @ 00adb900 */
  uVar3 = 0;
  if (iVar2 != 0) {
    if (param_1 != (undefined8 *)0x0) {
      lVar10 = local_b8 << 1;
      ptr = CRYPTO_malloc((int)lVar10,"ssl/t1_lib.c",0x1b4);
      if (ptr == (undefined1 *)0x0) {
        return 0;
      }
      if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 00adb94c with catch @ 00adb990 */
        uVar4 = 0;
        uVar5 = 0;
        puVar6 = ptr;
        do {
                    /* catch() { ... } // from try @ 00adba04 with catch @ 00adb9ac */
          uVar7 = 0;
          piVar9 = &DAT_018a5170;
          do {
            if (0x1c < uVar7) goto LAB_00adba20;
            iVar2 = *piVar9;
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 3;
          } while (iVar2 != local_b0[uVar5]);
          if (((int)uVar7 == 0) || (uVar8 = 1L << (uVar7 & 0x3f), (uVar8 & uVar4) != 0)) {
LAB_00adba20:
            CRYPTO_free(ptr);
            return 0;
          }
          uVar4 = uVar8 | uVar4;
          uVar5 = uVar5 + 1;
          puVar6[1] = (char)uVar7;
          *puVar6 = (char)(uVar7 >> 8);
                    /* try { // try from 00adb9f4 to 00bdba03 has its CatchHandler @ 00adba38 */
          puVar6 = puVar6 + 2;
        } while (uVar5 < uVar1);
      }
                    /* try { // try from 00adba04 to 00bdba53 has its CatchHandler @ 00adb9ac */
      CRYPTO_free((void *)*param_1);
      *param_1 = ptr;
      *param_2 = lVar10;
    }
    uVar3 = 1;
  }
                    /* catch() { ... } // from try @ 00adb9f4 with catch @ 00adba38 */
  return uVar3;
}

