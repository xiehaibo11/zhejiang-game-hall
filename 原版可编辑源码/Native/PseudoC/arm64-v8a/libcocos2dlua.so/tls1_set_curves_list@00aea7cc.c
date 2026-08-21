
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
  
  local_b8 = 0;
  iVar2 = CONF_parse_list(param_3,0x3a,1,FUN_00aea904,&local_b8);
  uVar1 = local_b8;
  uVar3 = 0;
  if (iVar2 != 0) {
    if (param_1 != (undefined8 *)0x0) {
      lVar10 = local_b8 << 1;
      ptr = CRYPTO_malloc((int)lVar10,"ssl/t1_lib.c",0x1b4);
      if (ptr == (undefined1 *)0x0) {
        return 0;
      }
      if (uVar1 != 0) {
        uVar4 = 0;
        uVar5 = 0;
        puVar6 = ptr;
        do {
                    /* try { // try from 00aea864 to 00bea92b has its CatchHandler @ 00aea5c0 */
          uVar7 = 0;
          piVar9 = &DAT_013d35f0;
          do {
            if (0x1c < uVar7) goto LAB_00aea8d4;
            iVar2 = *piVar9;
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 3;
          } while (iVar2 != local_b0[uVar5]);
          if (((int)uVar7 == 0) || (uVar8 = 1L << (uVar7 & 0x3f), (uVar8 & uVar4) != 0)) {
LAB_00aea8d4:
                    /* catch() { ... } // from try @ 00aea6b0 with catch @ 00aea8e0 */
            CRYPTO_free(ptr);
            return 0;
                    /* catch() { ... } // from try @ 00aea748 with catch @ 00aea8e8 */
          }
          uVar4 = uVar8 | uVar4;
          uVar5 = uVar5 + 1;
          puVar6[1] = (char)uVar7;
          *puVar6 = (char)(uVar7 >> 8);
          puVar6 = puVar6 + 2;
        } while (uVar5 < uVar1);
      }
      CRYPTO_free((void *)*param_1);
      *param_1 = ptr;
      *param_2 = lVar10;
    }
    uVar3 = 1;
  }
  return uVar3;
}

