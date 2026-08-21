
undefined8 X509v3_addr_subset(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  short sVar7;
  undefined1 *puVar8;
  
  uVar4 = 1;
  if ((param_1 != 0) && (param_1 != param_2)) {
    if (param_2 == 0) {
LAB_00b6a52c:
      uVar4 = 0;
    }
    else {
                    /* try { // try from 00b6a3f8 to 00c6a403 has its CatchHandler @ 00b6a514 */
      iVar1 = OPENSSL_sk_num(param_1);
                    /* try { // try from 00b6a404 to 00c6a517 has its CatchHandler @ 00b6a3b4 */
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar5 = OPENSSL_sk_value(param_1,iVar1);
          if (**(int **)(lVar5 + 8) == 0) goto LAB_00b6a52c;
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(param_1);
        } while (iVar1 < iVar2);
      }
      iVar1 = OPENSSL_sk_num(param_2);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar5 = OPENSSL_sk_value(param_2,iVar1);
          if (**(int **)(lVar5 + 8) == 0) goto LAB_00b6a52c;
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(param_2);
        } while (iVar1 < iVar2);
      }
      OPENSSL_sk_set_cmp_func(param_2,&LAB_00b6955c);
      iVar1 = OPENSSL_sk_num(param_1);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar5 = OPENSSL_sk_value(param_1,iVar1);
          uVar3 = OPENSSL_sk_find(param_2,lVar5);
          plVar6 = (long *)OPENSSL_sk_value(param_2,uVar3);
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          sVar7 = 0;
          if (*plVar6 != 0) {
            puVar8 = *(undefined1 **)(*plVar6 + 8);
            sVar7 = 0;
            if (puVar8 != (undefined1 *)0x0) {
              sVar7 = CONCAT11(*puVar8,puVar8[1]);
            }
          }
          iVar2 = 4;
          if (sVar7 != 1) {
            iVar2 = (uint)(sVar7 == 2) << 4;
          }
          uVar4 = FUN_00b6a544(*(undefined8 *)(plVar6[1] + 8),
                               *(undefined8 *)(*(long *)(lVar5 + 8) + 8),iVar2);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6a3f8 with catch @ 00b6a514
                        */
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(param_1);
        } while (iVar1 < iVar2);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

