
undefined8 FUN_00b81230(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 00b811c4 with catch @ 00b8123c */
  iVar1 = OPENSSL_sk_num(*param_2);
  if (0 < iVar1) {
    iVar3 = 0;
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(*param_2,iVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b81384 with catch @ 00b81274
                       catch(type#1 @ 00000000) { ... } // from try @ 00b813dc with catch @ 00b81274
                       catch(type#1 @ 00000000) { ... } // from try @ 00b81450 with catch @ 00b81274
                        */
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return 0x31;
        }
        if (puVar4[2] != 0) {
          return 0x31;
        }
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          uVar5 = FUN_00b81670(param_1);
          if ((int)uVar5 == 0) {
            iVar3 = 2;
          }
          else if ((int)uVar5 != 0x2f) {
            return uVar5;
          }
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(*param_2);
    } while (iVar1 < iVar2);
                    /* try { // try from 00b812d8 to 00c812df has its CatchHandler @ 00b81434 */
    if (iVar3 == 1) {
      return 0x2f;
    }
  }
  iVar1 = OPENSSL_sk_num(param_2[1]);
                    /* try { // try from 00b812f0 to 00c812f3 has its CatchHandler @ 00b81478 */
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if ((puVar4[1] != 0) || (puVar4[2] != 0)) {
                    /* try { // try from 00b81358 to 00c81383 has its CatchHandler @ 00b81438 */
          return 0x31;
        }
        uVar5 = FUN_00b81670(param_1);
        if ((int)uVar5 != 0x2f) {
          if ((int)uVar5 == 0) {
            return 0x30;
          }
          return uVar5;
        }
      }
      iVar1 = iVar1 + 1;
      iVar3 = OPENSSL_sk_num(param_2[1]);
    } while (iVar1 < iVar3);
  }
  return 0;
}

